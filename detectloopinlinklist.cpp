//detect loop in link list using 3 methods 
#include<bits/stdc++.h>
using namespace std; 
class Node{
	public:
		Node*next;
		 int data;
};
//first method to find the loop using hashing
bool detectloop(Node *head)
{
	unordered_set<Node*>s;
	while(head!=NULL)
	{
		if(s.find(head)!=s.end())
		{
			return true;
		}
		s.insert(head);
		head=head->next;
	}
}
Node* newNode(int data)
{
	Node *n=new Node();
	n->data=data;
	n->next=NULL;
	return n;
}

void printlist(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	Node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
//printlist(head);
}
