//reversing linkn list both recurvesely and iteratively
#include<iostream>
#include<stdio.h>
using namespace std;
class Node{
	public:
int data;
Node* next;		
};
 void printlist(Node *head)
 {

  while(head!=NULL)
  {
  	cout<<head->data<<"->"<<" ";
  	head=head->next;
  }
 }
 void reverselist(Node*&head)
 {
 	Node *next,*prev=NULL;
 	Node *current=head;
 	while(current!=NULL)
 	{
 		//current=head;
 		next=current->next;
 		current->next=prev;
 		prev=current;
		 current=next;
 		
	 }
	 head=prev;
 }
 Node * reverselistr(Node *&head)
 {
 	if(head==NULL || head->next==NULL)
 	return head;
 	//reverse the rest listt and put first element at the last
 	Node* rest=reverselistr(head->next);
 	head->next->next=head;
 	head->next=NULL;
 	return rest;
 }
int main()
{
	//creation of linked list 
	//dynamic creation
	Node *head, *p,*prev;
	int n;
	cout<<"Enter the number of nodes to be entered in linked list"<<endl;
	cin>>n;
	head=NULL;
	int data;
	for(int i=0;i<n;i++)
	{
	    p=new Node();
	    cout<<"Enter the data";
	    cin>>data;
	    p->data=data;
	    if(head==NULL)
	    {
	    	head=p;
		}
		else
		prev->next=p;
		prev=p;
	
}
//reversing the list using iterativ method
//reverselist(head);
//printlist(head);
//recursuve method
head=reverselistr(head);
printlist(head);
}
