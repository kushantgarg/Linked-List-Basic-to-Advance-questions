// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int findcount(Node *head)
{
    
    int count=0;
    Node *ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }

    return count;
}
int intersectPoint(Node* head1, Node* head2)
{
    Node *ptr1=head1, *ptr2=head2; 
   int count1=findcount(head1);
   int count2=findcount(head2);
   int d=abs(count1-count2);
   if(count1>count2)
   {
      
       for(int i=0;i<d;i++)
       {
           ptr1=ptr1->next;
           
       }
   }
  else
  {
      //ptr=head2;
       for(int i=0;i<d;i++)
       {
           ptr2=ptr2->next;
           
       }
      
  }
while(ptr1!=ptr2)
{
    ptr1=ptr1->next;
    ptr2=ptr2->next;
}
if(ptr1)
return ptr1->data;
    
    //moving the next node if elemtn are same
    // Your Code Here
return -1;
}


