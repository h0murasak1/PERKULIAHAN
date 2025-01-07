package controllers;

import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.MenuItem;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.control.TableColumn;
import javafx.stage.Stage;
import models.Dashboard;
import javafx.scene.layout.AnchorPane;
import database.DBHelper;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class DashboardController {

    @FXML
    private TableView<Dashboard> dashboardTable;

    @FXML
    private MenuItem manageCustomersMenuItem;
    
    @FXML
    private MenuItem manageSubscriptionsMenuItem;
    
    @FXML
    private MenuItem handleLogout;

    @FXML
    private TableColumn<Dashboard, String> colName;

    @FXML
    private TableColumn<Dashboard, String> colPlanName;
    @FXML
    private TableColumn<Dashboard, Double> colPrice;
    @FXML
    private TableColumn<Dashboard, String> colStartDate;
    @FXML
    private TableColumn<Dashboard, String> colEndDate;

    private String role;

    private ObservableList<Dashboard> dashboardList = FXCollections.observableArrayList();

    @FXML
    public void initialize() {
        colName.setCellValueFactory(new PropertyValueFactory<>("name"));
        colPlanName.setCellValueFactory(new PropertyValueFactory<>("planName"));
        colPrice.setCellValueFactory(new PropertyValueFactory<>("price"));
        colStartDate.setCellValueFactory(new PropertyValueFactory<>("startDate"));
        colEndDate.setCellValueFactory(new PropertyValueFactory<>("endDate"));

        loadDashboardData();
    }

    private void loadDashboardData() {
        dashboardList.clear();
        try (Connection conn = DBHelper.getConnection()) {
            String sql = "SELECT c.name, s.plan_name, s.price, s.start_date, s.end_date FROM customers c LEFT JOIN subscriptions s ON c.customer_id = s.customer_id;";
            PreparedStatement stmt = conn.prepareStatement(sql);
            ResultSet rs = stmt.executeQuery();

            while (rs.next()) {
                dashboardList.add(new Dashboard(
                        rs.getString("name"),
                        rs.getString("plan_name"),
                        rs.getDouble("price"),
                        rs.getString("start_date"),
                        rs.getString("end_date")
                ));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        dashboardTable.setItems(dashboardList);
    }

    @FXML
    public void manageCustomersMenu() {
        System.out.println("Menu Customer diklik");
        loadPage("/views/customers.fxml", "Manage Customers");
    }

    @FXML
    public void manageSubscriptionsMenu() {
        System.out.println("Menu Subscription diklik");
        loadPage("/views/Subscriptions.fxml", "Manage Subscriptions");
    }

    @FXML
    public void handleLogout() {
        loadPage("/views/login.fxml", "Login");
    }

    private void loadPage(String fxmlPath, String title) {
        try {
            FXMLLoader loader = new FXMLLoader(getClass().getResource(fxmlPath));
            AnchorPane root = loader.load();
            
            Stage stage = new Stage();
            stage.setTitle(title);
            stage.setScene(new Scene(root));
            stage.show();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void setRole(String role) {
        this.role = role;
        adjustMenuBasedOnRole();
    }

    private void adjustMenuBasedOnRole() {
        if ("admin".equals(role)) {
            // Show all menu items
            manageCustomersMenuItem.setVisible(true);
            manageSubscriptionsMenuItem.setVisible(true);
            handleLogout.setVisible(true);
        } else if ("customer".equals(role)) {
            // Hide some menu items
            manageCustomersMenuItem.setVisible(false);
            manageSubscriptionsMenuItem.setVisible(false);
            handleLogout.setVisible(true);
        } else {
            // Hide all menu items
            manageCustomersMenuItem.setVisible(false);
            manageSubscriptionsMenuItem.setVisible(false);
            handleLogout.setVisible(false);
        }
    }
}
