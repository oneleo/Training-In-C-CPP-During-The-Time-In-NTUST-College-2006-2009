#include <stdio.h>
#include <stdlib.h>
#define sf 80
#define multiple 10
int main(int argc, char *argv[])
{
  printf("\n---------------∮四電子一甲-★-B9502028-★-陳敬翔〈星晴小羽〉製∮---------------\n9502028^10=\n"); 
  int mul[7]={8,2,0,2,0,5,9},muld[sf]={8,2,0,2,0,5,9},sum[sf],i,j,k,mu;
  for(k=0;k<sf;k++)
  {
    if(k>=7)
    {
      muld[k]=0;
    }
    sum[k]=0;
  }
  for(mu=1;mu<multiple;mu++)
  {
    for(i=0;i<7;i++)
    {
      for(j=0;j<sf;j++)
      {
        sum[i+j]=sum[i+j]+mul[i]*muld[j];
      }
    }
    for(k=0;k<sf;k++)
    {
      if(sum[k]>=10)
      {
        sum[k+1]=sum[k+1]+sum[k]/10;
        sum[k]=sum[k]%10;
      }
      muld[k]=sum[k];
      sum[k]=0;
    }
  }
  for(k=sf-1;k>=0;k--)
  {
    if((k!=(sf-1))&&((k+1)%10==0))
    {
      printf(" ");
    }
    printf("%d",muld[k]);
  }
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
