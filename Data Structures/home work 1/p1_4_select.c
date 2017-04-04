#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10
void swap(int *x,int *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\n");
  int i,j,data[max];
  int Start_time, End_time;
  srand((unsigned)time(NULL));
  printf("Data before selection sort:\n");
  for(i=0;i<max;i++)
  {
    data[i]=rand()%50001;
    printf("%5d ",data[i]);
    if((i+1)%13==0)
    {
      printf("\n");
    }
  }
  Start_time = clock();
  for(i=0;i<max;i++)
  {
    for(j=i+1;j<=max;j++)
    {
      if(data[i]>data[j])
      {
        swap(&data[i],&data[j]);
      }
    }
  }
  End_time = clock();
  printf("\n\nData after selection sorting:\n");
  for(i=0;i<max;i++)
  {
    printf("%5d ",data[i]);
    if((i+1)%13==0)
    {
      printf("\n");
    }
  }
  printf("\n\nThis program's running time is %.3lf second",(double)(End_time-Start_time)/CLOCKS_PER_SEC);
  getch();
  return 0;
}
