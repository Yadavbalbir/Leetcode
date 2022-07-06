/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<pair<int,int>> tans;
    pair<int,int> p;
    int maxdepth = 0;
    
    void rec(TreeNode* root){
        
        // base case
         if(root==NULL){
            tans.push_back(p);
             cout<<p.first<<endl;
             maxdepth = max(maxdepth, p.first);
             // cout<<maxdepth<<endl;
             return;
             
        }
        
        p.first +=1;
        p.second = root->val;
        
        // left recursion
        rec(root->left);
       
        // right recursion
        rec(root->right);
         p.first -=1;
    }
    int deepestLeavesSum(TreeNode* root) {
        p.first = 0;
        p.second = 0;
        rec(root);
        int sum  = 0;
        for(auto v : tans){
            if(v.first == maxdepth){
                sum+= v.second;
            }
        }
        return sum/2;
    }
};