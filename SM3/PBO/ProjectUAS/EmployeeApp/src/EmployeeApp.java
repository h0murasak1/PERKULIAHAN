import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.chart.PieChart;
import javafx.scene.control.*;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.*;
import javafx.stage.Stage;
import java.sql.SQLException;
import java.util.Collections;
import java.util.Map;
import java.util.stream.Collectors;

public class EmployeeApp extends Application {
    private final EmployeeDAO employeeDAO = new EmployeeDAO();
    private final TableView<Employee> table = new TableView<>();
    private final ObservableList<Employee> data = FXCollections.observableArrayList();
    
    private BorderPane mainLayout = new BorderPane();
    private VBox menuPanel = new VBox(20);
    private VBox contentArea = new VBox(20);
    
    private Button homeButton = new Button("🏠  Dashboard");
    private Button employeeButton = new Button("👥  Data Karyawan");
    
    private TextField nameField = new TextField();
    private TextField positionField = new TextField();
    private TextField salaryField = new TextField();
    private Button addButton = new Button("Add Employee");
    private Button editButton = new Button("Edit Employee");
    private Button deleteButton = new Button("Delete Employee");

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Employee Management System");

        setupMenuPanel();
        setupEmployeeTable();
        setupForm();

        // Default view (Home)
        showHome();

        Scene scene = new Scene(mainLayout, 1000, 700);
        scene.getStylesheets().add(getClass().getResource("style.css").toExternalForm());
        
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    // Sidebar Menu
    private void setupMenuPanel() {
        menuPanel.setPadding(new Insets(40));
        menuPanel.setStyle("-fx-background-color: #1f2937; -fx-pref-width: 250;");
        menuPanel.setAlignment(Pos.TOP_CENTER);

        homeButton.getStyleClass().add("menu-button");
        employeeButton.getStyleClass().add("menu-button");

        homeButton.setOnAction(e -> showHome());
        employeeButton.setOnAction(e -> showEmployeeData());

        menuPanel.getChildren().addAll(homeButton, employeeButton);
        mainLayout.setLeft(menuPanel);
    }

    // Home View with Dashboard
private void showHome() {
    contentArea.getChildren().clear();

    Label welcomeText = new Label("Employee Management Dashboard");
    welcomeText.setStyle("-fx-font-size: 24px; -fx-text-fill: #374151;");

    // Total Employees Label
    Label employeeCountLabel = new Label("Total Employees: " + getEmployeeCount());
    employeeCountLabel.setStyle("-fx-font-size: 18px; -fx-text-fill: #4b5563;");

    // Pie Chart for Employee Positions
    PieChart positionChart = createPositionChart();
    positionChart.setTitle("Employee Distribution by Position");

    VBox statsBox = new VBox(20, employeeCountLabel, positionChart);
    statsBox.setAlignment(Pos.CENTER);
    statsBox.setPadding(new Insets(20));
    statsBox.setStyle("-fx-background-color:rgba(249, 250, 251, 0); -fx-border-radius: 10px; -fx-padding: 20px;");

    contentArea.setAlignment(Pos.CENTER);
    contentArea.getChildren().addAll(welcomeText, statsBox);
    mainLayout.setCenter(contentArea);
}

// Helper method to create a PieChart for employee positions
private PieChart createPositionChart() {
    PieChart pieChart = new PieChart();

    try {
        // Group employees by position and count them
        Map<String, Long> positionCounts = employeeDAO.getAllEmployees().stream()
                .collect(Collectors.groupingBy(Employee::getPosition, Collectors.counting()));

        // Add data to the PieChart
        for (Map.Entry<String, Long> entry : positionCounts.entrySet()) {
            pieChart.getData().add(new PieChart.Data(entry.getKey(), entry.getValue()));
        }
    } catch (SQLException e) {
        e.printStackTrace();
    }

    return pieChart;
}

// Helper method to get the total number of employees
private int getEmployeeCount() {
    try {
        return employeeDAO.getAllEmployees().size();
    } catch (SQLException e) {
        e.printStackTrace();
        return 0;
    }
    }

