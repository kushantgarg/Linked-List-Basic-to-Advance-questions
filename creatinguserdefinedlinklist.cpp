#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main()
{
	node *p,*head,*prev;
	int n;
	cout<<"Enter the number of elements to be enterd"<<endl;
	cin>>n;
	head=NULL;
	for(int i=1;i<=n;i++)
	{
		p=new node();
		cout<<"enter the element in"<<i<<"node:";
		cin>>p->data;
		if(head==NULL)
		head=p;
		else 
		prev->next=p;
		prev=p;
	}
	while(head!=NULL)
	{
		cout<<head<<endl;
		cout<<head->data<<endl;
		head=head->next;
		
	}
}
