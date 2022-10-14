//finding the nth node from the last of ll
#include<iostream>
using namespace std; 
class Node{
  public:
  int data;
  Node*next;
  Node(int data)
  {
      this->data=data;
      next=NULL;
  }
};
Node* newnode(int data)
{
    Node *n=new Node(data);
    return n;
}
Node* deletenode(Node *&head, int n,int sizeofll)
{
    if(head==NULL)
    return NULL;
    if(n==sizeofll)
    {
        return head->next;
    }
    
    Node* current=head;
    int auxnode=sizeofll-n;
    int i=1;
    while(i<auxnode)
    {
        current=current->next;
        i++;
    }
    current->next=current->next->next;
    return head;
}
void printlist(Node*head)
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main()
{
    //node created
    Node *head=new Node(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);
    head->next->next->next->next=newnode(5);
   int sizeofll=0;
   Node *ptr=head;
   while(ptr!=NULL)
   {ptr=ptr->next;
       sizeofll++;
       
   }
 
   int n;
   cin>>n;
  head= deletenode(head,n,sizeofll);
   printlist(head);
    
}
