
class Solution {
public:
    bool isSymmetricTree(TreeNode *root1, TreeNode *root2){
      
        if(!root1 || !root2){
            return !root1 && !root2 ? true : false;
        }
 
        if(root1->val != root2->val) return false;
        
       
        return isSymmetricTree(root1->left, root2->right) && isSymmetricTree(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isSymmetricTree(root, root);
    }
};
