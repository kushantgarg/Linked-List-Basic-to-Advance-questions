//merge sorting in the linked std::list<T> ;
//steps are:
//1. if head is null retunr null 
//2. if head is not null divide the linklist into 
//3. two equlal half and then call them again and again 
//till you reach the base condition
//4.then sort two half seperately and at last merge the to halfs
//5. to merge the two half we will use sorted merge function 
#include<iostream>
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
    //insertion at head
    Node * newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}
void printList(Node *head)
{
    Node *current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" "<<"-> ";
        current=current->next;
        
    }
}
void frontbacksplit(Node * head, Node*&one, Node *&two)
{
     Node* fast;
    Node* slow;
    slow = head;
    fast = head->next;
 
    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    /* 'slow' is before the midpoint in the list, so split it in two
    at that point. */
    one = head;
    two = slow->next;
    slow->next = NULL;
}
Node * sortedmerge(Node *one, Node *two)
{
    Node * result=NULL;
   //base condition
   if(one==NULL)
   {
       return two;
   }
   else if(two==NULL)
   {
       return one;
   }
   if(one->data<=two->data)
   {
       result=one;
       result->next=sortedmerge(one->next,two);
   }
    else
    {
        result=two;
        result->next=sortedmerge(one, two->next);
    }
    return result;
}
void MergeSort(Node *&a)
{
    Node *head=a;
    Node *one,*two;
    //base case
    if((head==NULL)||(head->next==NULL))
    {
        return ;
    }
    //now split the linked list into two equal part
    //as we do with array in the merge Sort
    frontbacksplit(head,one, two);
    //calling merge sort again for separated two parts
    MergeSort(one);
    MergeSort(two);
    // at the last merge the string in sorted order as we do in case of arrays
    head=sortedmerge(one,two);
    
}

int main()
{
    /* Start with the empty list */
    Node* res = NULL;
    Node* a = NULL;
 
    push(a, 17);
    push(a, 20);
    push(a, 5);
    push(a, 6);
    push(a, 3);
    push(a, 2);
 printList(a);
 cout<<endl;
 //calling MergeSort
   MergeSort(a);
 
    cout << "Sorted Linked List is: \n";
    printList(a);
 
    return 0;
}


