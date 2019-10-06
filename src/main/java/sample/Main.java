package sample;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception {
        Parent root = FXMLLoader.load(getClass().getResource("sample/UI/sample.fxml"));
        primaryStage.setTitle("Enter Window");
        primaryStage.setScene(new Scene(root, 700, 400));

        primaryStage.show();
    }

    public static void main(String[] args) {
        //RequestFormer.setConnection();
        launch(args);
    }
}
