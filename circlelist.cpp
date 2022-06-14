#include<iostream>
//#include"node.cpp";
using namespace std;
 class Node
{
    public:
int data;
Node *link;
};
class CircleList
{
private:
Node *first,*last;
int length;
bool isempty()
{
    return length==0;
}
public:
CircleList()
{
first=NULL;
last=NULL;
length=0;
}

void addNodeForward(int value)
{
Node *n=new Node();
n->data=value;
if(isempty())
{
first=last=n;
n->link=first;
}
else
{
    n->link=first;
    last->link=n;
    last=n;
}
length++;
}
void addNodebackword(int value)
{
 Node *n=new Node;
    n->data=value;
    if(isempty())
    addNodeForward(value);
    else
    {
        n->link=first;
        first=n;
    }
    length++;
}
void addAtPosition(int pos,int value)
{
    Node *n=new Node();
    n->data=value;
    if(pos==0||pos==length)
    addNodeForward(value);
    else
    {
        Node* current=first;
        for(int i=1;i<pos;i++)
        {
          current=current->link;
        }
        n->link=current->link;
        current->link=n;
    }
    length++;
}
void addAfterNode(int node,int value)
{
    Node *n=new Node();
    n->data=value;
if(isempty()||last->data==node)
addNodeForward(value);
else
{
    Node *current=first;
    while(current!=last)
    {
      if(current->data==node)
      break;
      current=current->link;
    }
    n->link=current->link;
    current->link=n;
}
length++;
}
void deleteLastNode()
{
    if(isempty())
    cout<<"list is empty"<<"\n";
    else{
    Node *prev=first;
    Node *current=prev->link;
    while(current!=last)
    {
        prev=current;
        current=current->link;
    }
    Node *d=last;
    prev->link=first;
    last=prev;
length--;
}
}
void deleteFirstNode()
{
     if(isempty())
    cout<<"list is empty"<<"\n";
    else
    {
        Node * d=first;
        first=first->link;
        delete d;
        length--;
    }
}
void deleteSpecificNode(int value)

{
    if(isempty())
    {
        cout<<"list is empty"<<"\n";
        return;
    }
if(first->data==value)
deleteFirstNode();
else if(last->data==value)
deleteLastNode();
else
{
    Node *prev=first;
    Node *current=prev->link;
    while(current!=last)
    {
        if(current->data==value)
        break;
        prev=current;
        current=current->link;
    }
    Node *d=current;
    prev->link=current->link;
    delete d;
}
length--;
}
bool isfound(int value)
{
    bool founded=false;
Node *current=first;
while(current!=last)
{
    if(current->data==value)
    {
        founded=true;
        break;
        
    }
    current=current->link;
}
return founded;
}
void printList()
{
    if(isempty())
    {
        cout<<"list is empty"<<"\n";
    }
    else{
    cout<<"link length is ="<<length<<"\n";
    Node *cur=first;
    //int size=length;
    cout<<cur->data<<" ";
    while(cur!=last)
    {
         cur=cur->link;
      cout<<"***"<<cur->data<<"***"<<"\n"<<"***"<<cur->link<<"***"<<"--->";
     
     // size--;
    }
    cout<<"\n";
    }
}
void printListByLength()
{
    if(isempty())
    {
        cout<<"list is empty"<<"\n";
    }
    else{
    cout<<"link length is ="<<length<<"\n";
    Node *cur=first;
    int size=length;
    //cout<<cur->data<<" ";
    while(size>0)
    {
        
      cout<<cur->data<<"  ";
      cur=cur->link;
      size--;
    }
    cout<<"\n";
    }
}
};