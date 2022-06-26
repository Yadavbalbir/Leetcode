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
        int cnt = 1;
        ListNode *temp = head, *leftNode = head , *ansNode = head;
        while(temp->next){
            temp = temp->next;
            cnt++;
        }
        cnt = cnt/k;
        while(cnt--){
            vector<int> v;
            for(int i=0; i<k; i++){
                v.push_back(leftNode->val);
                leftNode = leftNode->next;
            }
            for(int i=0;i<k;i++){
                ansNode->val = v.back();
                v.pop_back();
                ansNode = ansNode->next;
            }
        }
        return head;
    }
};