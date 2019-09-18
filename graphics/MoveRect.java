import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class MoveRect extends JFrame{
  public static void main(String[] args){
    new MoveRect();
  }

  public MoveRect(){
    // this class does little but have a run method and an
    // instance of the custom canvas class.  It is best to 
    // NOT do animations on the primary JFrame panel, because
    // it does not do automatic double-buffering.

    MyCanvas c = new MyCanvas();
    this.add(c, BorderLayout.CENTER);
    this.setSize(640, 480);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    this.setVisible(true);
  } // end MoveRect

  class MyCanvas extends JPanel implements ActionListener{
    // custom JPanel with its own actionListener, will automatically
    // redraw itself 20x a second


    // this swing timer will call actionPerformed every 50
    // milliseconds, which is 20x per second
    private Timer t = new Timer(50, this);

    // this variable will indicate the x position of the box
    private int box_x;

    public MyCanvas(){
      // initialize variable and start timer
      box_x = 0;
      t.start();
    }

    public void actionPerformed(ActionEvent e){
      // on every 'tick', increment the box x variable
      box_x += 5;
      
      // check for boundaries
      if (box_x > this.getWidth()){
        box_x = 0;
      } // end if
      
      // signal that a repaint will be necessary
      this.repaint();
    } // end actionPerformed

    public void paintComponent(Graphics g){
      // called (indirectly) by repaint

      // draw a blue box at the indicated x position
      g.setColor(Color.BLUE);
      g.fillRect(box_x, 10, 50, 50);
    } // end paintComponent

  } // end class def
} // end class def

