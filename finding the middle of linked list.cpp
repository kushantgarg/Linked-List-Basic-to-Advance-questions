/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int mid;
        int count=0;
        ListNode*ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        if(count%2==0)
        {
        mid=(count+1)/2;
            
        }
        else
            mid=count/2;
        ptr=head;
        for(int i=0;i<mid;i++)
        {
            ptr=ptr->next;
        }
        return ptr;
    }
};
