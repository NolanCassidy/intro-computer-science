import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;

public class SimpleQuiz implements ActionListener
{
	private JFrame frame;
	private JLabel l1, l2, l3, l4;
	private JButton b1, b2, b3, b4, b5, b6;
	private JCheckBox cb1, cb2, cb3;
	private JRadioButton rb1, rb2, rb3;
	private ButtonGroup g1;
	private JComboBox combo;
	private JMenuBar menu;
	private JMenuItem startMenuItem, exitMenuItem;
	private JMenu fileMenu;
	private int points;
	
	public static void main(String[] args)
	{
		new SimpleQuiz();
	}

	public SimpleQuiz()
	{
		frame = new JFrame();
		frame.setLayout(null);
		frame.setSize(200, 155);
		frame.setLocationRelativeTo(null);
		frame.setTitle("Simple Quiz");
		frame.getContentPane().setBackground(Color.BLACK);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setResizable(false);
		
		l1 = new JLabel("Select your gender:");
		l1.setSize(180, 50);
		l1.setLocation(7, 7);
		l1.setForeground(Color.WHITE);
		l1.setVisible(false);
		
		l2 = new JLabel("QUIZ");
		l2.setFont(l2.getFont().deriveFont(75.0f));
		l2.setSize(193, 140);
		l2.setLocation(7, 0);
		l2.setForeground(Color.white);
		l2.setVisible(true);
		
		rb1 = new JRadioButton("Yes");
		rb1.setSize(67, 20);
		rb1.setLocation(5, 40);
		rb1.setFocusable(false);
		rb1.setOpaque(false);
		rb1.setForeground(Color.WHITE);
		rb1.setVisible(false);
		
		rb2 = new JRadioButton("No");
		rb2.setSize(67, 20);
		rb2.setLocation(5, 60);
		rb2.setFocusable(false);
		rb2.setOpaque(false);
		rb2.setForeground(Color.WHITE);
		rb2.setVisible(false);
		
		rb3 = new JRadioButton("Other");
		rb3.setSize(67, 20);
		rb3.setLocation(5, 80);
		rb3.setFocusable(false);
		rb3.setOpaque(false);
		rb3.setForeground(Color.WHITE);
		rb3.setVisible(false);
		
		g1 = new ButtonGroup();
		g1.add(rb1);
		g1.add(rb2);
		g1.add(rb3);
		
		cb1 = new JCheckBox("Red");
		cb1.setSize(67, 20);
		cb1.setLocation(5, 40);
		cb1.setBackground(Color.BLACK);
		cb1.setForeground(Color.WHITE);
		cb1.setVisible(false);
		
		cb2 = new JCheckBox("Blue");
		cb2.setSize(67, 20);
		cb2.setLocation(5, 60);
		cb2.setBackground(Color.BLACK);
		cb2.setForeground(Color.WHITE);
		cb2.setVisible(false);
		
		cb3 = new JCheckBox("Color");
		cb3.setSize(67, 20);
		cb3.setLocation(5, 80);
		cb3.setBackground(Color.BLACK);
		cb3.setForeground(Color.WHITE);
		cb3.setVisible(false);
		
		String[] comboData = {"Yes: 100%", "Yes: 75%", "Yes: 50%", "Yes: 25%", "Hell Nah"};
		combo = new JComboBox(comboData);
		combo.setSize(185, 20);
		combo.setLocation(5, 40);
		combo.setVisible(false);
		combo.setSelectedIndex(-1);
		combo.addActionListener(this);
		
		b1 = new JButton("Next");
		b1.setActionCommand("next1");
		b1.setSize(80, 20);
		b1.setLocation(103, 100);
		b1.setFocusable(false);
		b1.setVisible(false);
		b1.addActionListener(this);
		
		b2 = new JButton("Next");
		b2.setActionCommand("next2");
		b2.setSize(80, 20);
		b2.setLocation(103, 100);
		b2.setFocusable(false);
		b2.setVisible(false);
		b2.addActionListener(this);
		b2.setEnabled(false);
		
		b3 = new JButton("Score");
		b3.setActionCommand("score");
		b3.setSize(80, 20);
		b3.setLocation(103, 100);
		b3.setFocusable(false);
		b3.setVisible(false);
		b3.addActionListener(this);
		
		b4 = new JButton("Submit");
		b4.setActionCommand("submit1");
		b4.setSize(80, 20);
		b4.setLocation(13, 100);
		b4.setFocusable(false);
		b4.setVisible(false);
		b4.addActionListener(this);
		
		b5 = new JButton("Submit");
		b5.setActionCommand("submit2");
		b5.setSize(80, 20);
		b5.setLocation(13, 100);
		b5.setFocusable(false);
		b5.setVisible(false);
		b5.addActionListener(this);
		
		b6 = new JButton("Submit");
		b6.setActionCommand("submit3");
		b6.setSize(80, 20);
		b6.setLocation(13, 100);
		b6.setFocusable(false);
		b6.setVisible(false);
		b6.addActionListener(this);
		
		menu = new JMenuBar();
		menu.setLocation(0,0);
		menu.setSize(200, 17);
		menu.setVisible(true);
		
		fileMenu = new JMenu("File");

		startMenuItem = new JMenuItem("Start");
		startMenuItem.setActionCommand("start");
		startMenuItem.addActionListener(this);
		
		exitMenuItem = new JMenuItem("Exit");
		exitMenuItem.setActionCommand("exit");
		exitMenuItem.addActionListener(this);
		
		fileMenu.add(startMenuItem);
		fileMenu.add(exitMenuItem);

		menu.add(fileMenu);
		
		frame.add(menu);
		frame.add(l1);
		frame.add(l2);
		frame.add(rb1);
		frame.add(rb2);
		frame.add(rb3);
		frame.add(b1);
		frame.add(b2);
		frame.add(b3);
		frame.add(b4);
		frame.add(b5);
		frame.add(b6);
		frame.add(cb1);
		frame.add(cb2);
		frame.add(cb3);
		frame.add(combo);
		frame.setVisible(true);
	}

