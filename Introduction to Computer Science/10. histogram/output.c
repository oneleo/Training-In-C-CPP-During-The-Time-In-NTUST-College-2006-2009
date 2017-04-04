#include<stdio.h>
#include<stdlib.h>
main()
{
  char numcha[99][2];
  short i,num[99];
  int nc[10]={0};
  FILE *re_file,*wr_file;
  re_file=fopen("data.txt","rt");
  wr_file=fopen("histogram.txt","wt"); 
  if(re_file==0)
  {
    printf("檔案開啟時發生錯誤！\n");
    system("PAUSE");
    return 0;
  }
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n");
  fprintf(wr_file,"\n∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮\n\n");
  printf("本程式為開啟相對路徑data.txt檔案後，計數其內容各組數目之個數！\n檔案已讀入，以下是檔案內容：\n");
  fprintf(wr_file,"讀入之檔案內容：\n"); 
  for(i=0;i<99;i++)
  {
    fscanf(re_file,"%s",numcha[i]);
    num[i]=atoi(numcha[i]);
    nc[num[i]/10]++;
    if(i%10==0&&i!=0)
    {
      printf("\n");
      fprintf(wr_file,"\n"); 
    }
    fprintf(wr_file,"%02d ",num[i]); 
    printf("%02d ",num[i]);
  }
  printf("\n--------------------------------------------------\n開始計算各數目之個數...其計算結果會寫入histogram.txt內，以下是寫入內容：\n");
  fprintf(wr_file,"\n--------------------------------------------------\n計算之結果：\n"); 
  for(i=0;i<10;i++)
  {
    fprintf(wr_file,"從%d～%d的數目共有%d個！\n",10*i,10*i+9,nc[i]); 
    printf("從%d～%d的數目共有%d個！\n",10*i,10*i+9,nc[i]); 
  } 
  fclose(re_file);
  fclose(wr_file); 
  system("PAUSE");
  return 0;
}
