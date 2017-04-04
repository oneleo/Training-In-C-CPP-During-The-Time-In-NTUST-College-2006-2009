#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n");
  FILE *wr_file;
  int i;
  char name[20][10] = {{"Diana"},{"Angela"},{"Cathy"},{"Helen"},{"Georgia"},
                       {"Aileen"},{"Monica"},{"Iris"},{"Carrie"},{"Jess"},
                       {"June"},{"Donna"},{"Gill"},{"Kitty"},{"Dora"},
                       {"Moon"},{"Erica"},{"Flora"},{"Tricia"},{"Wendy"}};
  wr_file=fopen("starfile.txt","wt");
  if(wr_file==NULL)
  {
    printf("File can not creat!");
    system("PAUSE");
    return 0;
  }
  printf("File can save and load.\nStart the flie write\n");
  srand((unsigned)time(NULL));
  for(i=0;i<20;i++)
  {
    fprintf(wr_file,"%7s %3d %3d %3d %3d %3d\n",name[i],rand()%101,rand()%101,rand()%101,rand()%101,rand()%101);
  }
  printf("檔案已寫入starfile.txt內！\n");
  fclose(wr_file);
  system("PAUSE");
  return 0;
}
