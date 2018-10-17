#include <iostream>
#include "node.h"
#include "stack.h"

using namespace std;

void testStack();
void testNode();
void invert();

int main(){
  //testNode();
  //testStack();
  invert();
  return 0;
}

void testNode(){
  Node* a = new Node();
  a->setPayload("Hi there");
  Node* b = new Node("B");
  Node* c = new Node("C", b);
  a->setNextNode(c);

  cout << a->getPayload() << endl;
  cout << b->getPayload() << endl;
  cout << a->getNextNode()->getPayload() << endl;

  // should be "Hi there, B, C" on seperate lines
  
  //clear the heap
  delete(a);
  delete(b);
  delete(c);
} // end testNode

void testStack(){
  Stack* s = new Stack();
  s->push(new Node("A"));
  s->push(new Node("B"));
  s->push(new Node("C"));

  cout << s->print() << endl;

  Node* d = s->pop();
  delete(d);

  cout << s->print() << endl;
  delete(s);
} // end testStack

void invert(){
  // at end, a should be empty
  // and b should be A | B | C

  Stack* a = new Stack();
  Stack* b = new Stack();

  a->push(new Node("A"));
  a->push(new Node("B"));
  a->push(new Node("C"));

  cout << "===== before =====" << endl;
  cout << "===== A =====" << endl << a->print() << endl;
  cout << "===== B =====" << endl << b->print() << endl;

  //a = a->invert();
  
  Node tNode;
  Node* tempNode = &tNode;

  //invert
  bool keepGoing = true;
  while (keepGoing){
    if (a->isEmpty()){
      keepGoing = false;
    } else {
      tempNode = a->pop();
      b->push(tempNode);
    } // end if
  } // end while
  //print results
  cout << "===== after =====" << endl;
  cout << "===== A =====" << endl << a->print() << endl;
  cout << "===== B =====" << endl << b->print() << endl;

  Stack* temp = a;
  a = b;
  b = temp;

  cout << "===== after swap =====" << endl;
  cout << "===== A =====" << endl << a->print() << endl;
  cout << "===== B =====" << endl << b->print() << endl;

  delete(a);
  delete(b);

} // end invert

