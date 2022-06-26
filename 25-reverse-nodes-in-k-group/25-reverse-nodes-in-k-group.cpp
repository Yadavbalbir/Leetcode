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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }
        
        ListNode* prev = NULL;
        ListNode *currNode = head;
        ListNode *next = NULL;
        
        int cnt =0;
        ListNode* temp = head;
        int count =0;
        
        
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(count<k){
            return head;
        }
        
        while(cnt<k && currNode!=NULL){
            next = currNode->next;
            currNode->next = prev;
            prev = currNode;
            currNode = next;
            cnt++;
        }    
        

        
        if(next!=NULL){
            head->next = reverseKGroup(next, k);
        }
        return prev;
    }
};