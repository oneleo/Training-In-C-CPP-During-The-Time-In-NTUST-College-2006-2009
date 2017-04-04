#include<stdio.h>
#include<stdlib.h>
#define tim 20
short sign(short sig)
{
  if(sig%2==0)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

double mult(double mul,short deg)
{
  double mul_temp=1.0;
  for(;deg>=1;deg--)
  {
    mul_temp=mul_temp*mul;
  }
  return mul_temp;
}

unsigned long step(unsigned long base)
{
  if((base==0)||(base==1))
  {
    return 1;
  }
  else if(base<0)
  {
    return -1;
  }
  else
  {
    return base*step(base-1);
  }
}

int main(void)
{
  int n;
  double x,sin;
  printf("\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\nThis program can calculate trigonometric: sin,\nPlease enter the angle : ");
  scanf("%lf",&x);
  x=x*3.1415926535897932384626433832795/180;
  for(n=1;n<=tim;n++)
  {
    sin=sin+sign(n-1)*mult(x,2*n-1)/step(2*n-1);
    printf("%.15lf\n",sin);
  }
  getch();
  return 0;
}
