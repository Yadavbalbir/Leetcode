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
    bool result=true;
    int height(TreeNode* root){
         if(root==NULL) return 0;
        
        int left_h = height(root->left);
        int right_h = height(root->right);
        
        if(abs(left_h-right_h)>1) {
            result = false;
        }
        
        int ans;
        ans = max(left_h, right_h) + 1;

        return ans;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return result;
    }
};