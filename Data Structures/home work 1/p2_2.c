#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct node                 /*Define node as singly linked list structure.*/
{
  int data;                         /*Use data to save data of node.*/
  struct node *link;                /*Link is a node pointer, it appoint next node.*/
}
node;
node *front,*rear;
void create_list(void)              /*Constructor two empty nod that are front and rear.*/
{
  front=(node*)malloc(sizeof(node));
  rear=(node*)malloc(sizeof(node));
  front->link=NULL;
  rear->link=NULL;
}
void free_list(void)               /*Destructor*/
{
  node *this_node,*temp_node;
  if(front->link!=NULL)
  {
    this_node = front->link;
    while(this_node->link != NULL)
    {
      temp_node = this_node;
      this_node = this_node->link;
	  free(temp_node);
    }
        free(this_node);
  }
  else;
  free(front);
  free(rear);
}
int empty(void)                    /*Decide node whether is a empty node or not.*/
{
   if(front->link == NULL)
      return 1;
   else
      return 0;
}
void insert_node(int key)          /*The data (key) Insert singly linked list, and let them arrangement by insertion sort.*/
{
  node *new_node,*prev_node,*this_node;
  new_node=(node*)malloc(sizeof(node));
  new_node->data=key;
  new_node->link=NULL;
  if(empty())                      /*If node after front node is empty, insert first node to after front node.*/
  {
    front->link=new_node;
    rear->link=new_node;
  }
  else
  {
    this_node=front->link;
    if (key<this_node->data)       /*Insert to forward of linked list.*/
    {  
      front->link=new_node;
      new_node->link=this_node;
    }
    else
    {
      while(this_node->link!=NULL) /*Insert to intermedium of linked list.*/
      {  
        prev_node=this_node;
        this_node=this_node->link;
        if(key<this_node->data)
        {
          prev_node->link=new_node;               
          new_node->link=this_node;
          return;
        }
      }
      this_node->link=new_node;    /*Insert to tail of linked list.*/
      rear->link=new_node;
    }
  }
}
void print(void)                   /*Print this linked list.*/
{
  short i=1;
  node *this_node;
  if(!empty())                     /*If node is not empty, ptint node.*/
  {
    this_node=front->link;
    while(this_node->link!=NULL)
    {
      printf("%4d ->",this_node->data);
      if(i==11)
      {
        printf("\n");
        i=0;
      }
      i++;
      this_node=this_node->link;
    }
    printf("%4d",this_node->data);
  }
  else
  { 
    printf("Node is empty!\n");     /*If node is empty, print "node is empty!".*/
  }
}
int main(void)
{
  int i,max,start_time,end_time;
  create_list();
  srand((unsigned)time(NULL));      /*Seed of rand.*/
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\nThis program use singly linked list data to do insertion sort!\nPlease enter the amount of random data to start: ");
  scanf("%d",&max);
  int item[max];
  printf("\nData before insertion sort:\n");
  start_time=clock();
  for(i=0;i<max;i++)
  {
    item[i]=rand()%1001;
    printf("%4d   ",item[i]);
    if((i+1)%11==0)
    {
      printf("\n");
    }
    insert_node(item[i]);
  }
  end_time=clock();
  printf("\n\nThis is the result that linked list and after insertion sort:\n");
  print();
  printf("\n\nThis program's running time is %.3lf second",(double)(end_time-start_time)/CLOCKS_PER_SEC);
  free_list();
  getch();
  return 0;
}
