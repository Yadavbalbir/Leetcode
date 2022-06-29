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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        int sum = l1->val + l2->val;
        if(sum>9){
            carry = 1;
            sum = sum%10;
        }
        
        ListNode* ans = new ListNode(sum);
        ListNode* head = ans;
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1!=NULL && l2!=NULL){
             sum = l1->val + l2->val + carry;
             l1 = l1->next;
             l2 = l2->next;
             if(sum>9){
                carry = 1;
                sum = sum%10;
            }else{
                 carry=0;
             }
            ListNode* nNode = new ListNode(sum);
            head->next = nNode;
            head = nNode;
        }
        
        while(l1!=NULL){
             sum = l1->val + carry;
            l1 = l1->next;
             if(sum>9){
                carry = 1;
                sum = sum%10;
            }else{
                 carry=0;
             }
            ListNode* nNode = new ListNode(sum);
            head->next = nNode;
            head = nNode;
            
        }
        
        while(l2!=NULL){
             sum = l2->val + carry;
             l2 = l2->next;
             if(sum>9){
                carry = 1;
                sum = sum%10;
            }else{
                 carry=0;
             }
            ListNode* nNode = new ListNode(sum);
            head->next = nNode;
            head = nNode;
        }
        
        if(carry!=0){
            ListNode* nNode = new ListNode(carry);
            head->next = nNode;
            head = nNode;
        }
        
        return ans;
        
    }
};