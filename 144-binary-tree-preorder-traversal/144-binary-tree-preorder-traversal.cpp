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
    vector<int> ans;
    void Preorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        
        // Node
            ans.push_back(root->val);
        
        //left 
            Preorder(root->left);
        
        // Right
            Preorder(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        Preorder(root);
        return ans;
    }
};