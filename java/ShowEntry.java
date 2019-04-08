import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class ShowEntry implements ActionListener
{
	private JFrame frame;
	private JButton button;
	private JLabel label;
	private JTextField textField;
	
	public static void main(String[] args)
	{
		new ShowEntry();
	}

	public ShowEntry()
	{
		frame = new JFrame();
		frame.setLayout(null);
		frame.setSize(200, 215);
		frame.setLocationRelativeTo(null);
		frame.setTitle("ShowEntry");
		frame.getContentPane().setBackground(Color.BLACK);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setResizable(false);
		
		button = new JButton("SHOW ENTRY");
		button.setActionCommand("1");
		button.setSize(180, 50);
		button.setLocation(7, 70);
		button.setFocusable(false);
		button.setVisible(true);
		button.addActionListener(this);
		
		label = new JLabel("");
		label.setSize(180, 50);
		label.setLocation(7, 130);
		label.setBackground(Color.WHITE);
		label.setOpaque(true);
		label.setForeground(Color.BLACK);
		label.setVisible(true);
		
		textField = new JTextField("");
		textField.setSize(180, 50);
		textField.setLocation(7, 10);
		textField.setVisible(true);
		
		frame.add(button);
		frame.add(label);
		frame.add(textField);
		frame.setVisible(true);
	}

	public void actionPerformed(ActionEvent arg0)
	{
		label.setText(textField.getText());
	}
}
