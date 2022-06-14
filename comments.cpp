// typedef char* Strings;
//  typedef struct Node
 
// {
//    int value;
//    Node* next;
//  } ;
//  class LinkedList
// {
//   Node *head ;
// public:
//  LinkedList()
//  {
//     head=NULL;
// }
//  void addNode(int val)
//  {
//    Node* n=new Node;
//  n->value=val;
// if(head==NULL){
//    head=n;
//    n->next=NULL;
// }
// else
// {
//    n->next=head;
//    head=n;
// }
//  }
//  void addNode(int place,int addedvalue)
//  {
//    Node* n=new Node;
//  n->value=addedvalue;
// if(head==NULL){
//    head=n;
//    n->next=NULL;
// }
// else
// {
//    Node *current;
//    current=head;
//    while(current!=NULL)
//    {
//       if(current->value==place)
//       {
//          n->next=current->next;
//          current->next=n;
//          break;
//       }
//       current=current->next;
//    }
//    //n->next=head;
//    //head=n;
// }
//  }
//  void deleteNode(int place)
//  {
//    if(head==NULL)
//    {
//       cout<<"list is empty "<<"\n";
//    }
//    else 
//    {
//       Node *current;
//       current=head;
//       while (current!=NULL)
//       {
//          if(current->value==place)
//          {
//             Node *d;
//            // d=current;
//             //current=d->next;
//             delete d;
//             break;
//          }
//          current=current->next;
//       }
//       if(current==NULL)
//       cout<<"no node matched this value"<<"\n";
//    }
//  }
//  void print()
//  {
//    Node *current;
//    current=head;
//    while(current!=NULL)
//    {
//       cout<<current->value<<"\n";
//       current=current->next;
//    }

//  }
//  };
// template<typename T>
// T* getmemory()
// {
// T* ptr;
// ptr=new T;
// return ptr;
// }
// // allocate array of 1000 integers
// void allocArray(size_t l)
// {
//    int* nums=new int[l];
//    for(size_t i=0;i<l;i++)
//    nums[i]=i+1;
//    for(size_t i=0;i<l;i++)
//    cout<<nums[i];
//    cout<<"\n";
//    delete[] nums;
// }
// void test(){
//    int *p1;
// int *p2;
// p1 = new int;
// p2 = new int;
// *p1 = 100;
// *p2 = 200;
// cout << *p1 << " and " << *p2 << endl;
// delete p1;
// p1 = p2;
// cout << *p1 << " and " << *p2 << endl;
// *p1 = 300;
// cout << *p1 << " and " << *p2 << endl;
// *p2 = 400;
// cout << *p1 << " and " << *p2 << endl;
// delete p1;
// }
//    // int x=0;
//    // int *ptr=&x;// pointer value=address of variable point to;
//    // cout<<"value of x ="<<x<<"\n";
//    // cout<<"value of x by derefrencing pointer ="<<*ptr<<"\n";
//    //  cout<<"value of ptr ="<<ptr<<"\n";
//    //   cout<<"address of x ="<<&x<<"\n";
//    //    cout<<"address of ptr ="<<&ptr<<"\n";
//    char *iptr=getmemory<char>();
//    //*iptr="sayed";
//    //cout<<*(iptr+1)<<"\n";
//    int nums[]={1,3,5,6};
//    int* numptr=nums;
//    Strings name="sayed";
//    //for(int i=0;i<4;i++)
//    // cout<<nums[i]<<"\n";
//     cout<<"////////////////////////////////////////////////////////////////////////////////////////\n";
//     for(int i=0;i<5;i++)
//     cout<<name[i]<<"\n";
//    // int *ptr;
//    // ptr=new int;
//    // *ptr=5;
//    // int *ptr2;
//    // ptr2=ptr;
//    // cout<<*ptr2<<"\n";
// //        Node n;
// //        n.value=1;
// //        n.next="sayed";
// // cout<<n.next<<"\n";
//allocArray(10);
//test();
// l.deleteNode(5);
// l.addNode(3);
// l.addNode(1);
// l.addNode(1,2);
// l.deleteNode(5);
// l.deleteNode(2);
// l.print();