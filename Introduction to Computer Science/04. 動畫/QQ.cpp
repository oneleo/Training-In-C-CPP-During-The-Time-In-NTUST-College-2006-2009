#include <windows.h> 
#include <stdio.h>
main()
{
    
      int i;
      for(i=1;i<=23;i++)
    {
      gotoxy(0,i);
      printf("123654");   
      delay(10000);
      gotoxy(0,i);
      printf("      ");  
    }
    gotoxy(0,i);
    printf("123654"); 
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
