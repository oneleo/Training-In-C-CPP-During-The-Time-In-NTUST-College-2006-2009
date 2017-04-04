#include<stdio.h>
#include<stdlib.h>
double test(long m)
{
  short sign;
  if(m%2==0)
  {
    sign=-1;
  }
  else
  {
    sign=1;
  }
  if(m==1)
  {
    return 1;
  }
  else
  {
    return test(m-1)+(float)sign*1/m;
  }
}
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can calculate 1-1/2+1/3-1/4+...+1/(M-1)-1/M\nPlease enter this M that is even : ");
  long m;
  scanf("%d",&m);
  printf("%.15lf",test(m));
  getch();
  return 0;
}
