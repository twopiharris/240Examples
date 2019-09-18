import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Draw extends JFrame{
  
  public static void main(String[] args){
    new Draw();
  } // end main

  public Draw(){
    MyCanvas c = new MyCanvas();
    this.add(c, BorderLayout.CENTER);

    this.setSize(640, 480);
    this.setVisible(true);
    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  } // end constructor


  class MyCanvas extends JPanel implements MouseListener, MouseMotionListener{

    int oldX, oldY, newX, newY;
    //boolean drawing = false;

    public MyCanvas(){
      oldX = 0;
      oldY = 0;
      newX = 0;
      newY = 0;

      addMouseListener(this);
      addMouseMotionListener(this);
      
    } // end constructor

    public void paintComponent(Graphics g){
      // drawing will now happen in listeners
    } // end paintComponent

    // MouseListener required methods
    public void mouseClicked(MouseEvent e){
      // do nothing
    } // end mouseClicked

    public void mouseEntered(MouseEvent e){
      // do nothing here
    } // end mouseEntered

    public void mouseExited(MouseEvent e){
      // do nothing here
    } // end mouseExited

    public void mousePressed(MouseEvent e){
      // get current mouse position.
      // next line drawn will begin here
      newX = e.getX();
      newY = e.getY();
    } // end mousePressed

    public void mouseReleased(MouseEvent e){
      // do nothing
    } // end mouseReleased

    // required by mouseMotionListener
    
    public void mouseDragged(MouseEvent e){
      // grab the current graphics context to work with

      Graphics g = this.getGraphics();

      // copy current new position to old position
      oldX = newX;
      oldY = newY;

      // get new position from mouse
      newX = e.getX();
      newY = e.getY();
      
      // draw the line
      g.drawLine(oldX, oldY, newX, newY);

      // release the graphics object
      // no need to call repaint here
      g.dispose();
    } // end mouseDragged

    public void mouseMoved(MouseEvent e){
      // do nothing
    } // end mouseMoved


  } // end MyCanvas class def

} // end Draw class def




