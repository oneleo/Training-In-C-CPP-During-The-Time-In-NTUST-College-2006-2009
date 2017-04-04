#include<stdio.h>
#include<stdlib.h>
int main()
{
  short i,j;      /*Use the loop " i and j " to control multiplication table.*/
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\n");
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=9;j++)
    {
      printf("%d*%d=%2d  ",i,j,i*j);
    }
    printf("\n");
  }
  getch();
  return 0;
}
