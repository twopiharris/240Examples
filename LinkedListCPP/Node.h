#include <string>
#ifndef NODE_H
#define NODE_H


class Node{
    private:
        std::string data;
        Node * next;
    public:
        Node();
        Node(std::string data, Node * next);
        virtual ~Node();
        std::string getData() { return data; }
        void setData(std::string val) { data = val; }
        Node * getNext() { return next; }
        void setNext(Node * val) { next = val; }
};

#endif // NODE_H
