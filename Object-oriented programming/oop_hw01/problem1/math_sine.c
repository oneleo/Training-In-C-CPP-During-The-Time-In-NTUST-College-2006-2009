#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
  printf("\n---------------��This program is-��-B9502028-��-���q��-create��---------------\nThis program can calculate trigonometric: sin,\nPlease enter the angle : ");
  double x;
  scanf("%lf",&x);
  x=x*4*atan(1)/180;            /*pi=4*atan(1)*/
  printf("%.15lf",sin(x));
  getch();
  return 0;
}
