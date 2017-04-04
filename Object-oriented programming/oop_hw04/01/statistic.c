#include<stdio.h>
#include<stdlib.h>
int my_atoi(char* cha)      /*Creat a function of string into integer.*/
{                           /*Using transforming charator "option "number"" of "argv".*/
  short i;
  for(i=0;i<10;i++)
  {
    if((*(cha+i)>='0')&&(*(cha+i)<='9'))
    {
      return (int)*(cha+i)-48;
    }
  }
}
int main(int argc, char* argv[])        /*This program need use "argc" and "argv" to decide to do which options.*/
{
  printf("\n---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n");
  FILE *rd_file,*wt_file;               /*Creat two file "rd_file" to do read and "wt_file" to do write.*/
  int number[3],argc_for;               /*"Number[0]" is a, "number[1]" is b, "number[2]" is c, "argc_for" is used when print variable of "argc" and "argv".*/
  char text_a[3],text_b[3],text_c[3];   /*Name of a, b, and c.*/
  printf("Region of test:\nargc=%d\n\nargv:",argc);
  for(argc_for=0;argc_for<argc;argc_for++)  /*Print variable of argc and argv.*/
  {
    printf("\n%d:\n%s",argc_for,argv[argc_for]);
  }
  printf("\n--------------------Information of data--------------------\n");
  if(argc>=2)                             /*If there is a value, argc is not zero. Write corresponding value "argv" of "argc".*/
  {
    rd_file=fopen(argv[1],"rt");
  }
  else
  {
    printf("Can not open file to write!\n");
    getch();
    return 0;
  }
  wt_file=fopen("result.txt","wt");
  if((rd_file==NULL)||(wt_file==NULL))    /*If file can not get, end program.*/
  {
    printf("Can not open file to read or write!\n");
    getch();
    return 0;
  }
  fscanf(rd_file,"%s %d %s %d %s %d",&text_a,&number[0],&text_b,&number[1],&text_c,&number[2]);         /*Get values of a, b and c.*/
  printf("Data are : %s%3d %s%3d %s%3d\n",text_a,number[0],text_b,number[1],text_c,number[2]);        /*Print values of a, b and c.*/
  find_value(&number);                    /*Small sortting function "find_value".*/
  printf("Average is %.3f\nMaximum is %3d\nMinimum is %3d\n--------------------Wrote of data--------------------\n",(float)(number[0]+number[1]+number[2])/3,number[2],number[0]);
  printf("---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n");           /*Print information of a, b and c.*/
  fprintf(wt_file,"---------------¡íThis program is-¡¹-B9502028-¡¹-³¯·qµ¾-create¡í---------------\n");
  if(argc>=4)                            /*If there is a value, argc is not zero.*/
  {                                      /*At this time, we can select option 1, 2 or 3.*/
    if(my_atoi(argv[3])==1)
    {
        fprintf(wt_file,"Average is %.3f",(float)(number[0]+number[1]+number[2])/3);
        printf("Average is %.3f",(float)(number[0]+number[1]+number[2])/3);
    }
    if(my_atoi(argv[3])==2)
    {
        fprintf(wt_file,"Maximum is %3d",number[2]);
        printf("Maximum is %3d",number[2]);
    }
    if(my_atoi(argv[3])==3)
    {
        fprintf(wt_file,"Minimum is %3d",number[0]);
        printf("Minimum is %3d",number[0]);
    }
  }
  printf("\n--------------------Wrote end--------------------\nFile is already wrote to result.txt!\n");
  fclose(rd_file);                    /*Program end, file close.*/
  fclose(wt_file);
  getch();
  return 0;
}
