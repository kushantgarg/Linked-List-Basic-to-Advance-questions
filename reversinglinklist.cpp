//boilerplate code

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node * reverse(node *current)
{
	node *next,*prev=NULL;
	while(current!=NULL)
	{
	   next=current->next;
	   current->next=prev;
	   prev=current;
	   current=next;
	}
	return prev;
}
int main()
{
	node *head,*prev,*p;
	head=NULL;
	int n;
	cout<<"Enter the number of node to inserted in link list"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=new node();
		cin>>p->data;
	    if(head==NULL)
		{
			head=p;
		  }  
		  else{
		  	prev->next=p;
		  }
		  prev=p;
	}
	node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
	}
	head=reverse(head);
ptr=head;
while(ptr!=NULL)
{
	cout<<ptr->data<<endl;
	ptr=ptr->next;
}

return 0;

}

