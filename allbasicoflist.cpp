#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *back;
};
	node *head,*p,*prev,*forw;
getdatainlinklist(int n)
{
head=NULL;
	for(int i=1;i<=n;i++)
	{
		p=new node();
		cout<<"Enter the data in node"<<i<<"\t";
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
		else{
		
		forw=p;
		prev->next=p;
		forw->back=prev;
	}
	prev=p;
}
}
void printlist(node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}
}
void insertatend(node*head,int data)
{
	 node *ptr,*p=head,*safe;
	 ptr=new node();

	 if(ptr==NULL)
	 {
	 cout<<"overflow";
	 exit(-1);}
	  ptr->data=data;
	  	 while(p!=NULL)
	 {
	 	safe=p;
	 	p=p->next;
	 }
	
	 safe->next=ptr;
	 ptr->next=NULL;
	 ptr->back=safe;
	// return head;
	 
}
node* insertinhead(node* ptr,int data)
{
	node*p;
	p=new node();
	if(p==NULL)
	{
		cout<<"Overfloe";
		exit(-1);
	}
	p->data=data;
	p->next=head;
	return p;
}
void insertatpos(node* head,int data,int position)
{
	node *ptr=new node();
	ptr->data=data;
    int count=0;
	for(int i=0;i<position;i++)
	{
		count+=1;
		
	}
	node *q=head;
	for(int i=0;i<count;i++)
	{
		q=q->next;
	}
    	node*l=q->back;
    	l->next=ptr;
    	ptr->next=q;
    	ptr->back=l;
    	q->back=ptr;
}
int main()
{
	int n;
	cout<<"Enter the number of eleent in linked list"<<endl;
	cin>>n;
getdatainlinklist(n);
printlist(head);
int data;
cout<<"\nEnter the data to be appende  d in list";
cin>>data;
//insertatend(head,data);
//cout<<"afteer insertion"<<endl;
//printlist(head);
//head=insertinhead(head,data);
//cout<<"after insertion at head"<<endl;
//printlist(head);
//int position;	
//cout<<"Enter the position where you need to enter data";
//cin>>position;	
//insertatpos(head,data,position);
//printlist(head);
 while(forw!=NULL)
 {
 	cout<<forw->data;
 	forw=forw->back;
 }
}
