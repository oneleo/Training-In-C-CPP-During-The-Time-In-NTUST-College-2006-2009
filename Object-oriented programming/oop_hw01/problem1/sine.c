#include<stdio.h>
#include<stdlib.h>
#define tim 20
int main(void)
{
  short n;
  double x;
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can calculate trigonometric: sin,\nPlease enter the angle : ");
  scanf("%lf",&x);
  x=x*3.1415926535897932384626433832795/180;
  double part=x,sin=x;
  for(n=1;n<=tim;n++)
  {
    part=part*(-1)*x*x/(2*n)/(2*n+1);
    sin=sin+part;
    printf("%.15lf\n",sin);
  }
  getch();
  return 0;
}
