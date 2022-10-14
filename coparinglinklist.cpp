//boilerplate code
#include<stdlib.h>
#include<iostream>
class node{
	public:
		int data;
		node *next;
		
};
using namespace std; 
 node*prev=NULL;node*p=NULL;node*head;
 node* insertinginlinklist(int n,node*list)
{
	list=head=NULL;
	//cout<<n;
	int data;
	for(int i=1;i<=n;i++)
	{
		
		p=new node();
		cout<<"enter the ele in list";
		cin>>p->data;
		if(head==NULL)
		{
			//cout<<"a";
			head=p;
		}
		else if(i>n)
		{
			//cout<<"b";
			prev->next=NULL;
		}
		else
		{
			//cout<<"c";
		prev->next=p;
		}
		
		prev=p;
	}
	return head;
	
}
bool compare(int n1,int n2,node**list1,node**list2)
{
	if(n1!=n2)
	return false;
	for(int i=0;i<n1;i++)
	{
		if((*list1)->data!=(*list2)->data)
		return false;
		else
		*list1=(*list1)->next;
		*list2=(*list2)->next;
	}
	return true;
}
int main()
{
	int n1,n2;
cout<<"Enter the number of element in list one";
cin>>n1;
node *list1;
list1=insertinginlinklist(n1,list1);
node*temp=list1;
while(temp!=NULL)
{
	cout<<temp->data<<endl;
	temp=temp->next;
}
temp=0;

cout<<"Enter the number of element in list two";
cin>>n2;
node *list2=insertinginlinklist(n2,list2);
temp=list2;
while(temp!=NULL)
{
	cout<<temp->data<<endl;
	temp=temp->next;
}
cout<<compare(n1,n2,&list1,&list2);

return 0;

}

