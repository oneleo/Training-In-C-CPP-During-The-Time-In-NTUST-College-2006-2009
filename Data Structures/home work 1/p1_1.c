#include<stdio.h>
#include<time.h>
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n");
  int Start_time, End_time;
  Start_time = clock();
  /* Program executing*/
  End_time = clock();
  printf("%.3f second",(float)(End_time-Start_time)/CLOCKS_PER_SEC);
  getch();
  return 0;
}
