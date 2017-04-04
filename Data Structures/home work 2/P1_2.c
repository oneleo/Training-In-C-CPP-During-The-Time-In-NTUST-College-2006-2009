void insert(node **tree,node *item)   /*Insert binary tree.*/
{
  short ran_num=rand()%2;             /*Random number range 0 to 1, to control insert left or reght.*/
  if(!(*tree))                        /*Whither tree is a empty tree or not.*/
  {
    *tree = item;                     /*Create binary tree node.*/
    return;
  }
  if(ran_num==0)                      /*Go left.*/
  {
    insert(&(*tree)->left_child,item);
  }
  else if(ran_num==1)                 /*Go right.*/
  {
    insert(&(*tree)->right_child,item);
  }
}
