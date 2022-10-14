//boilerplate code

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
};
node* insertbetweennode(node *head,node *prenode,int data)
{
node *ptr;
ptr=new node();
ptr->next=prenode->next;
prenode->next=ptr;

ptr->data=data;
return head;
}
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
head= insertbetweennode(head,second,45);
node *ptr=head;
while(ptr!=NULL)
	{
		
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