    // Employee Data View
    private void showEmployeeData() {
        contentArea.getChildren().clear();
        VBox layout = new VBox(20, table, setupForm());
        layout.setPadding(new Insets(40));
        layout.setAlignment(Pos.CENTER);
        contentArea.getChildren().add(layout);
        refreshTable();
    }

    // Tabel Karyawan
    private void setupEmployeeTable() {
        TableColumn<Employee, Integer> idCol = new TableColumn<>("ID");
        idCol.setCellValueFactory(new PropertyValueFactory<>("id"));
        idCol.setPrefWidth(80);

        TableColumn<Employee, String> nameCol = new TableColumn<>("Name");
        nameCol.setCellValueFactory(new PropertyValueFactory<>("name"));
        nameCol.setPrefWidth(200);

        TableColumn<Employee, String> positionCol = new TableColumn<>("Position");
        positionCol.setCellValueFactory(new PropertyValueFactory<>("position"));
        positionCol.setPrefWidth(200);

        TableColumn<Employee, Double> salaryCol = new TableColumn<>("Salary");
        salaryCol.setCellValueFactory(new PropertyValueFactory<>("salary"));
        salaryCol.setPrefWidth(150);

        Collections.addAll(table.getColumns(), idCol, nameCol, positionCol, salaryCol);
        table.setColumnResizePolicy(TableView.UNCONSTRAINED_RESIZE_POLICY);
        table.getStyleClass().add("custom-table");
    }

    // Form
    private VBox setupForm() {
        nameField.setPromptText("Employee Name");
        positionField.setPromptText("Position");
        salaryField.setPromptText("Salary");

        VBox form = new VBox(10, nameField, positionField, salaryField, addButton, editButton, deleteButton);
        form.setPadding(new Insets(20));
        form.setAlignment(Pos.CENTER_LEFT);
        form.setStyle("-fx-background-color: #ffffff; -fx-border-color: #ddd; -fx-border-radius: 10px;");

        addButton.getStyleClass().add("btn-primary");
        editButton.getStyleClass().add("btn-warning");
        deleteButton.getStyleClass().add("btn-danger");

        addButton.setOnAction(e -> addEmployee());
        editButton.setOnAction(e -> editEmployee());
        deleteButton.setOnAction(e -> deleteEmployee());

        return form;
    }

    private void refreshTable() {
        try {
            data.setAll(employeeDAO.getAllEmployees());
            table.setItems(data);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void addEmployee() {
        try {
            Employee emp = new Employee(
                    nameField.getText(),
                    positionField.getText(),
                    Double.parseDouble(salaryField.getText())
            );
            employeeDAO.addEmployee(emp);
            refreshTable();
            clearFields();
        } catch (Exception ex) {
            showAlert("Error", "Failed to add employee.");
        }
    }

    private void editEmployee() {
        Employee selected = table.getSelectionModel().getSelectedItem();
        if (selected != null) {
            selected.setName(nameField.getText());
            selected.setPosition(positionField.getText());
            selected.setSalary(Double.parseDouble(salaryField.getText()));

            try {
                employeeDAO.updateEmployee(selected);
                refreshTable();
                clearFields();
            } catch (SQLException ex) {
                showAlert("Error", "Failed to update employee.");
            }
        }
    }

    private void deleteEmployee() {
        Employee selected = table.getSelectionModel().getSelectedItem();
        if (selected != null) {
            try {
                employeeDAO.deleteEmployee(selected.getId());
                refreshTable();
                clearFields();
            } catch (SQLException ex) {
                showAlert("Error", "Failed to delete employee.");
            }
        }
    }

    private void clearFields() {
        nameField.clear();
        positionField.clear();
        salaryField.clear();
    }

    private void showAlert(String title, String message) {
        Alert alert = new Alert(Alert.AlertType.WARNING);
        alert.setTitle(title);
        alert.setContentText(message);
        alert.showAndWait();
    }
}
