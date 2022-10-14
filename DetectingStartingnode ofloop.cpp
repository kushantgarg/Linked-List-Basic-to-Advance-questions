//detect loop in link list using 3 methods 
#include<bits/stdc++.h>
using namespace std; 
class Node{
	public:
		Node*next;
		 int data;
		 int flag;
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
	return false;
}
//second method by using floys cycle finding algorithem
//this method will also help to delete the loop
void detectloopfloyd(Node*head)
{
	//if ll is empty or have only one node
	if(head==NULL || head->next==NULL)
	{
		return;
	}
    Node *slow=head, *fast=head;
    while(slow&&fast&&fast->next)//this condition wil be false only if loop not exist
    {
        //increment slow by 1 and increment fast by 2
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
        break;
        }
        
       
    }
    //if loop exist
    if(slow==fast)
    {
    	slow=head;
    	//ccheck if loop has been started from head or not
    	if(slow==fast)
    	{
    		while(fast->next!=slow)
    		{
    			fast=fast->next;
			}
		}
		else
		{
			while(slow->next!=fast->next)
			{
				slow=slow->next;
				fast=fast->next;
				
			}
			
		}
		fast->next=NULL;//loop removed
	}
 
    
}
//third method to alter node a little and add a additional parameter as flag whose initial value os 0
bool detectloopflag(Node*head)
{
    while(head!=NULL)
    {
        if(head->flag==1)
        {
            return 1;
        }
        head->flag=1;
        head=head->next;
    }
    return false;
}
Node* newNode(int data)
{
	Node *n=new Node();
	n->data=data;
	n->next=NULL;
	n->flag=0;
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
//second method to delete the loop is using hashing by storing adddress of node in map
void deleteloophash(Node*head)
{
	Node*last;//to point the previous node or end of loop 
	unordered_map<Node*, int> nodea;
	while(head!=NULL)
	{
		//insert node if it is not present in map 
   		if(nodea.find(head)==nodea.end())
		{
			nodea[head]++;
			last=head;//to have address of last node of loop
			head=head->next;
		}
		else{
		last->next=NULL;

break;
		}
			}
}
int loopbegin(Node*head)
{
		if(head==NULL || head->next==NULL)
	{
		return -1;
	}
    Node *slow=head, *fast=head;
    while(slow&&fast&&fast->next)//this condition wil be false only if loop not exist
    {
        //increment slow by 1 and increment fast by 2
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
     break;
        }
        
        }
        if(slow==fast)
        {
            slow=head;
            if(slow==fast)
            {
                while(fast->next!=slow)
                {
                    fast=fast->next;
                }
            }
            else{
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
        return fast->next->data;
            }
        
            
        }
    return -1;
	
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
//deleteloophash(head);
//detectloopfloyd(head);
//cout<<"Linklist after emoving the loop"<<endl;
//printlist(head);
//printing the starting point of loop
cout<<"Starrting point of Loop is"<<loopbegin(head);
}
