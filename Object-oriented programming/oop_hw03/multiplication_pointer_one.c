#include<stdio.h>
#include<stdlib.h>
int main()
{
  short mul[9][9],i,j,*ptr;      /*Use the loop " i and j " to control multiplication table.*/
  printf("\n---------------��This program is-��-B9502028-��-���q��-create��---------------\n\nThis program use pointer to print the multiplication table:\n\n");
  ptr=&mul;                      /*And we declare a array "mul" to reserve the space of main remember recode the result.*/
  for(i=0;i<9;i++)               /*Then we will use a pointer "ptr" recode the mul's address*/
  {
    for(j=0;j<9;j++)             /*mul[i,j]    => [0,0],[0,1],[0,2],[0,3],[0,4],[0,5],[0,6],[0,7],[0,8],[0,9],[1,0],[1,1],[1,2],[1,3],[1,4],[1,5],[1,6],[1,7]...*/
    {                            /*(ptr+9*i+j) => (+0) ,(+1) ,(+2) ,(+3) ,(+4) ,(+5) ,(+6) ,(+7) ,(+8) ,(+9) ,(+10),(+11),(+12),(+13),(+14),(+15),(+16),(+17)...*/
      *(ptr+9*i+j)=(i+1)*(j+1);
    }
  }
  for(i=0;i<9;i++)
  {
    for(j=0;j<9;j++)
    {
      printf("%d*%d=%2d  ",*(ptr+i),*(ptr+j),*(ptr+9*i+j));      /*Print the result!*/
    }
    printf("\n");
  }
  getch();
  return 0;
}
