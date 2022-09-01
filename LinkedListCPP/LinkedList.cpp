#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

LinkedList::LinkedList()
{
    LinkedList::head = NULL;
}

void LinkedList::buildList(){
    Node* c = new Node("Charlie", NULL);
    Node* b = new Node("Bravo", c);
    Node* a = new Node("Alpha", b);

    head = a;

} // end buildList



void LinkedList::traverse(){
    Node * currentNode;
    //Start at head
    currentNode = head;
    //go until node is NULL
    while (currentNode != NULL){
        //print out node
        cout << (*currentNode).getData() << endl;
        //get next node
        currentNode = (*currentNode).getNext();
    } // end while
} // end traverse



LinkedList::~LinkedList()
{
    // delete list
    Node* next = head;
    Node* current = next;
    while (current != NULL){
      next = current->getNext();
      if (current != NULL){
        delete current;
      } // end if
    } // end while
}
