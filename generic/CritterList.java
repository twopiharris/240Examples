public class CritterList{
  public static void main(String[] args){
    LLGeneric <Critter> cl = new LLGeneric <Critter>();
    cl.append(new Critter("george", 1));
    cl.append(new Critter("martha", 2));
    cl.iterate();

  } // end main
} // end CritterList

class Critter{
  String name;
  int age;

  public Critter(){
    this.name = "";
    this.age = 1;
  } // end constructor

  public Critter(String name, int age){
    this.name = name;
    this.age = age;
  } // end constructor

  public String speak(){
    return ("Hi, my name is..." + this.name);
  } // end speak

  // overWrite toString method for better output
  public String toString(){
    return(speak());
  } // end toString
} // end Critter 
