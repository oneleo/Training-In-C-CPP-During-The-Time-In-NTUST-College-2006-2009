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
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n");
  printf("本程式使用泰勒展開式計算COS值，請輸入度度量！\n");
  scanf("%lf",&x);
  k=(int)x; 
  x=x*3.1415926535897932384626433832795/180;
  printf("開始計算cos%d\n",k); 
  for(i=1;i<=8;i++)
  {
    cos=cos+sig*mul(x,i*2)/(ste(i*2));
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("　　　.\n"); 
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("　　　.\n"); 
    for(delay=0;delay<75000000;delay++)
    {
      ;
    }
    printf("目前做到=> cos%d°= %.6f\n",k,cos);
    sig=sig*(-1); 
  }
  printf("\n計算完成～你所要的cos%d°值為%.6f\n\n",k,cos); 
  system("PAUSE");	
  return 0;
}
