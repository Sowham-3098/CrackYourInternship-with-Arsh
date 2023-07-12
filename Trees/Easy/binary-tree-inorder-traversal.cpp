
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>answer;
        inorder(root,answer);
        return answer;
    }
    void inorder(TreeNode* node,vector<int>& answer){
        if(node!=NULL){
            inorder(node->left,answer);
            answer.push_back(node->val);
            inorder(node->right,answer);
        }
    }
};
