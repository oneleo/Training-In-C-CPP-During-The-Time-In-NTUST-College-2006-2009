#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
      int i,j,z;
    printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n");
    for(i=1;i<=9;i++)
    {
        for(z=9;z>=i;z--)
        {
            printf(" "); 
        } 
        for(j=1;j<=(i*2-1);j++)
        {
            if((j-i)>0)
            {
                printf("%d",2*i-j); 
            }
            else
            {
                printf("%d",j);
            } 
        } 
        printf("\n"); 
    } 

  system("PAUSE");	
  return 0;
}
