#include<iostream>
//#include"node.cpp";
using namespace std;
struct Node
{
int data;
Node *link;
};
class LinkedList
{
    private:
 Node* first,*last;// pointers to detect start and end of list
 int length;// determine the length of the list
 //detect the presence of nodes in the list
 bool isempty()
 {
   return length==0;
 }
public:
LinkedList()
{
    first=NULL;
    last=NULL;
    length=0;
}
LinkedList copyList()
{
    LinkedList copied;
    copied.first=this->first;
    copied.last=this->last;
    copied.length=this->length;
    return copied;
    
    
}
void addNodeforward(int value)
{
    Node *n=new Node;
    n->data=value;
    n->link=NULL;
if(isempty())
{
first=n;
last=n;
}
else
{
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
    {
        first=n;
        last=n;
        n->link=NULL;
    }
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
    if(pos==0)
    {
        addNodeforward(value);
    }
    else if(pos==length)
    addNodebackword(value);
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
if(isempty())
{
first=last=n;
n->link=NULL;
}
else if(last->data==node)
addNodeforward(value);
else
{
    Node *current=first;
    while(current!=NULL)
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
    Node *current=first;
    for(int i=2;i<length;i++)
    current=current->link;
    Node *d=current->link;
    current->link=NULL;
    last=current;
    delete d;
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
    while(current!=NULL)
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
while(current!=NULL)
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
Node * SortList()
{
    
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
    int size=length;
    while(cur!=NULL)
    {
      cout<<cur->data<<"  ";
      cur=cur->link;
      size--;
    }
    cout<<"\n";
    }
}
void printList(Node * head)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<"\n";
    }
    else{
    //cout<<"link length is ="<<length<<"\n";
    Node *cur=head;
    //int size=length;
    while(cur!=NULL)
    {
      cout<<cur->data<<"  ";
      cur=cur->link;
      //size--;
    }
    cout<<"\n";
    }
}
 
 void printFirstLastData()
{
     if(isempty())
    {
        cout<<"list is empty"<<"\n";
    }
    else{
cout<<"first data is  "<<first->data<<"\n";
cout<<"last data is  "<<last->data<<"\n";
    }
}
};