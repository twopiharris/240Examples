
public class LinkedList {

	public Node head;
	
	public static void main(String[] args){
		new LinkedList();
	} // end main
	
	public LinkedList(){
		head = new Node("<<head>>", null);
		
		this.makeLL();
		
		System.out.println("Iterative traversal");
		this.traverse();
		System.out.println();
		
		System.out.println("count: " + this.count(head));
		System.out.println();
		
		System.out.println("Recursive traversal");
		this.recTrav(head);
		
	} // end constructor
	
	public void makeLL(){
		Node c = new Node("Charlie", null);
		Node b = new Node("Baker", c);
		Node a = new Node("Alpha", b);
		
		head.setNext(a);
		
		//create a new node and insert it at the end
		Node d = new Node("Delta", null);
		c.setNext(d);
		
		//create a new node and insert it between Baker and Charlie
		Node t = new Node("Thwack", c);
		b.setNext(t);
		
		insertNodeAfter(t, "Fwop");
		delete("Fwop");
		
	} // end makeLL
	
	void insertNodeAfter (Node position, String data){
		//given data, create a new node with that payload
		//and append it to the end
		Node after = position.getNext();
		Node newNode = new Node(data, after);
		position.setNext(newNode);
	} // end inserNodeAfter
	
	void delete(String value){
		//deletes a node containing a particular string
		Node currentNode = head;
		Node prevNode = head;
		String currentVal;
		while (currentNode != null){
			currentVal = currentNode.getData();
			if (currentVal.equals(value)){
				//delete this element
				Node nextNode = currentNode.getNext();
				prevNode.setNext(nextNode);
				//note current node doesn't go away; it's just ignored.
			} //end if
			//go on to next node
			prevNode = currentNode;
			currentNode = currentNode.getNext();
		} // end while
	} // end delete
	
	public void traverse(){
		Node currentNode = head;
		while(currentNode != null){
			//don't print the head
			if (currentNode != head){
			    System.out.println(currentNode.getData());
			} // end if
			currentNode = currentNode.getNext();
		} // end while
	} // end traverse
	
	public int count(Node currentNode){
		//recursive counting algorithm
		int result;
		Node next = currentNode.getNext();
		if (next == null){
			result = 0;
		} else {
			result = 1 + count(next);
		} // end if
		return result;
	} // end count
	
	public void recTrav(Node currentNode){
		//recursive node traversal
		Node next = currentNode.getNext();
		
		//Don't print the head node
		if (currentNode != head){
		    System.out.println(currentNode.getData());
		} // end if
		
		if (next == null){
			return;
		} else {
			recTrav(next);
		} // end if
	} // end recTrav
	
} // end linkedList
