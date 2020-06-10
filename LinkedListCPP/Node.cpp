#include "Node.h"

//using namespace std;

Node::Node(){
    Node::data = "";
    Node::next = NULL;
};

Node::Node(std::string data, Node * next)
{
    Node::data = data;
    Node::next = next;
};

Node::~Node()
{
    //may not need anything
};
