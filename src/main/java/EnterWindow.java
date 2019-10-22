import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class EnterWindow extends JFrame {
    private JButton enterButton;
    private JPanel panel1;
    private JButton registrationButton;
    private JPasswordField password;
    private JTextField login;

    public EnterWindow() {
        setContentPane(panel1);
        setBounds((int) (Toolkit.getDefaultToolkit().getScreenSize().getWidth() / 2 - 400),
                (int) (Toolkit.getDefaultToolkit().getScreenSize().getHeight() / 2 - 250), 800, 500);
        panel1.setBackground(Color.white);

        login.setText("");
        password.setText("");

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
                } else {
                    JDialog dialog = new JDialog();
                    dialog.setSize(200, 150);
                    JOptionPane.showMessageDialog(dialog, "Try again! Login/password is incorrect!");
                }
            }
        });

        registrationButton.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e) {
                setVisible(false);
                new RegistrationWindow();
            }
        });

        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new EnterWindow();
    }


}
