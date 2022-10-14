//boilerplate code
#include<stdlib.h>
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
cout<<"Enter the item to be searched in linked list"<<endl;
int item;
cin>>item;
//node *loc=NULL;
node *ptr;
ptr=head;
//loc=new node();
while(ptr!=NULL)
{
	//cout<<head->data;
	//int a=head->data;
	if(ptr->data==item)
	{
		cout<<"a";
	//loc=head;	
		exit(0);
		
	}
	else 
	ptr=ptr->next;
}
if(ptr==NULL)
cout<<"Search unsuccessfull";
return 0;

}

