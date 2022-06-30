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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        int len =0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        
        temp = head;
        len = len/2;
        
        int i=0;
        
        while(i<len){
            swap(temp->val, temp->next->val);
            temp = temp->next;
            temp = temp->next;
            i++;
        }
        
        return head;
        
        
    }
};