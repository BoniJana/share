
/*
    class TreeNode{
        int val;
        TreeNode* left_ptr;
        TreeNode* right_ptr;
    };
*/
/*
    Complete the function below
*/

bool isBSTrecur(TreeNode* root){
    if(root==NULL)
    return true;
    
    //base case
    if(root->left_ptr==NULL && root->right_ptr==NULL)
    return true;
    
  
    //preorder case
    //process left
    if(root->left_ptr) {
        if(root->left_ptr->val > root->val)
            return false;
    }
    
    if(root->right_ptr){
        if(root->right_ptr->val < root->val)
            return false;
    }
    
    return isBSTrecur(root->left_ptr)&&isBSTrecur(root->right_ptr);
  
}

bool isBST(TreeNode* root){
    
    return isBSTrecur(root);
}
