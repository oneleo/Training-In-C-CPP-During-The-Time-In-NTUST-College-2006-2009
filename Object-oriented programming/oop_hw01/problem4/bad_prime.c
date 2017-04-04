#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100000
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can print 1~%d prime number and calculate execute time,\nplease enter any key to start!",max);
  getch();
  printf("\n\n");
  clock_t start, end;
  start = clock();                /*calculate execute time*/
  short x;
  int i,j,nex=1;
  for(i=2;i<=max;i++)
  {
    x=0;
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
        x=1;
        break;
      }
    }
    if(x!=1)
    {
      printf("%6d",i);
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
