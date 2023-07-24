class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        Node* root=NULL;
        root=newNode(pre[0]);
        stack<Node*> s;
        Node * temp=root;
        for(int i=1;i<size;i++){
            if(pre[i]<pre[i-1]){
                s.push(temp);
                temp->left=newNode(pre[i]);
                temp=temp->left;
            }
            else if(pre[i]>pre[i-1] && pre[i]<s.top()->data){
                temp->right=newNode(pre[i]);
                temp=temp->right;
            }
            else{
                Node* temp2=s.top();
                while(!s.empty() && s.top()->data<pre[i]){
                    temp2=s.top();
                    s.pop();
                }
                temp2->right=newNode(pre[i]);
                temp=temp2->right;
                
                if(s.empty()){
                   Node* a=newNode(INT_MAX);
                   s.push(a);
                }
            }
        }
        return root;
        //code here
    }
};
