void preorder(node *root)             /*Preorder traversal*/
{
  if(root!=NULL)
  {
    printf("%4d ",root->data);        /*Access and process its root.*/
    preorder(root->left_child);       /*Traverse its left subtree in preorder.*/
    preorder(root->right_child);      /*Traverse its right subtree in preorder.*/
  }
}
void inorder(node *root)              /*Ineorder traversal*/
{
  if(root!=NULL)
  {
    inorder(root->left_child);        /*Traverse its left subtree in preorder.*/
    printf("%4d ",root->data);        /*Access and process its root.*/
    inorder(root->right_child);       /*Traverse its right subtree in preorder.*/
   }
}
void postorder(node *root)            /*Postorder traversal*/
{
  if(root!=NULL)
  {
    postorder(root->left_child);      /*Traverse its left subtree in preorder.*/
    postorder(root->right_child);     /*Traverse its right subtree in preorder.*/
    printf("%4d ",root->data);        /*Access and process its root.*/
  }
}
