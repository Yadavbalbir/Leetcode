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
        vector<int> num1;
        vector<int> num2;
        
        while(l1!=NULL){
            num1.push_back(l1->val);
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            num2.push_back(l2->val);
            l2 = l2->next;
        }
        for(auto v: num1){
            cout<<v<<" ";
        }
        cout<<endl;
        
        for(auto v: num2){
            cout<<v<<" ";
        }
        cout<<endl;
        
        vector<int> ans;
        int carry = 0;
        if(num1.size()>=num2.size()){
            int n1 = num1.size();
            int n2 = num2.size();
            for(int i=0;i< n2;i++){
                int sum = num1[i] + num2[i]+carry;
                cout<<sum<<endl;
                if(sum>9){
                    carry = 1;
                    sum = sum%10;
                }else{
                    carry = 0;
                }
                ans.push_back(sum);
            }
            for(int i = n2; i< n1; i++){
                int sum = num1[i]+carry;
                if(sum>9){
                    carry = 1;
                    sum = sum%10;
                }else{
                    carry = 0;
                }
                ans.push_back(sum);
                
            }
        }else{
            int n1 = num1.size();
            int n2 = num2.size();
            for(int i=0;i<n1;i++){
                int sum = num1[i] + num2[i]+carry;
              
                if(sum>9){
                    carry = 1;
                    sum = sum%10;
                }else{
                    carry = 0;
                }
                ans.push_back(sum);
            }
            for(int i = n1; i<n2; i++){
                int sum = num2[i]+carry;
                if(sum>9){
                    carry = 1;
                    sum = sum%10;
                }else{
                    carry = 0;
                }
                ans.push_back(sum);
                
            }
        }
        
        if(carry!=0) ans.push_back(carry);
        
        for(auto v: ans){
            cout<<v<<" ";
        }
        
        reverse(ans.begin(), ans.end());
        
        ListNode* result = new ListNode(ans.back());
        ans.pop_back();
        
        ListNode* head = result;
        
        while(ans.size()!=0){
            ListNode* ntemp= new ListNode(ans.back());
            ans.pop_back();
            head->next = ntemp;
            head = ntemp;
        }
        
        return result;
        
    }
};