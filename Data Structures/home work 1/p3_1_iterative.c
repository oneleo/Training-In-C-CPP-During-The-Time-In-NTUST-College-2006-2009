#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double fibonacci(short n)
{
  double fn,fn_1,fn_2;   /*Define Fn, F(n-1) and F(n-2). I control the times.*/
  short i;
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
    /*return fibonacci(n-1)+fibonacci(n-2);*/  /*Previous recursive.*/
    fn_1=1;
    fn_2=0;
    for(i=2;i<=n;i++)   /*Because F(0)=0, F(1)=1, it start to every times add 1 from 2, until i get the number the we enter.*/
    {
      fn=fn_1+fn_2;     /*F(n)=F(n-1)+F(n-2). (At first, let F(2)=F(1)+F(0)=1)*/
      fn_2=fn_1;        /*Then use F(n-2) reserved F(n-1). (F(0)<=F(1)=1 F(1)=<F(2)=1)*/
      fn_1=fn;          /*And use F(n-1) reserved F(n), because this n will become n+1. F(n-1)=>Fn, F(n-2)=>F(n-1)*/
      /*printf("\nFn =%3d  F(n-1) =%3d  F(n-2) =%3d\n",fn,fn_1,fn_2);*/  /*Observe the every results for Fn, F(n-1) and F(n-2).*/
    }
    return fn;
  }
}
int main(void)
{
  int n,start_time,end_time;
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\nThis program can calculate the function:\n\nFn=F(n-1)+F(n-2) n°Ÿ2\nbut F0=0, F1=1\n\nPlease enter the n to start: ");
  scanf("%d",&n);
  printf("Begin to calculate!\n\nThe result is... ");
  start_time=clock();
  printf("%.lf",fibonacci(n));
  end_time=clock();
  printf("\n\nFinish calculating!\nThis running time is %.3lf second!",(double)(end_time-start_time)/CLOCKS_PER_SEC);
  getch();
  return 0;
}
