#include <windows.h> 
#include <stdio.h>
main()
{
    
      int i,j;
      for(i=1;i<=23000;i++)
    {
      gotoxy(0,0);
      printf("%5d",i);   
      delay(100);
      gotoxy(0,0);
      printf("     ");  
    }
    gotoxy(0,0);
    for(j=1;j<=30;j++)
    {
    printf("B9502028 is big hand\n"); 
    }
    getch( );
}

 
delay(int z)  
{
int x,y,u;
for(x=1;x<=z;x++)
  {
   for(y=1;y<=z;y++)
    {            
     u=u;
    }    
   }
return;
}            
    
gotoxy(int x, int y) 
{ 
   COORD coord = {x, y}; 
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
} 
