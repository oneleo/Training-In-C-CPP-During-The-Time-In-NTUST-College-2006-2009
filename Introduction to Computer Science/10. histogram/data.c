#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *wr_file;
  short i;
  printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n");
  wr_file=fopen("data.txt","wt");
  printf("���{���|�s�@99��1��99�H���Ʀr�I\n");
  system("PAUSE");
  if(wr_file==NULL)
  {
    printf("�ɮ׻s�@�ɵo�Ϳ��~�I\n");
    system("PAUSE");
    return 0; 
  }
  srand((unsigned)time(NULL));
  for(i=1;i<=99;i++)
  { 
    fprintf(wr_file,"%02d\n",rand()%100);
  }
  printf("99��1��99�H���Ʀr�w�g�Jdata.txt���I\n");
  fclose(wr_file); 
  system("PAUSE");	
  return 0;
}
