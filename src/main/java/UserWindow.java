import javax.swing.*;
import java.awt.*;

public class UserWindow extends JFrame {
    private JPanel panel;

    public UserWindow() {
        setContentPane(panel);
        setBounds(0, 0, (int) (Toolkit.getDefaultToolkit().getScreenSize().getWidth()),
                (int) (Toolkit.getDefaultToolkit().getScreenSize().getHeight()));
        panel.setBackground(Color.white);
        System.out.println((int) (Toolkit.getDefaultToolkit().getScreenSize().getWidth()));

        setVisible(true);

        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new UserWindow();
    }
}
