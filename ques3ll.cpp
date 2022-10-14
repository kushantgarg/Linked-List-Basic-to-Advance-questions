#include<iostream>
#include<stdio.h>
using namespace std;
 class node{
     public:
     int data;
      node * next;
 };
 node * reversek(node *head,int k)
 {
 	if(!head)
 	return NULL;
     node *current=head;
     node *prev=NULL;
     node *next=NULL;
     int count=0;
     while(current!=NULL &&count<k)
     {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
        
     }
     //calling recursively for other part of std::list<T> ;
     if(next!=NULL)
     head->next=reversek(next,k);
return prev;
 }
 void insert(node *&head,int data)
 {
     node *n=new node();//assigning the memory manually
     n->data=data;
     n->next=head;
     head=n;
 }
 void printlist(node *head)
 {
     while(head!=NULL)
     {
         cout<<head->data<<" -> ";
         head=head->next;
     }
 }
 int main()
 {
     node *head=NULL;
     insert(head,10 );
     insert(head,20);
     insert(head,30);
     insert(head,40);
     insert(head,50);
     insert(head,60);
     //getting k to get differnt gropu of size of linklist to reverse
     int k;
     cin>>k;
  //   cout<<"A";
     // printlist(head);
     head=reversek(head,k);
     //cout<<head->next;
 printlist(head);
     
 }
 
