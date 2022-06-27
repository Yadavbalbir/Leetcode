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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
        int left_h = minDepth(root->left);
        int right_h = minDepth(root->right);
        
        int ans;
        if(left_h==0){
            ans = right_h+1;
        }
        else if(right_h==0){
            ans = left_h+1;
        }
        else{
            ans = min(left_h, right_h) + 1;
        }
        
        return ans;
    }
};