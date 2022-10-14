#include<iostream>
#include<stdlib.h>
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
  cout<<"A";
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
    cout<<"Enter the number of elements in linked list"<<endl;
    cin>>n;
   insert(n);
   int count=0;
   node*ptr=head;
   while(ptr!=NULL)
   {
  count+=1;;
   	ptr=ptr->next;
   }
   ptr=head;
   //count=count/2;
   for(int i=1;i<=count;i++)
   {

   	if(i==(count+1)/2)
   	{
   		cout<<ptr->data;
	   }
	   ptr=ptr->next;
   	
   	
   }

}
