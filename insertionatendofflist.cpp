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
//head= insertbetweennode(head,second,45);
node *ptr=head;
node *fifth;
node *safe;
fifth=new node();
while(ptr!=NULL)
{
	safe=ptr;
	ptr=ptr->next;
}
safe->next=fifth;
fifth->next=NULL;
fifth->data=50;
while(head!=NULL)
{
cout<<head->data;
	head=head->next;
}
return 0;
}

