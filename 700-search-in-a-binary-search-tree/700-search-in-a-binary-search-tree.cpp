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
    TreeNode* ans;
    void preorder(TreeNode* root, TreeNode* &ans, int val){
         if(root==NULL){
            return;
        }
        
        //Node
        if(root->val==val){
            ans = root;
        }
        
        //left
        preorder(root->left, ans, val);
        
        //right
        preorder(root->right, ans, val);
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        preorder(root, ans, val);
        return ans;
    }
};