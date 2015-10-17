// Erik Xu
// Data Structures > Trees
// https://www.hackerrank.com/challenges/tree-postorder-traversal/submissions/code/14597811

/* you only have to complete the function given below.  
   Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void Postorder(node *root) {
    if(root->left != NULL) {
      Postorder(root->left);
    } 
    
    if(root->right != NULL) { 
      Postorder(root->right);    
    }
  
    if(root->left == NULL && root->right == NULL) {
      cout << root->data << " ";
      return;
    }
  
    cout << root->data << " ";
    return;
}
