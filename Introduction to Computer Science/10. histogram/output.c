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
    printf("�ɮ׶}�Үɵo�Ϳ��~�I\n");
    system("PAUSE");
    return 0;
  }
  printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n");
  fprintf(wr_file,"\n��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��\n\n");
  printf("���{�����}�Ҭ۹���|data.txt�ɮ׫�A�p�ƨ䤺�e�U�ռƥؤ��ӼơI\n�ɮפwŪ�J�A�H�U�O�ɮפ��e�G\n");
  fprintf(wr_file,"Ū�J���ɮפ��e�G\n"); 
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
  printf("\n--------------------------------------------------\n�}�l�p��U�ƥؤ��Ӽ�...��p�⵲�G�|�g�Jhistogram.txt���A�H�U�O�g�J���e�G\n");
  fprintf(wr_file,"\n--------------------------------------------------\n�p�⤧���G�G\n"); 
  for(i=0;i<10;i++)
  {
    fprintf(wr_file,"�q%d��%d���ƥئ@��%d�ӡI\n",10*i,10*i+9,nc[i]); 
    printf("�q%d��%d���ƥئ@��%d�ӡI\n",10*i,10*i+9,nc[i]); 
  } 
  fclose(re_file);
  fclose(wr_file); 
  system("PAUSE");
  return 0;
}
