#include<iostream>                                                                                                                                                                                                                                                                                                                    
using namespace std;
class node{
	//creating linked list
public:
int data;//left part of node representing data
node *next;//right part denoting the address of next node


};
 int main()
 {
     node *head;//carry first node
     node *second;//second node
     node *third;//third node
     head=new node();//assigning memory for head
     second=new node();//assigning memory for head
     third=new node();//assigning memory for head
     head->data=10;//assigning data to half of node
	 head->next=second;//assigning the address of next pointer to second half o node
	 second->data=20;
	 second->next=third;
	 third->data=30;
	 third->next=NULL;//assigning null to the last node
	 //node *ptr=head;
	 while(head!=NULL)
	 {
	 	//traversing the whole list andprinting
	 	cout<<head->data<<endl;
	 	head=head->next;
	  } 
 }
