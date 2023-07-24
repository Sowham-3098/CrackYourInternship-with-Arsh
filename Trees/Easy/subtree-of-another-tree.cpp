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
bool identicalTrees(TreeNode* a, TreeNode* b)
{
   
    if (a == NULL && b == NULL)
        return true;
 
   
    if (a != NULL && b != NULL) {
        return (a->val == b->val
                && identicalTrees(a->left, b->left)
                && identicalTrees(a->right, b->right));
    }
 
   
    return false;
}
bool find(TreeNode* root, TreeNode* subRoot){
   if(identicalTrees(root,subRoot)){
       return true;
   }

    if(root==NULL){  
        return false;
    }
      return find(root->left,subRoot)|find(root->right,subRoot);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return find(root,subRoot);
    }
};
