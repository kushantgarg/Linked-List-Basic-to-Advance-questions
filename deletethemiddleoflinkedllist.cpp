//boilerplate code
#include<stdlib.h>
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *head,*p,*prev;
void insert(int n)
{
    head=NULL;
    for(int i=1;i<=n;i++)
    {
  
        p=new node();
        cout<<"Enter the data in node "<<"  "<<i;
        cin>>p->data;
        if(head==NULL)
        {
            head=p;
        }
        else if(i>n)
        prev->next=NULL;
        else 
        {
        	prev->next=p;
		}
        prev=p;
    }
    
}
int main()
{
	int n;
cout<<"Enter the number of elements in linked list";
cin>>n;
insert(n);
int count=0;
node *ptr=head;
while(ptr!= NULL)
{
		count+=1;
		ptr=ptr->next;
	
}

ptr=head;
int middle;
if(count%2==0)
{
	middle=count/2;
}
else
middle=(count+1)/2;
node *p=head;
//node*q=head->next;
for(int i=1;i<middle;i++)
{

	 p=p->next;
	 //q=q->next;
	 
	
}
//now p contain the address of midle element
node *q=head;
while(q!=p)
{
	q=q->next;
}
cout<<q->data;
while(head!=NULL)
{
	cout<<head->data;
	head=head->next;
}




return 0;

}

