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
    int carry=1;
    while(carry)
    {
        head->data+=1;
        if(head->data<10) return reverselist(head);
        else
        head->data=0;
        //we will take carry forward
        if(head->next==NULL)
        break;
        else
        head=head->next;
    }
    //if still its not return it means we have to add one external loop 
    // so we will do so
    Node *extranode=new Node(1);
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
int main()
{
 Node *head1= new Node(6);
 push(head1,4);
 push(head1, 3);
 push(head1,2);
 push(head1,1);
 Node *head2=new Node(8);
 push(head2,6);
 push(head2,4);
 push(head2,2);
 Node* intersecthead=findintersect(head1,head2);
 print(intersecthead);
 
 
 
}
