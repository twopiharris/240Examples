
public class GlitterCritter extends Critter {

	public static void main(String[] args) {
		
		//Test harness
		
		//test default (inherited) constructor
		GlitterCritter gc = new GlitterCritter();
		
		//test overwritten sayHi() function
		gc.sayHi();
		
		/* EXPECTED OUTPUT
		 * anonymous gently shimmers
		 */
		
	} // end main
	
	//over-write sayHi() method
	public void sayHi(){
		System.out.println( this.name + " gently shimmers");
	} // end sayHi

} // end class def
