#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node* back;
};
void reverselinklist(int n,node*head)
{
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<head->data;
		head=head->back;
	}
}
void reverlist(node *head)
{
	if(head==NULL)
	return;
	//cout<<head->data;
	reverlist(head->next);
	cout<<head->data;//will be called in a back trap
}
int main()
{
	node *head, *p,*prev,*forw;
   int n;
   cout<<"enter the number of elements in linked list"<<endl;
   cin>>n;
   head=NULL;
   int data;
   for(int i=1;i<=n;i++)
   {
   	p=new node();
   	cout<<"Enter the data in linked list"<<i ;
	   cin>>p->data;
	   if(head==NULL)
	   {
	   	head=p;
	   	head->back=NULL;
	   }
	   else if(i>n)
	   {
	   	prev->next=NULL;
	   }
	   else
	   {
	   	forw=p;
	   	prev->next=p;
	   	forw->back=prev;
	   }
	   prev=p;
	   
	   
   }
   reverlist(head);
  
//to do using singly link list use recursion function call
   //reverselinklist(n,forw);//reversing using doubly linkedlist
   //while(ptr!=NULL)
}
