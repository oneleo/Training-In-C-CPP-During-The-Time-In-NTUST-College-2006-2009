#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fibonacci(int n)
{
  if(n<=0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  else
  {
    /*printf("\nn=%d",n);*/
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
int main(void)
{
  int n,start_time,end_time;
  printf("\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n\nThis program can calculate the function:\n\nFn=F(n-1)+F(n-2) n¡Ù2\nbut F0=0, F1=1\n\nPlease enter the n to start: ");
  scanf("%d",&n);
  printf("Begin to calculate!\n\nThe resule is... ");
  start_time=clock();
  printf("%d",fibonacci(n));
  end_time=clock();
  printf("\n\nFinish calculating!\nThis running time is %.3lf second!",(double)(end_time-start_time)/CLOCKS_PER_SEC);
  getch();
  return 0;
}
