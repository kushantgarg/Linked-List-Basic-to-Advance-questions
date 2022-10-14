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
node *nya=NULL;
nya=new node();
node *ptr=head;
while(ptr!=NULL)
{
	nya->data=ptr->data;
	cout<<nya->data;
	nya->next=ptr->next;
	ptr=ptr->next;
}
return 0;
}
