#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  int i,j,x=1,s;
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\nThis program finding the Perfect Number !\nAnd you can put \"ctrl+c\" to stop this program !\n現在做到=>");
  for(i=1;i<=1000000000;i++)
  {
    gotoxy(10,6);
    printf("%d",i);
    s=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        s=s+j;
      }
    }
    if(s==i)
    {
      gotoxy(0,x+6);
      printf("%dth Perfect number is %d\n",x,i);
      x++;
    }
  }
  system("PAUSE");	
  return 0;
}
  gotoxy(int x, int y) 
  { 
    COORD coord = {x, y}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
  }
