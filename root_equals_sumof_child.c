2236 ROOT EQUALS SUM OF CHILDREN

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    if((root->left->val+root->right->val)==root->val)
        return true;
    else
        return false;
}
