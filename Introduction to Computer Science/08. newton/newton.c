#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
  return x*x-cos(x);
}

float df(float x)
{
  return 2*x+sin(x);
}

int main(int argc, char *argv[])
{
  float xn,xn1;
  int time=0;
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n\nBecause of \"x^2-cosx\" have two x-intercepts,\nyou can enter >0 or <0 guess values\nand you can see the processes!\n");
  scanf("%f",&xn);
  while((fabs(f(xn))>1.E-7)&&(time<100))
  {
    xn1=xn-f(xn)/df(xn);
    printf("time %3d => X(n)=%10f ; X(n+1)=%10f \n",time,xn,xn1);
    time++;
    xn = xn1;
  }
  printf("\nThis answer is %f\n",xn1);  
  system("PAUSE");	
  return 0;
}
