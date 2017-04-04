void find_maximum(node *root)         /*Find the maximum number.*/
{
  if(root!=NULL)
  {
    if(max<root->data)                /*Use preorder traversal method to find minimum number.*/
    {
      max=root->data;
    }
    find_maximum(root->left_child);
    find_maximum(root->right_child);
  }
}
