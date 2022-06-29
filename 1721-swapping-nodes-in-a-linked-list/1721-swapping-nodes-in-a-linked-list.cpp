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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp= temp->next;
        }
        
        ListNode* left = head;
        ListNode* right = head;
        
        int i =1;
        while(i<k){
            left = left->next;
            i++;
        }
        
        i = 1;
        while(i<(len-k+1)){
            right = right->next;
            i++;
        }
        
        swap(left->val, right->val);
        
        return head;
    }
};