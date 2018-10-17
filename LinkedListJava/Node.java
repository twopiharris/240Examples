
public class Node {
    //node for a linked list
	private String data;
	private Node next;
	
	public Node(String data, Node next){
		this.data = data;
		this.next = next;
	} // end constructor
	
	public void setData(String data){
		this.data = data;
	}
	
	public String getData(){
		return this.data;
	}
	
	public void setNext(Node next){
		this.next = next;
	}
	
	public Node getNext(){
		return this.next;
	}
}
