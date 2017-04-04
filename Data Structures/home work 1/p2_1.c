#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
  printf("\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n");
  unsigned short num;
  printf("Please enter the figure from 0 to 50000 of numbers : ");
  scanf("%d",&num); 
  srand((unsigned)time(NULL));
  for(;num>0;num--)
  {
    printf("%4d ",rand()%1001);
    if((num-1)%10==0)
    {
      printf("\n");
    }
  }
  getch();
  return 0;
}
