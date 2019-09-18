import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Primitives extends JFrame{

  public static void main(String[] args){
    new Primitives();
  } // end main

  public Primitives(){
    MyCanvas c = new MyCanvas();

    this.add(c, BorderLayout.CENTER);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    this.setSize(640, 480);
    this.setVisible(true);

  } // end constructor


  class MyCanvas extends JPanel{
    // custom class for drawing reduces flicker
    //

    public void paintComponent(Graphics g){

      g.drawLine(150, 50, 200, 50);

      g.setColor(Color.BLUE);
      g.fillRect(10, 10, 100, 100);

      g.setColor(Color.GREEN);
      g.fillOval(200, 200, 250, 200);

      g.setColor(Color.RED);
      g.setFont(new Font("SansSerif", 0, 20));
      g.drawString("Hi there!", 300, 300);

      // request repainting at the appropriate time
      this.repaint();
    } // end paintComponent
  } // end MyCanvas def
} // end Primitives class def

