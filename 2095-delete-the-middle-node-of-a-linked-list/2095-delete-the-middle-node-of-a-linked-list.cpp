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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            head = NULL;
            return head;
        }
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp= temp->next;
        }
        
        len = len/2;
        
        int i=0;
        ListNode* leftNode=head;
        while(i<len-1){
            leftNode = leftNode->next;
            i++;
        }
        
        ListNode* target = leftNode->next;
        ListNode* rightNode= target->next;
        
        leftNode->next = rightNode;
        target->next = NULL;
        return head;
    }
};