// Nolan Cassidy
// Redwood High School
// Computer Programming 2
// 1/29/14
// DrawHouse.Java

import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;
import java.awt.Font;

public class DrawHouse extends Applet
{
	public void paint(Graphics g)
	{
      Color softblue = new Color(66,139,202);
      Color softgreen = new Color(71,164,71);
      Color softyellow = new Color(240,173,78);
      Color softred = new Color(212,63,58);
      Color brightyellow = new Color(255,215,0);

		this.setSize(500,500);

      this.setBackground(softblue);

      g.setColor(Color.BLACK);
      g.drawRect(100, 200, 300, 300);
      g.setColor(Color.GRAY);
      g.fillRect(101, 201, 299, 299);

      g.setColor(Color.BLACK);
      g.drawRect(300, 350, 75, 150);
      g.setColor(softred);
      g.fillRect(301, 351, 74, 149);

      g.setColor(Color.BLACK);
      g.drawRect(300, 237, 75, 75);
      g.setColor(softgreen);
      g.fillRect(301, 238, 74, 74);

		g.setColor(Color.BLACK);
		g.drawLine(300, 275, 375, 275);
		g.drawLine(337, 237, 337, 312);

      g.setColor(Color.BLACK);
      g.drawRect(125, 237, 75, 75);
      g.setColor(softgreen);
      g.fillRect(126, 238, 74, 74);

      g.setColor(Color.BLACK);
		g.drawLine(125, 275, 200, 275);
		g.drawLine(162, 237, 162, 312);

      g.setColor(Color.BLACK);
      g.drawLine(75, 200, 250, 100);
      g.drawLine(250, 100, 425, 200);
      g.drawLine(75, 200, 425, 200);

      g.setColor(softyellow);
      int[] xPoints = {76, 250, 424};
		int[] yPoints = {200, 101, 200};
		g.fillPolygon(xPoints, yPoints, 3);

		g.setColor(brightyellow);
		g.fillOval(400, -100, 200, 200);

		g.setColor(Color.BLACK);
		g.fillOval(310, 425, 10, 10);

		g.setColor(Color.BLACK);
		g.drawLine(100, 100, 150, 100);
		g.drawLine(150, 100, 150, 157);
		g.drawLine(150, 157, 100, 185);
		g.drawLine(100, 185, 100, 100);

		g.setColor(Color.GRAY);
		int[] xPointss = {100, 150, 150, 100};
		int[] yPointss = {100, 100, 157, 185};
		g.fillPolygon(xPointss, yPointss, 4);

		g.setColor(Color.WHITE);
		g.setFont(new Font("ARIAL", Font.BOLD, 15));
		g.drawString("NOLAN'S HOUSE", 140, 385);
		g.setColor(Color.WHITE);
		g.setFont(new Font("Arial", Font.BOLD, 15));
		g.drawString("9 HILLDALE DRIVE", 135, 400);

	}
}
