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
  int i,data[max];
  srand((unsigned)time(NULL));
  for(i=0;i<max;i++)
  {
    data[i]=rand()%50001;
    printf("%5d ",data[i]);
  }
  printf("\n");
  quick_sort(data,0,max-1);
  for(i=0;i<max;i++)
  {
    printf("%5d ",data[i]);
  }
  getch();
  return 0;
}
