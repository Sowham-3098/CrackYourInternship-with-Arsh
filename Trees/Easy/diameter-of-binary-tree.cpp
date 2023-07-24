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
int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
       findmax(root);
            return diameter-1;
    }
    int findmax(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l=findmax(root->left);
        int r=findmax(root->right);
diameter=max(diameter,l+r+1);
        return 1+max(l,r);

    }
};
