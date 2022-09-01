#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

Node * head;
void iterate();

int main() {
    Node c = Node("Charlie", NULL);
    Node b = Node("Bravo", &c);
    Node a = Node("Alpha", &b);

    head = &a;

    iterate();
    LinkedList ll;

    ll.buildList();

    return(0);
}

void iterate(){
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
} // end iterate

