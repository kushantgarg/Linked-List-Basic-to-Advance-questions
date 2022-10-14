//boilerplate code
#include<stdlib.h>
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node*back;
};
int main()
{
int n;
cout<<"Enter the number of elements to be entered in array"<<endl;
cin>>n;
node *head,*p,*prev,*forw;
 head=NULL;
    for(int i=1;i<=n;i++)
    {
  
.2a        p=new node();
        cout<<"Enter the data in node "<<"  "<<i;
        cin>>p->data;
        if(head==NULL)
        {
            head=p;
            head->back=NULL;
        }
        else if(i>n)
        prev->next=NULL;
        else 
        {
        	forw=p;
        	prev->next=p;
        	forw->back=prev;
		}
        prev=p;
    }
node *ptr=head;
int count=0;
while(ptr!=NULL)
{
count+=1;
ptr=ptr->next;
}
if(count%2==0)
count=count/2;
else
count=(count+1)/2;
node *q=head;
for(int i=1;i<count;i++)
{
	q=q->next;
}
node *o =q->back;
o->next=q->next;
node *l=q->next;
l->back=o;
delete q;
ptr=head;
while(ptr!=NULL)
{
	cout<<ptr->data;
	ptr=ptr->next;
}


return 0;

}

