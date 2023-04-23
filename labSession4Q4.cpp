/*
Lab Session IV: Data Structures using Objects

1. Create a linked list using class with new and delete. Implement the following operations:
(a) Insert at beginning and end.
(b) Delete from any location.
*/

#include <iostream>
using namespace std;
class node
{
    int data;
    node *ptr;

public:
    void setData(int val);                  // sets data of the node
    void setPointer();                      // sets pointer to null
    void setPointer(node *ptr1);            // sets pointer to ptr1
    void displayData();                     // prints data
    int getData();                          // returs data of the node
    node *getPointer();                     // returns pointer
    friend node *createNode(int);           // creates a node with value=val and pointer =NULL
    friend node *insertAtHead(node *, int); // Inserts a node at the beginning
    friend void display(node *);            // displays the whole linked list--takes argument as Head of the list
    friend node *deleteNode(node *, int);   // deletes node with value passed as an argument
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

node *insertAtHead(node *Head, int val)
{
    node *a = createNode(val);
    node *p1;
    p1 = Head;
    a->setPointer(p1);
    Head = a;
    return Head;
}
node *insertAtEnd(node *Head, int val)
{
    node *a = createNode(val);
    node *p1, *p2;
    p1 = Head;
    // p2 = Head;
    while (p1->getPointer() != NULL)
    {
        p1 = p1->getPointer();
    }
    p1->setPointer(a);

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
node *deleteNode(node *Head, int val)
{
    node *p1, *p2;
    p1 = Head;
    p2 = p1->getPointer();
    if (p1->getData() == val)
    {
        Head = p2;
        delete p1;
    }
    else
    {
        while (p2->getData() != val)
        {
            p1 = p1->getPointer();
            p2 = p1->getPointer();
        }
        if (p2 == NULL)
        {
            cout << "No node found with value " << val << endl;
        }
        else
        {
            p1->setPointer(p2->getPointer());
            delete p2;
        }
    }
    return Head;
}

int main()
{
    node *Head = createNode(1);
    Head = insertAtHead(Head, 0);
    Head = insertAtEnd(Head, 2);
    Head = insertAtEnd(Head, 3);
    Head = insertAtEnd(Head, 4);
    Head = insertAtHead(Head, 6);
    cout << "The linked list is: " << endl;
    display(Head);
    cout << "After deleting 3 the linked list is " << endl;
    Head = deleteNode(Head, 3);
    display(Head);

    return 0;
}
