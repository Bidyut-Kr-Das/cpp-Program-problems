/*
Question:
Create stack using linked list. Implement push and pop method
*/

#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *ptr;

public:
    void setData(int val);          // sets data of the Node
    void setPointer();              // sets pointer to null
    void setPointer(Node *ptr1);    // sets pointer to ptr1
    void displayData();             // prints data
    int getData();                  // returs data of the Node
    Node *getPointer();             // returns pointer
    friend Node *createNode(int);   // creates a Node with value=val and pointer =NULL
    friend Node *push(Node *, int); // pushes a Node into the stack
    friend Node *pop(Node *);       // pops a Node out of the stack
    friend void display(Node *);    // displays the whole stack--takes argument as Head of the list
};
void Node ::setData(int val)
{
    data = val;
}
void Node ::setPointer()
{
    ptr = NULL;
}
void Node ::setPointer(Node *ptr1)
{
    ptr = ptr1;
}
void Node ::displayData()
{
    cout << data << endl;
}
int Node ::getData()
{
    return data;
}
Node *Node ::getPointer()
{
    return ptr;
}

Node *createNode(int val)
{
    Node *a = new Node();
    a->setData(val);
    a->setPointer();
    return a;
}

Node *push(Node *Head, int val)
{
    Node *a = createNode(val);
    Node *p1;
    p1 = Head;
    a->setPointer(p1);
    Head = a;
    return Head;
}

Node *pop(Node *Head)
{
    Node *p1;
    p1 = Head;
    Head = p1->getPointer();
    delete p1;
    return Head;
}
void display(Node *Head)
{
    Node *p = Head;
    while (p != NULL)
    {
        p->displayData();
        p = p->getPointer();
    }
}

int main()
{
    Node *stackTop = createNode(5);
    stackTop = push(stackTop, 7);
    stackTop = push(stackTop, 8);
    stackTop = push(stackTop, 9);
    stackTop = pop(stackTop);
    stackTop = push(stackTop, 4);
    stackTop = pop(stackTop);
    display(stackTop);

    return 0;
}