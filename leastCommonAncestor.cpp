
/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d) 
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

*/
bool funcrecur(Node* root, Node *a){
    
    if(root==NULL)
    return false;
    
    if(root->data == a->data)
    return true;
    
    return funcrecur(root->left, a)||funcrecur(root->right,a);
        
}


int lca( Node *root, Node *a, Node *b)
{
    
    if(root==NULL)
    return -1;
    //base case    
    if(root->left==nullptr && root->right==nullptr){
        if((root->data == a->data) && (root->data ==b->data))
        return root->data;
    }
    //preorder traversal.

    while(root) {
        //left subtree
        if(funcrecur(root->left,a) && funcrecur(root->left,b))
            root=root->left; //find the lowest common
          else if(funcrecur(root->right,a) && funcrecur(root->right,b))
            root=root->right;
         else
            break;
    
    }
    return root->data;
}
