// add two numbers represented by 2 linked list and return a 
//new list of sum
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void push(Node *&head, int data)
{
    Node *newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}
void print(Node *head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
}
Node * reverselist(Node *head)
{
    Node *current=head, *prev=NULL, *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
Node * addone(Node* head)
{
    //first we will reverse the std::list<T> ;
    head=reverselist(head);
    Node *current=head;
    print(head);
    cout<<endl;
    int carry=1;
    while(carry)
    {
        current->data+=1;
        if(current->data<10) return reverselist(current);
        else
        current->data=0;
        //we will take carry forward
        if(current->next==NULL)
        break;
        else
        current=current->next;
    }
    //if still its not return it means we have to add one external Node 
    // so we will do so
     current->next=new Node(1);
   // head->next=extranode;
    return reverselist(head);
}
Node * findintersect(Node *head1, Node *head2)
{
    Node *head=NULL,*tail=NULL;//for the new Node
    Node *p1=head1, *p2=head2;
    while(p1&&p2)
    {
	
    if(p1->data>p2->data)
    {
        // as element is not same
        p2=p2->next;
    }
    else if(p1->data<p2->data)
    {
        p1=p1->next;
    }
    else{
        //if element are same
        if(head==NULL)
        {
            head=tail=new Node(p1->data);
        }
        //if head is not null create the head 
        //else if head is not null means list is created add elemtnto forward to it
    else
    {
        //append new node at end using tail
        tail->next=new Node(p1->data);
        tail=tail->next;
    }
    p1=p1->next;
    p2=p2->next;
    //moving the next node if elemtn are same
        
}
	}
    return head;
}
//function to add numbers represented by a linked list and//
// return a new list names sum
Node * addlist(Node *first, Node *second)
{
    //reverse both the list
    Node * sum=NULL;
    Node*one=reverselist(first);
    Node *two=reverselist(second);
    int carry =0;
    while(one!=NULL||two!=NULL||carry!=0)
    {
        int newvalue=carry;
        if(one)
        {
            newvalue=one->data;
            
        }
        if(two)
        {
            newvalue=two->data;
        }
        // as i have to extreact one valu 
        carry=newvalue/10;
        newvalue=newvalue%10;
        //create the new node to store only single digit
        Node * newnode= new Node(newvalue);
        newnode->next=sum;
        sum=newnode;
        if(one)
        one=one->next;
        if(two)
        two=two->next;
    }
    return sum;
}
int main()
{
 Node *head=new Node(9);
 head->next=new Node(9);
 head->next->next=new Node(9);
 print(head);
 cout<<endl;
 head=addone(head);
 print(head);
 
}
