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
// Node* deletenode(Node *&head, int n,int sizeofll)
// {
//     if(head==NULL)
//     return NULL;
//     if(n==sizeofll)
//     {
//         return head->next;
//     }
    
//     Node* current=head;
//     int auxnode=sizeofll-n;
//     int i=1;
//     while(i<auxnode)
//     {
//         current=current->next;
//         i++;
//     }
//     current->next=current->next->next;
//     return head;
// }
void printlist(Node*head)
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
 
    }
}
Node* findmiddle(Node *head)
{
    //we are using two pointer to find the moddle of the std::list<T> ;
Node*hare=head;
Node*turtle=head;
while(hare->next!=NULL && hare->next->next!=NULL)
{
    hare=hare->next->next;
    turtle=turtle->next;
}
return turtle;
    
}

Node* reverse(Node *head)
{
    Node*current=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(current!=NULL)
    {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
    }
    return prev;
}

bool isPalinDrom(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return true;
    } 
    Node *mid=findmiddle(head);
    Node* secondhalf=reverse(mid->next);
Node* firsthalf=head;
while(secondhalf!=NULL)
{
    if(firsthalf->data!=secondhalf->data)
    {
        
        return false;
    }
    firsthalf=firsthalf->next;
    secondhalf=secondhalf->next;
}
return true;

}
int main()
{
    //node created
    Node *head=new Node(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(1);
cout<<isPalinDrom(head);
//    head->next->next->next->next=newnode(5);
  
    
}//boilerplate code

#include<iostream>
using namespace std;
int main()
{


return 0;

}

