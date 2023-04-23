/*
Question:
Create stack using linked list. Implement push and pop method
*/

#include <iostream>
using namespace std;

class node
{
    int data;
    node *ptr;

public:
    void setData(int val);          // sets data of the node
    void setPointer();              // sets pointer to null
    void setPointer(node *ptr1);    // sets pointer to ptr1
    void displayData();             // prints data
    int getData();                  // returs data of the node
    node *getPointer();             // returns pointer
    friend node *createNode(int);   // creates a node with value=val and pointer =NULL
    friend node *push(node *, int); // pushes a node into the stack
    friend node *pop(node *);       // pops a node out of the stack
    friend void display(node *);    // displays the whole stack--takes argument as Head of the list
};
void node ::setData(int val)
{
    data = val;
}
void node ::setPointer()
{
    ptr = NULL;
}
void node ::setPointer(node *ptr1)
{
    ptr = ptr1;
}
void node ::displayData()
{
    cout << data << endl;
}
int node ::getData()
{
    return data;
}
node *node ::getPointer()
{
    return ptr;
}

node *createNode(int val)
{
    node *a = new node();
    a->setData(val);
    a->setPointer();
    return a;
}

node *push(node *Head, int val)
{
    node *a = createNode(val);
    node *p1;
    p1 = Head;
    a->setPointer(p1);
    Head = a;
    return Head;
}

node *pop(node *Head)
{
    node *p1;
    p1 = Head;
    Head = p1->getPointer();
    delete p1;
    return Head;
}
void display(node *Head)
{
    node *p = Head;
    while (p != NULL)
    {
        p->displayData();
        p = p->getPointer();
    }
}

int main()
{
    node *stackTop = createNode(5);
    stackTop = push(stackTop, 7);
    stackTop = push(stackTop, 8);
    stackTop = push(stackTop, 9);
    stackTop = pop(stackTop);
    stackTop = push(stackTop, 4);
    stackTop = pop(stackTop);
    display(stackTop);

    return 0;
}