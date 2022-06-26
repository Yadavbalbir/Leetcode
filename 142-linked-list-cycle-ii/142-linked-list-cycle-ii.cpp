/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * temp = head;
        while(temp!=NULL){
            if(temp->val==1e6){
                return temp;
            }
            temp->val= 1e6;
            temp = temp->next;
        }
        
        return NULL;
    }
};