#include<stdio.h>
#include<stdlib.h>
int main()
{
  short mul[9][9],i,j;      /*Use the loop " i and j " to control multiplication table.*/
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\n");
  for(i=0;i<9;i++)          /*And we declare a pointer array to reserve the space of main remember recode the result.*/
  {
    for(j=0;j<9;j++)
    {
      *(*(mul+i)+j)=(i+1)*(j+1);
    }
  }
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)
    {
      printf("%2d*%2d=%2d",*(*(mul+i)),*(*(mul+j)),*(*(mul+i)+j));      /*Print the result!*/
    }
    printf("\n");
  }
  getch();
  return 0;
}
