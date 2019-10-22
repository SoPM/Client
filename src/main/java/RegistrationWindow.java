import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Properties;
import javax.mail.Message;
import javax.mail.MessagingException;
import javax.mail.Session;
import javax.mail.Transport;
import javax.mail.internet.InternetAddress;
import javax.mail.internet.MimeMessage;

public class RegistrationWindow extends JFrame {
    private JPanel panel1;
    private JButton registrationButton;
    private JButton enterButton;
    private JTextField login;
    private JTextField email;
    private JPasswordField password;
    private JPasswordField samePassword;

    public RegistrationWindow() {
        setContentPane(panel1);
        setBounds((int) (Toolkit.getDefaultToolkit().getScreenSize().getWidth() / 2 - 400),
                (int) (Toolkit.getDefaultToolkit().getScreenSize().getHeight() / 2 - 250), 800, 500);
        panel1.setBackground(Color.white);

        login.setText("");
        password.setText("");
        samePassword.setText("");
        email.setText("");

        setVisible(true);

        enterButton.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e) {
                System.out.println("LOGIN:" + login.getText() + "PASSWORD:" + String.valueOf(password.getPassword()));
                if (!login.getText().equals("") && !String.valueOf(password.getPassword()).equals("")) {
                    RequestFormer.setConnection();
                    String answer = RequestFormer.login(login.getText(), String.valueOf(password.getPassword()));
                    System.out.println(answer);
                    if (answer == "OK") {
                        setVisible(false);
                        new UserWindow();
                    } else {
                        JDialog dialog = new JDialog();
                        dialog.setSize(200, 150);
                        JOptionPane.showMessageDialog(dialog, answer);
                    }
                }
                else {
                    JDialog dialog = new JDialog();
                    dialog.setSize(200, 150);
                    JOptionPane.showMessageDialog(dialog, "Try again! Login/password is incorrect!");
                }
            }
        });

        registrationButton.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e) {
                if (isValid("login", login.getText()) && isValid("password", String.valueOf(password.getPassword()))
                        && password.getSelectedText().equals(samePassword.getSelectedText()) && !email.getText().equals("")) {
                    RequestFormer.setConnection();
                    String answer = RequestFormer.reqistrate(login.getText(), email.getText(), String.valueOf((password.getSelectedText())));
                    System.out.println(answer);
                    if (answer == "OK") {
                        sendEmail(email.getText());
                        setVisible(false);
                        new UserWindow();
                    } else {
                        JDialog dialog = new JDialog();
                        dialog.setSize(200, 150);
                        JOptionPane.showMessageDialog(dialog, answer);
                    }
                } else {
                    JDialog dialog = new JDialog();
                    dialog.setSize(200, 150);
                    JOptionPane.showMessageDialog(dialog, "Try again! Data is incorrect!");
                }
            }
        });

        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
    }

    private static boolean isValid(String parameter, String value) {
        if (parameter == "login" && value != null && value.matches("([A-Za-z0-9]+).{8,40}"))
            return true;
        else if (parameter == "password" && value != null && value.matches("(?=.*[a-z])(?=.*\\d)(?=.*[A-Z])(?=.*[@#$%!]).{8,40}"))
            return true;
        return false;
    }

    private static void sendEmail(String email) {
        String to = "@";
        String from = email;
        String host = "localhost";

        Properties properties = System.getProperties();
        properties.setProperty("mail.smtp.host", host);
        Session session = Session.getDefaultInstance(properties);
        try {
            MimeMessage message = new MimeMessage(session); // email message

            message.setFrom(new InternetAddress(from)); // setting header fields

            message.addRecipient(Message.RecipientType.TO, new InternetAddress(to));

            message.setSubject("Test Mail from Java Program"); // subject line

            // actual mail body
            message.setText("You can send mail from Java program by using mail API, but you need" +
                    "couple of more JAR files e.g. smtp.jar and activation.jar");

            // Send message
            Transport.send(message);
            System.out.println("Email Sent successfully....");
        } catch (MessagingException mex) {
            mex.printStackTrace();
        }
    }

    public static void main(String[] args) {
        new RegistrationWindow();
    }
}
