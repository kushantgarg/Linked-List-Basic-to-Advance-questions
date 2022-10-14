#include<iostream>
using namespace std;
class node{
	public:
		int data;
		 node *next;
};
int main()
{
		node *head,*second,*third,*fourth;
head=new node();
second=new node();
third=new node();
fourth=new node();
head->data=10;
head->next=second;
second->data=20;
second->next=third;
third->data=30;
third->next=fourth;
fourth->data=40;
fourth->next=NULL;
int data;
cout<<"Enter the data of the new node";
cin>>data;
node *newnode=new node();
newnode->data=data;
node *p=head,*q=head->next;
if(head->next==NULL|| data<=head->data)
{
	newnode->next=NULL;
	exit(-1);
}
else
{
	
	while(q!=NULL)
	{
		if(data<=q->data)
		{ 
						    newnode->next=q;
			break;
		}
	q=q->next;
	p=p->next;
		
	}
}
p->next=newnode;
node *ptr=head;
while(ptr!=NULL)
{
	cout<<ptr->data;
	ptr=ptr->next;
}
}
