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
int position, data;
cout<<"Enter the position where you want to enter any node";
cin>>position;
cout<<"Enter the data";
cin>>data;
node *newnode=new node();
newnode->data=data;
node *p=head;
for(int i=1;i<	position-1;i++)
{
	p=p->next;
}
newnode->next=p->next;
p->next=newnode;
while(head!=NULL)
{
	cout<<head->data;
	head=head->next;
}

 	
 }
