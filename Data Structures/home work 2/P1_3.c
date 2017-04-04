void find_minimum(node *root)         /*Find the minimum number.*/
{
  if(root!=NULL)
  {
    if(min>root->data)                /*Use preorder traversal method to find minimum number.*/
    {
      min=root->data;
    }
    find_minimum(root->left_child);
    find_minimum(root->right_child);
  }
}
