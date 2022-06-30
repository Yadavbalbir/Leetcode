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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        if(head==NULL) return head;
        ListNode* temp = head;
        while(temp!=NULL){
            mp[temp->val]++;
            temp= temp->next;
        }
        
        temp = head;
        int size = mp.size();
        int i =0;
        for(auto v: mp){
            temp->val = v.first;
            i++;

            if(i<size){
                temp = temp->next;
            }

        }
        temp->next = NULL;
        
        return head;
    }
};