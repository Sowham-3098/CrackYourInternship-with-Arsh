 /*
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
     TreeNode* prev;
    int sum = 0;
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        
        
        if(!root->left && !root->right && prev && prev->left == root) sum+= root->val;
        
        prev = root;
        sumOfLeftLeaves(root->left);
        prev = root;
        sumOfLeftLeaves(root->right);
        
        return sum;
        
    }
};