	public void actionPerformed(ActionEvent arg0)
	{
		if (arg0.getActionCommand() == "start")
		{
			l1.setVisible(true);
			l1.setText("Select your gender:");
			l2.setVisible(false);
			rb1.setVisible(true);
			rb1.setOpaque(false);
			rb1.setEnabled(true);
			rb2.setVisible(true);
			rb2.setOpaque(false);
			rb2.setEnabled(true);
			rb3.setVisible(true);
			rb3.setOpaque(false);
			rb3.setEnabled(true);
			g1.clearSelection();
			cb1.setOpaque(false);
			cb1.setEnabled(true);
			cb1.setSelected(false);
			cb2.setOpaque(false);
			cb2.setEnabled(true);
			cb2.setSelected(false);
			cb3.setOpaque(false);
			cb3.setEnabled(true);
			cb3.setSelected(false);
			combo.setEnabled(true);
			b1.setVisible(true);
			b1.setEnabled(false);
			b2.setEnabled(false);
			b3.setEnabled(false);
			b4.setVisible(true);
			b4.setEnabled(true);
			b5.setEnabled(true);
			b6.setEnabled(true);
			points = 0;
		}
		
		if (arg0.getActionCommand() == "exit")
		{
			frame.dispose();
		}
			
		if (arg0.getActionCommand() == "next1")
		{
			l1.setText("Pick two words to describe red.");
			rb1.setVisible(false);
			rb2.setVisible(false);
			rb3.setVisible(false);
			cb1.setVisible(true);
			cb2.setVisible(true);
			cb3.setVisible(true);
			b1.setVisible(false);
			b4.setVisible(false);
			b2.setVisible(true);
			b5.setVisible(true);
		}
		
		if (arg0.getActionCommand() == "next2")
		{
			l1.setText("Does Dave have a soul?");
			cb1.setVisible(false);
			cb2.setVisible(false);
			cb3.setVisible(false);
			combo.setVisible(true);
			b2.setVisible(false);
			b5.setVisible(false);
			b3.setVisible(true);
			b6.setVisible(true);
		}
		
		if (arg0.getActionCommand() == "score")
		{
			l1.setVisible(false);
			combo.setVisible(false);
			b3.setVisible(false);
			b6.setVisible(false);
			l2.setVisible(true);
			l2.setText(points + "/3");
		}
		
		if (arg0.getActionCommand() == "submit1")
		{
			rb1.setBackground(Color.RED);
			rb1.setOpaque(true);
			rb1.setEnabled(false);
			rb2.setBackground(Color.RED);
			rb2.setOpaque(true);
			rb2.setEnabled(false);
			rb3.setBackground(Color.GREEN);
			rb3.setOpaque(true);
			rb3.setEnabled(false);
			b1.setEnabled(true);
			b4.setEnabled(false);
			if (rb3.isSelected() == true)
				points += 1;
		}
		
		if (arg0.getActionCommand() == "submit2")
		{
			cb1.setBackground(Color.GREEN);
			cb1.setOpaque(true);
			cb1.setEnabled(false);
			cb2.setBackground(Color.RED);
			cb2.setOpaque(true);
			cb2.setEnabled(false);
			cb3.setBackground(Color.GREEN);
			cb3.setOpaque(true);
			cb3.setEnabled(false);
			b2.setEnabled(true);
			b5.setEnabled(false);
			if (cb1.isSelected() == true && cb2.isSelected() == false && cb3.isSelected() == true)
				points += 1;
		}
		
		if (arg0.getActionCommand() == "submit3")
		{
			combo.setEnabled(false);
			b3.setEnabled(true);
			b6.setEnabled(false);
			if (combo.getSelectedIndex() == 1)
				points += 1;
		}
	}
}
