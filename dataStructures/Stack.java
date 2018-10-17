public class Stack {
    Node top;
	
	public static void main(String[] args) {
		Stack s = new Stack();
		s.push("A");
		s.push("B");
		s.push("C");
		
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());


	} // end main

	public Stack(){
		top = null;
	}
	
	public void push(String data){
		Node newNode = new Node(data, top);
		top = newNode;
	}
	
	public String pop(){
		String value;
		if (top == null){
			value = "stack empty";
		} else {
		    value = top.getData();
		    top = top.getNext();
		} // end if
		return value;
	}
}
