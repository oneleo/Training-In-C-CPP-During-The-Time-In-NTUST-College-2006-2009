#include <stdio.h>
#include <stdlib.h>

main()
{
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n\n讀取檔案內容：\n\n");
  typedef struct
  {
    int score[5],totle,rank;
    float average; 
    char name[8]; 
  }stu;

  FILE *rd_file,*wt_file;
  int i,j,x,temp[6],count;
  float atemp;
  char ntemp[8]; 
  stu student[20];
  
  rd_file=fopen("starfile.txt","rt");
  wt_file=fopen("finefile.txt","wt"); 
  if(rd_file==0)
  {
    printf("Can not open file for read\n");
    system("PAUSE");
    return 0;
  }
  for(i=0;i<20;i++)
  {
    count=fscanf(rd_file,"%s %d %d %d %d %d",&student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2],&student[i].score[3],&student[i].score[4]);
    printf("讀取次數=> %d次，資料內容=> %7s %3d %3d %3d %3d %3d\n",count,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2],student[i].score[3],student[i].score[4]);
  }
  for(i=0;i<20;i++)
  {
     student[i].totle=student[i].score[0]+student[i].score[1]+student[i].score[2]+student[i].score[3]+student[i].score[4]; 
     student[i].average=student[i].totle/5;
     student[i].rank=i+1; 
  }
  for(i=0;i<20-1;i++)
  {
     for(j=i+1;j<20;j++)
     {
        if(student[i].totle<student[j].totle)
        {
          for(x=0;x<7;x++)
          {
            ntemp[x]=student[i].name[x];
            student[i].name[x]=student[j].name[x];
            student[j].name[x]=ntemp[x];
          }
          temp[0]=student[i].score[0];
          student[i].score[0]=student[j].score[0];
          student[j].score[0]=temp[0];
          temp[1]=student[i].score[1];
          student[i].score[1]=student[j].score[1];
          student[j].score[1]=temp[1];
          temp[2]=student[i].score[2];
          student[i].score[2]=student[j].score[2];
          student[j].score[2]=temp[2];
          temp[3]=student[i].score[3];
          student[i].score[3]=student[j].score[3];
          student[j].score[3]=temp[3];
          temp[4]=student[i].score[4];
          student[i].score[4]=student[j].score[4];
          student[j].score[4]=temp[4];
          temp[5]=student[i].totle;
          student[i].totle=student[j].totle;
          student[j].totle=temp[5];
          atemp=student[i].average;
          student[i].average=student[j].average;
          student[j].average=atemp;
        } 
     } 
  }
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n整理完成：\n\n   姓名  s1  s2  s3  s4  s5 總分 平均 排名\n"); 
  for(i=0;i<20;i++)
  {
    printf("%7s %3d %3d %3d %3d %3d %4d %.2f %3d\n",student[i].name,student[i].score[0],student[i].score[1],student[i].score[2],student[i].score[3],student[i].score[4],student[i].totle,student[i].average,student[i].rank);
  }
  fprintf(wt_file,"---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n\n   姓名  s1  s2  s3  s4  s5 總分 平均 排名\n");
  for(i=0;i<20;i++)
  {
    fprintf(wt_file,"%7s %3d %3d %3d %3d %3d %4d %.2f %3d\n",student[i].name,student[i].score[0],student[i].score[1],student[i].score[2],student[i].score[3],student[i].score[4],student[i].totle,student[i].average,student[i].rank);
  }
  printf("檔案已寫入finefile.txt內！\n");
  fclose(rd_file);
  fclose(wt_file);
  system("PAUSE");
  return 0;
}
