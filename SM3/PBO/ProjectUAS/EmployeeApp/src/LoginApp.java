import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.stage.Stage;

public class LoginApp extends EmployeeApp {
    private TextField usernameField = new TextField();
    private PasswordField passwordField = new PasswordField();
    private Button loginButton = new Button("Login");
    private Label errorLabel = new Label();
    private ImageView passwordImageView = new ImageView();

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Login Page");

        // Image for the login page
        ImageView logo = new ImageView(new Image(getClass().getResourceAsStream("logo.png")));
        logo.setFitWidth(150);
        logo.setPreserveRatio(true);
        logo.setSmooth(true);

        // Login layout
        VBox loginLayout = new VBox(20);
        loginLayout.setPadding(new Insets(40));
        loginLayout.setAlignment(Pos.CENTER);
        loginLayout.setStyle("-fx-background-color: #f3f4f6;");

        usernameField.setPromptText("Username");
        passwordField.setPromptText("Password");
        usernameField.setMaxWidth(300);
        passwordField.setMaxWidth(300);
        loginButton.getStyleClass().add("btn-primary");

        errorLabel.setStyle("-fx-text-fill: red; -fx-font-size: 14px;");
        errorLabel.setVisible(false);

        // Set default password image (lock icon)
        passwordImageView.setImage(new Image(getClass().getResourceAsStream("lock.png")));
        passwordImageView.setFitWidth(30);
        passwordImageView.setPreserveRatio(true);

        loginButton.setOnAction(e -> handleLogin(primaryStage));

        loginLayout.getChildren().addAll(logo, usernameField, passwordField, passwordImageView, loginButton, errorLabel);

        Scene loginScene = new Scene(loginLayout, 400, 400);
        loginScene.getStylesheets().add(getClass().getResource("style.css").toExternalForm());
        primaryStage.setScene(loginScene);
        primaryStage.show();
    }

    private void handleLogin(Stage primaryStage) {
        String username = usernameField.getText();
        String password = passwordField.getText();

        if (validateCredentials(username, password)) {
            // Password correct, change image to unlock icon
            passwordImageView.setImage(new Image(getClass().getResourceAsStream("unlock.png")));
            
            // Navigate to the main app
            super.start(primaryStage);
        } else {
            // Password incorrect, show error message and keep lock image
            errorLabel.setText("Invalid username or password. Please try again.");
            errorLabel.setVisible(true);
            passwordImageView.setImage(new Image(getClass().getResourceAsStream("lock.png"))); // Keep lock image
        }
    }

    private boolean validateCredentials(String username, String password) {
        // Replace with actual authentication logic
        return "admin".equals(username) && "password".equals(password);
    }

    public static void main(String[] args) {
        launch(args);
    }
}
