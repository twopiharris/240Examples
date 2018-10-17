
public class Tree {
	
	Node head = null;
	
   public static void main(String[] args){
	   new Tree();
   }
   
   public Tree(){
	   buildSample();
	   System.out.println("In-Order: ");
	   inOrder(head);
	   System.out.println();
	   System.out.println("Pre-Order: ");
	   preOrder(head);
	   System.out.println();
	   System.out.println("Post-Order: ");
	   postOrder(head);	   
   }
   
   public void buildSample(){
	   Node one = new Node("1", null, null);
	   Node three = new Node("3", null, null);
	   Node two = new Node("2", one, three);
	   Node five = new Node("5", null, null);
	   Node seven = new Node("7", null, null);
	   Node six = new Node("6", five, seven);
	   Node four = new Node("4", two, six);
	   
	   head = four;
   }
   
   public void inOrder(Node n){
	   if (n != null){
		   inOrder(n.getLeft());
		   System.out.println(n.getData());
		   inOrder(n.getRight());
	   } // end if
   } // end method
   
   public void preOrder(Node n){
	   if (n != null){
		   System.out.println(n.getData());
		   preOrder(n.getLeft());
		   preOrder(n.getRight());
	   } // end if
   } // end method
   
   public void postOrder(Node n){
	   if (n != null){
		   postOrder(n.getLeft());
		   postOrder(n.getRight());
		   System.out.println(n.getData());
	   } // end if
   } // end method
   
   
}
