#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
    private:
        Node * head;
    public:
        LinkedList();
        void buildList();
        void traverse();
        virtual ~LinkedList();
};

#endif // LINKEDLIST_H
