
public class Queue {

	Node head, tail;
	//boolean empty;
	
	public static void main(String[] args) {
		Queue q = new Queue();
		q.printQueue();
		
		q.put("a");
		q.printQueue();
		q.put("b");
		q.printQueue();
		q.put("c");
		q.printQueue();
	

		while (!q.empty()){
			System.out.println(q.get());
		}
		
	} // end main

	public Queue(){
		//empty = true;
	}
	
	public void put(String data){
		//put new data at end of line
		Node newNode = new Node(data, null);

		if (empty()){
			//if queue is empty, make new node head and tail
			head = newNode;
			tail = newNode;
		} else {
			//otherwise, put new data after tail
			tail.setNext(newNode);
			tail = newNode;
		} // end if
		
	}
	
	public String get(){
		String result;
		if (head == null){
			result = "queue empty";
		} else { 
			//remove item at front of line
			result = head.getData();
			head = head.getNext();
	    } // end if
		return result;
	} // end get
	
    public void printQueue(){
    	//print entire queue
    	Node currentNode = head;
    	while (currentNode != null){
    		System.out.print(currentNode.getData() + " | ");
    		currentNode = currentNode.getNext();
    	} // end while
    	System.out.println();
    
    }

    public boolean empty(){
    	if (head == null){
    		return true;
    	} else {
    		return false;
    	} // end if
    } // end empty
    
}
