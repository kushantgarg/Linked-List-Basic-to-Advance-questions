//boilerplate code

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};

int main()
{

	node *head;
	int n;
	cout<<"Enter the number of elements in linked list"<<endl;
	cin>>n;
	head=new node[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the elements in link list"<<endl;
		cin>>head[i].data;
		if(i<=3)
		head[i].next=&head[i+1];
	if(i==4)
	head[i].next=NULL;
	}

node *ptr=&head[0];	

	while(ptr!=NULL)
	{
		
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}


return 0;

}

