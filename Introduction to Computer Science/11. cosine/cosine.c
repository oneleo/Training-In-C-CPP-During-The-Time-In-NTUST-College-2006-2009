#include <stdio.h>
#include <stdlib.h>

double mul(double mul,int deg)
{
  int i;
  double tem;
  if(deg==0)
  {
    return 1; 
  } 
  tem=mul;
  for(i=1;i<deg;i++)
  {
    mul=mul*tem;
  }
  return mul;
}

long ste(long num)
{
  if(num==1)
  {
    return 1;
  }
  return num*ste(num-1);
}

int main(int argc, char *argv[])
{
  short i,sig=-1;
  int delay,k; 
  double x,cos=1.;
  printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n");
  printf("���{���ϥή��Ǯi�}���p��COS�ȡA�п�J�׫׶q�I\n");
  scanf("%lf",&x);
  k=(int)x; 
  x=x*3.1415926535897932384626433832795/180;
  printf("�}�l�p��cos%d\n",k); 
  for(i=1;i<=8;i++)
  {
    cos=cos+sig*mul(x,i*2)/(ste(i*2));
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("�@�@�@.\n"); 
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("�@�@�@.\n"); 
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("�ثe����=> cos%d�X= %.6f\n",k,cos);
    sig=sig*(-1); 
  }
  printf("\n�p�⧹����A�ҭn��cos%d�X�Ȭ�%.6f\n\n",k,cos); 
  system("PAUSE");	
  return 0;
}
