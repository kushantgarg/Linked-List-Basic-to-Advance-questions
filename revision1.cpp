#include<iostream>
using namespace std; 
class node{
	public:
		int data;
		node *next;
};
int main()
{
	node *head, *prev,*p;
	head=NULL;
	int n;//number of nodes in linked list
	cout<<"Enter the number of nodes in a link list"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=new node();
		cout<<"ENter the data in node "<<i<<endl;
		cin>>p->data;
		if(head==NULL)
	{
		head=p;
	}
	else
	prev->next=p;
	prev=p;
	}
	cout<<"printing the linked list"<<endl;
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

