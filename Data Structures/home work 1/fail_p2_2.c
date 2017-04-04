#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10
void swap(int *x,int *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
void insert_sort(int data[],int amount)
{
  int i,j;
  for(i=1;i<=amount;i++)
  {
    for(j=i;j>0;j--)
    {
      if(data[j-1]>data[j])
      {
        swap(&data[j-1],&data[j]);
      }
    }
  }
}
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n");
  int i;
  typedef struct node             /*Defined a singly linked list type*/
  {
    int item;
    struct node *link;
  }
  node;
  node *data[max];                /*Creat a link list*/
  srand((unsigned)time(NULL));    /*Seed of random*/
  for(i=0;i<max;i++)              /*Use loop and pointer creat */
  {
    data[i]=(node*)malloc(sizeof(node));
    if(data[i]==NULL)
    {
      printf("The memory is full!");
      getch();
      return 0;
    }
    data[i]->item=rand()%1001;
    if((i-1)>=0)
    {
      data[i-1]->link=data[i];
    }
    if(i==(max-1))
    {
      data[i]->link=NULL;
    }
  }
  node *front;
  front=(node*)malloc(sizeof(node));
  if(front==NULL)
  {
    printf("The memory is full!");
    getch();
    return 0;
  }
  front=*data;

  getch();
  return 0;
}
