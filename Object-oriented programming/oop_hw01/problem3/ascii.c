#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  FILE *write_file;
  write_file=fopen("ascii.txt","wt");
  if(write_file==NULL)
  {
    printf("File can not creat!");
    getchar();
    return 0;
  }
  short ascii;
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can print all ascii codes and write to \"ascii.txt\":\nPlease enter any key to continue!\n");
  getch();
  printf("\n °U0 1 2 3 4 5 6 7 8 9 A B C D E F\n----------------------------------");
  fprintf(write_file,"\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n °U0 1 2 3 4 5 6 7 8 9 A B C D E F\n----------------------------------");
  for(ascii=0;ascii<256;ascii++)
  {
    if(ascii%16==0)
    {
      printf("\n%x°U",(ascii/16));
      fprintf(write_file,"\n%x°U",(ascii/16));
    }
    printf("%c ",ascii);
    fprintf(write_file,"%c ",ascii);
  }
  printf("\n\nFile is already write to \"ascii.txt\"!!");  
  fclose(write_file);
  getch();
  return 0;
}
