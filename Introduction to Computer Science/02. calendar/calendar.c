#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
#include <cstdlib>
#include <iostream>
#include <conio.h>
*/
/*�U�~��{���}�l*/
int main(int argc, char *argv[])
{
  
  char str1[10],str2[10];
  long days,spaces,year1,year2;
  int key,delay,mind[41],x,i,j,t1,t2,cho,valstr1,valstr2,space1,firstday,long1,long2,month1,monthdays,fun=0,
      mask[14][37]={
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
    {0,0,1,1,0,1,1,1,1,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,1,0},
    {1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,1,1,0,1,0,0,1,1,0,0},
    {0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,1,1,1},
    {0,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0},
    {0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,1,1,1},
    {0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,1,0,1,0,1,0,0},
    {0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0},
    {1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,1,0,0},
    {1,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
    {1,0,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,0,0},
    {1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0}
                   };
/*�L�X���{�������D*/
  for(i=0;i<=13;i++)
  {
    for(j=0;j<=36;j++)
    {
      if(mask[i][j]==1)
      {
        printf("��"); 
      }
      else
      {
        printf("�@");
      }
    }
    printf("\n");
  }
/*�{���}�l�A�εL���j���]��*/ 
  while(1)
  {
/*�N�U�ȲM���s*/ 
    cho=0;
	for(i=0;i<=41;i++)
	{
      mind[i]=0;
      if(i<=10)
      {
        str1[i]=0;
        str2[i]=0; 
      } 
    }
/*��ܨÿ�J���*/ 
    printf("\n---------------��|�q�l�@��-��-B9502028-��-���q���q�P���p�Сr�s��---------------\n�п�J�褸�~���C\n"); 
    scanf("%s",&str1);
    printf("�褸��%s�~�AŪ�������I\n",str1); 
    printf("--------------------\n�п�J����C\n");
    scanf("%s",&str2);
    printf("��%s����AŪ�������I\n--------------------\n",str2); 
    long1 = strlen(str1);
    long2 = strlen(str2);
/*�N��J���r�����ন��ơ]�Y��J���Ȥ�����Ƹ�ơA�i�ѤU�����P�_�L�o�^*/
    x=1;
    valstr1=0; 
    for(t1=long1-1;t1>=0;t1--)
    {
      x=x*10;
      valstr1=valstr1+((int)(str1[t1])-48)*(x/10);
    }
    x=1;
    valstr2=0; 
    for(t2=long2-1;t2>=0;t2--)
    {
      x=x*10;
      valstr2=valstr2+((int)(str2[t2])-48)*(x/10);
    }
/*�P�_��J���ȬO�_���X�k����ơ]�褸�~�����d��b(1,��)�A������d��b(1,12)�^*/ 
    for(t1=0;t1<long1;t1++)
    {
      if(((int)(str1[t1])<48)||((int)(str1[t1])>57)||(valstr1<=0))
      {
        for(t2=0;t2<long2;t2++)
        { 
          if(((int)(str2[t2])<48)||((int)(str2[t2])>57)||(valstr2>12)||(valstr2<=0))
          { 
            printf("���n�x��= =�ЧA��J���T���~��");
            break; 
          }
          else
          {
            printf("���n�x��= =�ЧA��J���T���~���I\n\n");
            break; 
          } 
        }
        fun=fun+1;
        cho=1;
        break;
      }
    }
    for(t2=0;t2<long2;t2++)
    {
      if(((int)(str2[t2])<48)||((int)(str2[t2])>57)||(valstr2>12)||(valstr2<=0))
      {
        if(cho==1)
        {
          printf("�H�Τ���I\n\n");
        }
        else
        {
          printf("\n���n�x��= =�бz��J���T������I\n\n"); 
        }
        fun=fun+1;
        cho=1;
        break;
      }
    }
/*�P�_�����A�U���N���T���ȩ�J�ܼƤ����A�_�h���s�}�l�����}*/ 
    if(cho==0)
    {
      year1=valstr1;
      month1=valstr2;
    }
    else
    {
      switch(fun)
      {
        case 1:
        case 2: 
          { 
            printf("�Y�Q�n�~��Ы��Ӣ�A���O�ЧO�x���A���Q���F�Ы��Ӣܩ�ESC���}�a��\n");
            break; 
          } 
        case 3:
        case 4: 
          { 
            printf("�u���A���A�٪��A�p�ߨS�}�}�Y��I���Ӣ��~��Ϋ������}�a�I\n");
            break; 
          }
        case 5:
        case 6:
          {
            printf("�޳ޡ㤣�n�ۭt�ڪ��A�ڤ]�O�i�H�Ϊ��n���n�A�й�ڷŬX�I= =������ܨM�w�O�_�~��a�I"); 
            break; 
          }
        case 7:
        case 8:
          {
            printf("����A���F�աI�p�ߥ椣��k�B�ͳ�I�i�H���Ӣ��~��Ϋ������}�a��\n");
            break; 
          }
        case 9:
        case 10:
          {
            printf("���A�@�Ӥp�p�g�@�A�{���Y�N�j�������I�Y�Q�n�~��ϥνЭ��s����a�I�����O��\n");
            for(delay=0;delay<500000000;delay++)
            {
              ; 
            } 
            return 0;  
          } 
        default:
          { 
            printf("�{���X�{���~�I�Ы����~��Ϋ������}�C\n");
            break; 
          }
      }
      do
      {
        key=getch();
      }
      while((key!='y')&&(key!='n')&&(key!=27));
      if((key=='n')||(key==27))
      {
        break; 
      }
      else
      { 
        continue;
      } 
    }
    year2=year1-1;
    days=year2*365+year2/4;
    firstday=days%7;
/*���o�Ӥ몺�Ѽ�*/
    if(month1<=7)
    {
      if((month1==2)&&((year1%4)==0))
	  {
	    monthdays=29;
	  }
	  else if((month1==2)&&((year1%4)!= 0))
	  {
	    monthdays=28;
	  }
	  else if((month1%2==1)&&(month1!=2))
	  {
	    monthdays=31;
	  }
	  else
	  {
	    monthdays=30;
	  }
    }
    else
    {
      if(month1%2==0)
	  {
	    monthdays=31;
	  }
	  else
	  {
	    monthdays=30;
	  }
    }
/*�p��Ӥ몺��l��*/
	if(month1<=7)
	{
	  if(month1==1)
	  {
	    spaces=firstday;
	  }
	  else if(month1==2)
	  {
	    spaces=firstday+31;
	  }
	  else if((month1==3)&&((year1%4)==0))
	  {
	    spaces=firstday+29+31;
	  }
	  else if((month1==3)&&((year1%4)!=0))
	  {
	    spaces=firstday+28+31;
	  }
	  else if(((month1%2)==0)&&((year1%4)==0)&&(month1!=3))
	  {
	    spaces=firstday+(month1-1)*30-1+month1/2;
	  }
	  else if(((month1%2)==0)&&((year1%4)!=0)&&(month1!=3))
	  {
	    spaces=firstday+(month1-1)*30-2+month1/2;
	  }
	  else if(((month1%2)==1)&&((year1%4)==0)&&(month1!=1)&&(month1!=2)&&(month1!=3))
	  {
	    spaces=firstday+(month1-1)*30-1+month1/2;
	  }
	  else if(((month1%2)==1)&&((year1%4)!=0)&&(month1!=1)&&(month1!=2)&&(month1!=3))
	  {
	    spaces=firstday+(month1-1)*30-2+month1/2;
	  }
	}
	else
	{
	  if(((month1%2)==0)&&((year1%4)==0))
	  {
	    spaces=firstday+(month1-1)*30-1+month1/2;
	  }
	  else if(((month1%2)==0)&&((year1%4)!=0))
	  {
	    spaces=firstday+(month1-1)*30-2+month1/2;
	  }
	  else if(((month1%2)==1)&&((year1%4)==0))
	  {
	    spaces=firstday+(month1-1)*30-1+month1/2+1;
	  }
	  else if(((month1%2)==1)&&((year1%4)!=0))
	  {
	    spaces=firstday+(month1-1)*30-2+month1/2+1;
	  }
	}
/*�p��Ӥ뤧�Ů��*/
	space1=spaces%7;
/*�����}�C�ƭ�*/
	j=0; 
	for(i=space1;i<=(space1+monthdays-1);i++)
	{
	  j=j+1;
	  mind[i]=j;
	}
/*�}�l�L�X���*/
  for(x=0;x<=4;x++)
  {
    if(x==0)
    {
      printf("\r�}�l�C�L�����."); 
    }
    else if(x==1)
    {
      printf("\r�}�l�C�L�����.."); 
    }
    else if(x==2)
    {
      printf("\r�}�l�C�L�����..."); 
    }
    else if(x==3) 
    {
      printf("\r�}�l�C�L�����...."); 
    }
    else
    {
      printf("\r�}�l�C�L�����....�����I"); 
    } 
    for(delay=0;delay<150000000;delay++)
    {
      ;
    }
  }
	printf("\n\n�@��@�@�@�G�@�T�@�|�@���@��\n");
	for(i=0;i<=41;i++)
	{
	  if(mind[i]==0)
	  {
	    printf("�@�@");
	  }
	  else if((i+1)%7==0)
	  {
        printf("%4d\n",mind[i]);
	  }
	  else
	  {
        printf("%4d",mind[i]);
	  }
	}
/*�O�_�n�~������}*/
    printf("\n--------------------\n�����ܥX�ӺO��^^~�Y�Q�n�~��d�ݨ�L����Ы��Ӣ�A���Q���F�Ы��ܩ�ESC���}���\n");
    do
    {
      key=getch();
    }
    while((key!='y')&&(key!='n')&&(key!=27));
    if((key=='n')||(key==27))
    {
      break; 
    }
  }
/*��ܵ������D�A�é������}*/ 
  printf("\n���{��������Y�N���}�A�����O��");
  for(delay=0;delay<500000000;delay++)
  {
    ; 
  } 
     return 0; 
}
