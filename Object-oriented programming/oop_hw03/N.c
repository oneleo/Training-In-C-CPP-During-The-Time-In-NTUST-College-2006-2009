#include<stdio.h>
#include<stdlib.h>
int iif(int upnum,int eonum)
{
  if(upnum<eonum)
  {
    return upnum;
  }
  else
  {
    return eonum;
  }
}
void anatfor(int eonum,int upnum,int j)
{
  int i;
  if(eonum==0)
  {
    printf("%d\n",j);
  }
  for(i=iif(upnum,eonum);i>=1;i--)
  {
/*    getch();
    printf("i=%d eonum=%d   \" < eonum-i= next_eonum  %d-%d=%d > < j= i & next_i  j=%d >\"\n",i,eonum,eonum,i,eonum-i,j);
*/    anatfor(eonum-i,i,j*10+i);
  }
}
int main(void)
{
  int eonum;
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can break a magnitude of number\n\nFor example:\nIf you enter \"5\", you can get those break magnitude of this number:\n5\n41\n32\n311\n2111\n11111\n\nPlease enter this number to start: ");
  scanf("%d",&eonum);
  anatfor(eonum,eonum,0);
  getch();
  return 0;
}
