import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class DrawDemo extends JFrame implements ActionListener{
  JButton btnDraw;
  DrawPanel canvas;

  public static void main(String[] args){
    new DrawDemo();
  } // end main

  public DrawDemo(){
    this.setLayout(new BorderLayout());
    btnDraw = new JButton("Draw a rectangle");
    btnDraw.addActionListener(this);
    this.add(btnDraw, BorderLayout.SOUTH);
    
    canvas = new DrawPanel();
    this.add(canvas, BorderLayout.CENTER);
    
    this.setSize(200, 200);
    this.setVisible(true);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  } // end constructor

  @Override
  public void actionPerformed(ActionEvent e){
    canvas.repaint();
  } // end actionPerformed
} // end class def

class DrawPanel extends JPanel{
  @Override
  public void paintComponent(Graphics g){
    super.paintComponent(g);
    int width = (int)(Math.random() * 200);
    int height = (int)(Math.random() * 200);
    g.drawRect(10, 10, width, height);
  } // end paintComponent
} // end drawPanel

