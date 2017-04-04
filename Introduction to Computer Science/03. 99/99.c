#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j;
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n"); 
  for(i=1;i<=9;i++)
  {
      for(j=1;j<=9;j++)
      {
          printf("%dx%d=%2d ",i,j,i*j) ; 
      } 
      printf("\n"); 
  } 
  system("PAUSE");	
  return 0;
}
