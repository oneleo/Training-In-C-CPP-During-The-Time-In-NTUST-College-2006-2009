#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
#include <cstdlib>
#include <iostream>
#include <conio.h>
*/
/*¸U¦~¾äµ{¦¡¶}©l*/
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
/*¦L¥X¥»µ{¦¡ªº¼ÐÃD*/
  for(i=0;i<=13;i++)
  {
    for(j=0;j<=36;j++)
    {
      if(mask[i][j]==1)
      {
        printf("¡¸"); 
      }
      else
      {
        printf("¡@");
      }
    }
    printf("\n");
  }
/*µ{¦¡¶}©l¡A¥ÎµL­­°j’µ¥]¦í*/ 
  while(1)
  {
/*±N¦U­È²M¬°¹s*/ 
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
/*Åã¥Ü¨Ã¿é¤J¸ê®Æ*/ 
    printf("\n---------------¡í¥|¹q¤l¤@¥Ò-¡¹-B9502028-¡¹-³¯·qµ¾¡q¬P´¸¤p¦Ð¡r»s¡í---------------\n½Ð¿é¤J¦è¤¸¦~¥÷¡C\n"); 
    scanf("%s",&str1);
    printf("¦è¤¸²Ä%s¦~¡AÅª¨ú§¹²¦¡I\n",str1); 
    printf("--------------------\n½Ð¿é¤J¤ë¥÷¡C\n");
    scanf("%s",&str2);
    printf("²Ä%s¤ë¥÷¡AÅª¨ú§¹²¦¡I\n--------------------\n",str2); 
    long1 = strlen(str1);
    long2 = strlen(str2);
/*±N¿é¤Jªº¦r¦ê¸ê®ÆÂà¦¨¾ã¼Æ¡]­Y¿é¤Jªº­È¤£¬°¾ã¼Æ¸ê®Æ¡A¥i¥Ñ¤U­±ªº§PÂ_¹LÂo¡^*/
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
/*§PÂ_¿é¤Jªº­È¬O§_¬°¦Xªkªº¸ê®Æ¡]¦è¤¸¦~¥÷ªº½d³ò¦b(1,¡Û)¡A¤ë¥÷ªº½d³ò¦b(1,12)¡^*/ 
    for(t1=0;t1<long1;t1++)
    {
      if(((int)(str1[t1])<48)||((int)(str1[t1])>57)||(valstr1<=0))
      {
        for(t2=0;t2<long2;t2++)
        { 
          if(((int)(str2[t2])<48)||((int)(str2[t2])>57)||(valstr2>12)||(valstr2<=0))
          { 
            printf("¤£­n¾x³õ= =½Ð§A¿é¤J¥¿½Tªº¦~¥÷");
            break; 
          }
          else
          {
            printf("¤£­n¾x³õ= =½Ð§A¿é¤J¥¿½Tªº¦~¥÷¡I\n\n");
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
          printf("¥H¤Î¤ë¥÷¡I\n\n");
        }
        else
        {
          printf("\n¤£­n¾x³õ= =½Ð±z¿é¤J¥¿½Tªº¤ë¥÷¡I\n\n"); 
        }
        fun=fun+1;
        cho=1;
        break;
      }
    }
/*§PÂ_µ²§ô¡A¤U­±±N¥¿½Tªº­È©ñ¤JÅÜ¼Æ¤§¤¤¡A§_«h­«·s¶}©l©ÎÂ÷¶}*/ 
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
            printf("­Y·Q­nÄ~Äò½Ð«ö­Ó¢ç¡A¦ý¬O½Ð§O¾x³õ¡A¤£·Qª±¤F½Ð«ö­Ó¢Ü©ÎESCÂ÷¶}§a¡ã\n");
            break; 
          } 
        case 3:
        case 4: 
          { 
            printf("¯u¦³§Aªº¡AÁÙª±¡A¤p¤ß¨S¿}¿}¦Y³á¡I«ö­Ó¢çÄ~Äò©Î«ö¢ÜÂ÷¶}§a¡I\n");
            break; 
          }
        case 5:
        case 6:
          {
            printf("³Þ³Þ¡ã¤£­n´Û­t§Úªü¡A§Ú¤]¬O¥i¥H¥Îªº¦n¤£¦n¡A½Ð¹ï§Ú·Å¬XÂI= =«ö¢ç«ö¢Ü¨M©w¬O§_Ä~Äò§a¡I"); 
            break; 
          }
        case 7:
        case 8:
          {
            printf("¤£¸ò§Aª±¤F°Õ¡I¤p¤ß¥æ¤£¨ì¤kªB¤Í³á¡I¥i¥H«ö­Ó¢çÄ~Äò©Î«ö¢ÜÂ÷¶}§a¡ã\n");
            break; 
          }
        case 9:
        case 10:
          {
            printf("µ¹§A¤@­Ó¤p¤pÃg»@¡Aµ{¦¡§Y±N±j¨îÃö³¬¡I­Y·Q­nÄ~Äò¨Ï¥Î½Ð­«·s°õ¦æ§a¡I«ô«ôºO¡ã\n");
            for(delay=0;delay<500000000;delay++)
            {
              ; 
            } 
            return 0;  
          } 
        default:
          { 
            printf("µ{¦¡¥X²{¿ù»~¡I½Ð«ö¢çÄ~Äò©Î«ö¢ÜÂ÷¶}¡C\n");
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
/*¨ú±o¸Ó¤ëªº¤Ñ¼Æ*/
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
/*­pºâ¸Ó¤ëªº®æ¤l¼Æ*/
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
/*­pºâ¸Ó¤ë¤§ªÅ®æ¼Æ*/
	space1=spaces%7;
/*µ¹¤©°}¦C¼Æ­È*/
	j=0; 
	for(i=space1;i<=(space1+monthdays-1);i++)
	{
	  j=j+1;
	  mind[i]=j;
	}
/*¶}©l¦L¥X¤é¾ä*/
  for(x=0;x<=4;x++)
  {
    if(x==0)
    {
      printf("\r¶}©l¦C¦L·í¤ë¤ë¾ä."); 
    }
    else if(x==1)
    {
      printf("\r¶}©l¦C¦L·í¤ë¤ë¾ä.."); 
    }
    else if(x==2)
    {
      printf("\r¶}©l¦C¦L·í¤ë¤ë¾ä..."); 
    }
    else if(x==3) 
    {
      printf("\r¶}©l¦C¦L·í¤ë¤ë¾ä...."); 
    }
    else
    {
      printf("\r¶}©l¦C¦L·í¤ë¤ë¾ä....§¹¦¨¡I"); 
    } 
    for(delay=0;delay<150000000;delay++)
    {
      ;
    }
  }
	printf("\n\n¡@¤é¡@¤@¡@¤G¡@¤T¡@¥|¡@¤­¡@¤»\n");
	for(i=0;i<=41;i++)
	{
	  if(mind[i]==0)
	  {
	    printf("¡@¡@");
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
/*¬O§_­nÄ~Äò©ÎÂ÷¶}*/
    printf("\n--------------------\n¤ë¾äÅã¥Ü¥X¨ÓºO¡ã^^~­Y·Q­nÄ~Äò¬d¬Ý¨ä¥L¤ë¥÷½Ð«ö­Ó¢ç¡A¤£·Qª±¤F½Ð«ö¢Ü©ÎESCÂ÷¶}³é¡ã\n");
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
/*Åã¥Üµ²§ô¼ÐÃD¡A¨Ã©µ¿ðÂ÷¶}*/ 
  printf("\n¡°µ{¦¡µ²§ô¡ã§Y±NÂ÷¶}¡A«ô«ôºO¡ã");
  for(delay=0;delay<500000000;delay++)
  {
    ; 
  } 
     return 0; 
}
