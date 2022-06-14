#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include "linkedlist.cpp";
//#include"circlelist.cpp";
#include"doublylist.cpp";
using namespace std;

int main()
{
cout<<"welcome "<<"\n";
DoubleLinkedList d;
d.addNodeForward(10);
d.addNodeForward(15);
d.addNodeForward(20);
d.printList();
d.printListReverse();
// CircleList c;
// c.addNodeForward(5);
// c.addNodeForward(10);
// c.addNodeForward(15);
// c.printList();
// c.addAfterNode(10,9);
// c.printList();
// c.addNodebackword(7);
// c.printList();
// c.addAtPosition(2,8);
// c.printList();
// c.deleteLastNode();
// c.printList();
//  LinkedList l;
// l.addNodebackword(60);
// l.addNodebackword(50);
// l.addNodebackword(40);
// l.addNodebackword(30);
// l.addNodebackword(20);
// l.addNodebackword(10);
// l.printList();
// l.deleteSpecificNode(40);
// l.printList();
// l.deleteSpecificNode(30);
// l.printList();
// //Node * c=l.copyList();
// //l.printList(c);
// l.addAfterNode(50,25);
// l.addAfterNode(20,35);
// l.printList();
// cout<<l.isfound(35)<<"\n";
// cout<<l.isfound(70)<<"\n";
// LinkedList l2=l.copyList();
// l2.printList();
// l.deleteNodeBackward();
// l.printList();
// l.deleteNodeBackward();
// l.printList();
// l.deleteNodeBackward();
// l.printList();
// l.deleteNodeBackward();
// l.printFirstLastData();
//  l.printList();
//  l.addNodeforward(40);
//  l.addNodeforward(50);
//  l.printFirstLastData();
//  l.printList();
//  l.addAtPosition(3,60);
//  l.printFirstLastData();
//  l.printList();
// l.deleteNodeForward();
// l.printFirstLastData();
// l.printList();
//l.addAtPosition(1,5);
//l.addNodeforward(10);
//l.addNodeforward(20);
//l.addNodeforward(30);
//l.printList();

   return 0;
}