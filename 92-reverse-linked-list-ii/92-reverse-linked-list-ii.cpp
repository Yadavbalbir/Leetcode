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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL){
            return head;
        }
        
        if(right==left){
            return head;
        }
        
        ListNode* leftNode = head;
        int i =1;
        while(i<left){
            leftNode = leftNode->next;
            i++;
        }
        
        int len = right - left;
         i = 0;
        vector<int> v;
        ListNode* temp = leftNode;
        while(i<=len){
            v.push_back(temp->val);
            temp = temp->next;
            i++;
        }
        
         i =0;
        while(i<=len){
            leftNode->val = v.back();
            v.pop_back();
            leftNode = leftNode->next;
            i++;
        }
        
        return head;
        
        
    }
};