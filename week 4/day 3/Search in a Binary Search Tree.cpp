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
    TreeNode* helper(TreeNode* root, int val){
        if(!root) return NULL;
        if(root->val == val) return root;
        if(root->val > val) return helper(root->left, val);
        if(root->val < val) return helper(root->right, val);
        return NULL;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        // root
        // bst tree
        // int val
        // return the subtree of the val found else null
        return helper(root, val);
    }
};
