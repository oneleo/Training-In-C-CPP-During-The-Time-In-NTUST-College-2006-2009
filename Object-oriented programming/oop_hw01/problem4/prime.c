#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>
#define max 1000000
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can print 1~%d prime number and calculate execute time,\nplease enter any key to start!",max);
  getch();
  printf("\n\n");
  clock_t start, end;
  start = clock();                /*calculate execute time*/
  int prim_reg[max/2]={2,3,5,7},prim_elem=4;
  int i,j,sqr,prim_deter,nex=5;
  printf("%6d%6d%6d%6d",2,3,5,7);
  for(i=11;i<=max;i+=2)
  {
    sqr=(int)sqrt((double)i);
    for(prim_deter=0,j=1;prim_reg[j]<=sqr;j++)
    {
      if((i%prim_reg[j])==0)
      {
        prim_deter=1;
        break;
      }
    }
    if(prim_deter==0)
    {
      printf("%6d",prim_reg[prim_elem++]=i);
      if(nex%13==0)
      {
        printf("\n");
      }
      nex++;
    }
  }
  end = clock();
  printf("\nThis program's execute time is %.14lf second",((end-start)/(double)CLK_TCK));
  getch();
  return 0;
} 
