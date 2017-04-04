#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 50000
void swap(int *x,int *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
void quick_sort(int data[],int low,int high)
{
  int i,j,key;
  key=data[low];
  i=low;
  j=high+1;
  do
  {
    while(data[++i]<key);
    while(data[--j]>key);
    if(i<j)
    {
      swap(&data[i],&data[j]);
    }
  }
  while(i<j);
  swap(&data[low],&data[j]);
  if((j-1)>low)
  {
    quick_sort(data,low,j-1);
  }
  if(high>(j+1))
  {
  quick_sort(data,j+1,high);
  }
}
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\n");
  int i,data[max];
  int Start_time, End_time;
  srand((unsigned)time(NULL));
  printf("Data before quick sort:\n");
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
  quick_sort(data,0,max-1);
  End_time = clock();
  printf("\n\nData after quick sort:\n");
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
