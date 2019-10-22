import java.io.*;
import java.net.Socket;

public class SoPMClient {
    private static final String IP_ADDRESS = "localhost";
    private static final int PORT = 5000;

    private static boolean isConnected_;
    private static Socket socket_;

    public SoPMClient(){
        isConnected_ = false;
    }

    public static void connectToServer() throws IOException {
        try {
            socket_ = new Socket(IP_ADDRESS,  PORT);
            isConnected_ = true;
        } catch (IOException e) {
            throw e;
        }
    }

    public static void closeConnection() {
        if (!isConnected_) {
            return;
        }
        try {
            socket_.close();
            System.out.println("Connection is closed");
        } catch (IOException e) { /* cannot happen */ }
        isConnected_ = false;
    }

    public static boolean hasConnection() {
        return isConnected_;
    }

    public static String request(String request) {
        try {
            //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            DataOutputStream out = new DataOutputStream(socket_.getOutputStream());
            System.out.println("Sending request to the ServerSocket");
            out.writeUTF(request);
            System.out.println("Server Wrote message to client.");
            out.flush();

            DataInputStream in = new DataInputStream(socket_.getInputStream());
            System.out.println("DataInputStream created");
            System.out.println("Server reading from channel");
            String entry = in.readUTF();
            System.out.println("READ from client message - " + entry);
            System.out.println("Server try writing to channel");

            return entry;
        }
        catch (IOException e) {
            return "Loser";
        }
    }
}