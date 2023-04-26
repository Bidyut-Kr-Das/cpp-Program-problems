/*
Lab Session IV: Data Structures using Objects

1. Create a linked list using class with new and delete. Implement the following operations:
(a) Insert at beginning and end.
(b) Delete from any location.
*/

#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *ptr;

public:
    void setData(int val);                  // sets data of the Node
    void setPointer();                      // sets pointer to null
    void setPointer(Node *ptr1);            // sets pointer to ptr1
    void displayData();                     // prints data
    int getData();                          // returs data of the Node
    Node *getPointer();                     // returns pointer
    friend Node *createNode(int);           // creates a Node with value=val and pointer =NULL
    friend Node *insertAtHead(Node *, int); // Inserts a Node at the beginning
    friend Node *insertAtEnd(Node *, int);  // Insert a Node at the end
    friend void display(Node *);            // displays the whole linked list--takes argument as Head of the list
    friend Node *deleteNode(Node *, int);   // deletes Node with value passed as an argument
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

Node *insertAtHead(Node *Head, int val)
{
    Node *a = createNode(val);
    Node *p1;
    p1 = Head;
    a->setPointer(p1);
    Head = a;
    return Head;
}
Node *insertAtEnd(Node *Head, int val)
{
    Node *a = createNode(val);
    Node *p1, *p2;
    p1 = Head;
    // p2 = Head;
    while (p1->getPointer() != NULL)
    {
        p1 = p1->getPointer();
    }
    p1->setPointer(a);

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
Node *deleteNode(Node *Head, int val)
{
    Node *p1, *p2;
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
            cout << "No Node found with value " << val << endl;
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
    Node *Head = createNode(1);
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