#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
  printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n");
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
  printf("�ɮפw�g�Jstarfile.txt���I\n");
  fclose(wr_file);
  system("PAUSE");
  return 0;
}
