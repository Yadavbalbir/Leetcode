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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        
       
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        
         if(len==1){
            return head->next;
        }
        
        if(len==n){
            return head->next;
        }
        
        int i = 1;
        ListNode* left=head;
        while(i<(len-n)){
            left = left->next;
            i++;
        }
        
        if(left==head ){
            left->next=left->next->next;
            return head;
        }else{
            left->next=left->next->next;
            return head;        
        }
    }
};