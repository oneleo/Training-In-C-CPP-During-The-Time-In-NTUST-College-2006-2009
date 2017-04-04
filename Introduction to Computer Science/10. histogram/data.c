#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *wr_file;
  short i;
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n");
  wr_file=fopen("data.txt","wt");
  printf("本程式會製作99組1～99隨機數字！\n");
  system("PAUSE");
  if(wr_file==NULL)
  {
    printf("檔案製作時發生錯誤！\n");
    system("PAUSE");
    return 0; 
  }
  srand((unsigned)time(NULL));
  for(i=1;i<=99;i++)
  { 
    fprintf(wr_file,"%02d\n",rand()%100);
  }
  printf("99組1～99隨機數字已寫入data.txt內！\n");
  fclose(wr_file); 
  system("PAUSE");	
  return 0;
}
