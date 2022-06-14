#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node * prev;
};
class DoubleLinkedList
{
    private:
    Node *first,*last;
    int length;
    public:
    DoubleLinkedList()
    {
        first=last=NULL;
        length=0;
    }
    void addNodeForward(int value)
    {
        Node *n=new Node();
        n->data=value;
        n->next=NULL;
        if(length==0)
        {
            n->prev=first;
            first=n;
            last=n;
        }
        else
        {
            last->next=n;
            n->prev=last;
            last=n;
        }
        length++;
    }
   void printList()
    {
       if(length==0)
       cout<<"list is empty"<<"\n";
       else
       {
        Node *current=first;
        while(current!=NULL)
        {
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<"\n";
       }
    }
    void printListReverse()
    {
      if(length==0)
       cout<<"list is empty"<<"\n";
    else
       {
        Node *current=last;
        cout<<current->data<<" ";
        while(current!=first)
        {
             current=current->prev;
            cout<<current->data<<" ";
           
        }
        cout<<"\n";
       }
    }
};