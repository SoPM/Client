import java.io.IOException;
import org.json.simple.parser.JSONParser;
import org.json.simple.*;
import org.json.simple.parser.ParseException;

public class RequestFormer {

    private static SoPMClient client_;

    public static void setConnection() {
        try {
            client_.connectToServer();
        }
        catch (IOException e) {

        }
    }

    public static void disconnect() {
        client_.closeConnection();
    }

    public static String reqistrate(String login, String email, String password) {
        JSONObject obj1 = new JSONObject();
        obj1.put("type", "login");
        JSONObject obj2 = new JSONObject();
        obj2.put("password", password);
        obj2.put("login", login);
        obj2.put("email", email);
        obj1.put("description", obj2);
        System.out.println(obj1);
        String answer = client_.request(obj1.toString());
        JSONParser parser = new JSONParser();
        JSONObject output = null;
        try {
            output = (JSONObject) parser.parse(answer);
        } catch (ParseException e) {
            e.printStackTrace();
        }
        if (output.get("type").toString().equals("ok")) {
            return output.get("type").toString();
        }
        else {
            return "Error! Try again later!";
        }
    }

    public static String login(String login, String password) {
        JSONObject obj1 = new JSONObject();
        obj1.put("type", "login");
        JSONObject obj2 = new JSONObject();
        obj2.put("password", password);
        obj2.put("login", login);
        obj1.put("description", obj2);
        System.out.println(obj1);
        String answer = client_.request(obj1.toString());
        JSONParser parser = new JSONParser();
        JSONObject output = null;
        try {
            output = (JSONObject) parser.parse(answer);
        } catch (ParseException e) {
            e.printStackTrace();
        }
        if (output.get("type").toString().equals("ok")) {
            return answer;
        }
        else {
            return "Error! Try again later!";
        }
    }
}