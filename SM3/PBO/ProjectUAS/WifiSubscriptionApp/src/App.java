import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class App extends Application {
    @Override
    public void start(Stage primaryStage) {
        // Membuat Label
        Label label = new Label("Selamat datang di JavaFX!");

        // Membuat Tombol
        Button button = new Button("Klik Saya");

        // Menambahkan aksi ketika tombol diklik
        button.setOnAction(event -> label.setText("Tombol telah diklik!"));

        // Menyusun Label dan Tombol dalam VBox
        VBox root = new VBox(10); // Jarak antar elemen 10px
        root.getChildren().addAll(label, button);

        // Membuat Scene dan Menambahkan ke Stage
        Scene scene = new Scene(root, 300, 200);
        primaryStage.setTitle("Contoh JavaFX");
        primaryStage.setScene(scene);

        // Menampilkan Jendela
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
