#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n");
  FILE *wr_file;
  wr_file=fopen("number.txt","wt");
  if(wr_file==NULL)
  {
    printf("File can not creat!");
    getch();
    return 0;
  }
  printf("File can save and load.\nStart the flie write\n");
  srand((unsigned)time(NULL));
  fprintf(wr_file,"a=%3d b=%3d c=%3d\n",rand()%101,rand()%101,rand()%101);
  printf("File is already writed to number.txt!\n");
  fclose(wr_file);
  getch();
  return 0;
}
