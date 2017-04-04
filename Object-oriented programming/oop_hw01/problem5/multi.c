#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program that keeps printing the multiples of the integer 2 :\n\n");
  short x=2;
  unsigned int delay;
  long tem=1;
  while(1)
  {
    printf("%9d",x*tem);
    tem=tem*x;
    for(delay=0;delay<=10000000;delay++)
    {
      ;
    }
  }
  getch();
  return 0;
}
