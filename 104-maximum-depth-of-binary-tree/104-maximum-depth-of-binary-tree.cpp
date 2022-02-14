// Abhi ye Topic maine padha nhi h... Padhne ke baad wapas krunga

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
    int maxDepth(TreeNode* root) {
        if(root == NULL) // if root is null, that means no node from now
        {
             return 0; // so we will return 0
        }
        int left_side = maxDepth(root -> left); // we will call for left side
        int right_side = maxDepth(root -> right); // we will call for right side
        
        // so, if any of the node exist from any side, we will take this and increase our height
        
        return max(left_side,right_side ) + 1; 
    }
};