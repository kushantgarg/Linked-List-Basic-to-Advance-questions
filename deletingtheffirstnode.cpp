#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node * deletefirst(node *&head)
{
	node *ptr=head;
	head=head->next;
	delete ptr;// to delete previous head
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
head=deletefirst(head);
while(head!=NULL)
{
	cout<<head->data;
	head=head->next;
}
}
