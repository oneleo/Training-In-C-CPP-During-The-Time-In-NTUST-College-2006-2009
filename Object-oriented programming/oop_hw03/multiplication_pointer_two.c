#include<stdio.h>
#include<stdlib.h>
int main()
{
  short mul[9][9],i,j,*ptr[9];  /*Use the loop " i and j " to control multiplication table.*/
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\nThis program use pointer to print the multiplication table:\n\n");
  for(i=0;i<9;i++)              /*And we declare a array "mul" to reserve the space of main remember recode the multiplication result.*/
  {
    ptr[i]=&mul[i];             /*Then we will use nine pointers "ptr[9]" to recode the nine "mul[9]"s' one dimension addresses*/
  }
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)              /*mul[i,j]  => [0,0]  ,[0,1]  ,[0,2]  ,[0,3]  ,[0,4]  ,[0,5]  ,[0,6]  ,[0,7]  ,[0,8]  ,[0,9]  ,[1,0]  ,[1,1]  ,[1,2]  ,[1,3]  ,[1,4]  ,[1,5]  ,[1,6]  ,[1,7]  ...*/
    {                             /*(ptr[i]+j)=> ([0]+0),([0]+1),([0]+2),([0]+3),([0]+4),([0]+5),([0]+6),([0]+7),([0]+8),([0]+9),([1]+0),([1]+1),([1]+2),([1]+3),([1]+4),([1]+5),([1]+6),([1]+7)...*/
       *(ptr[i]+j)=(i+1)*(j+1);
    }
  }
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)
    {
      printf("%d*%d=%2d  ",*(ptr[i]),*(ptr[0]+j),*(ptr[i]+j));      /*Print the result!*/
    }
    printf("\n");
  }
  getch();
  return 0;
}
