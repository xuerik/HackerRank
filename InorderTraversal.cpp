// Erik Xu
// Data Structures > Trees
// https://www.hackerrank.com/challenges/tree-inorder-traversal 

/* you only have to complete the function given below.  
   Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Inorder(node *root) {
  
  if(root->left != NULL) {
    Inorder(root->left);
  }
  
  // 
  else {
    cout << root->data << " ";
    return;
  }
  
  cout << root->data << " ";
  
  if(root->right != NULL) {
    Inorder(root->right);
  }

  return;
}
