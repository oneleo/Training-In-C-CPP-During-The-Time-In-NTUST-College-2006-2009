#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
  short v,c,t,i,n,g,q,r,e,equ_det;  /*Declar nine number and an equal determine register.*/
  int start_time, end_time;         /*Declar register that record start and end running time*/
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\nThis program can calculate :\n   V I N G T\n     C I N Q\n +   C I N Q\n -----------\n T R E N T E\nPlease enter any key to start!\n");
  getch();
  printf("\nStart! Calculating...\n\n");
  start_time=clock();               /*Record star time.*/
  for(v=1;v<=9;v++)
  {
    for(c=1;c<=9;c++)
    {
      for(t=1;t<=9;t++)
      {
        for(i=0;i<=9;i++)
        {
          for(n=0;n<=9;n++)
          {
            for(g=0;g<=9;g++)
            {
              for(q=0;q<=9;q++)
              {
                for(r=0;r<=9;r++)
                {
                  for(e=0;e<=9;e++)
                  {
                    /*Determine whether there is equal toing value.If equal,then equ_det=1,else equ_det=0*/
                    if((v!=c)&&(v!=t)&&(v!=i)&&(v!=n)&&(v!=g)&&(v!=q)&&(v!=r)&&(v!=e)&&(c!=t)&&(c!=i)&&(c!=n)&&(c!=g)&&(c!=q)&&(c!=r)&&(c!=e)&&(t!=i)&&(t!=n)&&(t!=g)&&(t!=q)&&(t!=r)&&(t!=e)&&(i!=n)&&(i!=g)&&(i!=q)&&(i!=r)&&(i!=e)&&(n!=g)&&(n!=q)&&(n!=r)&&(n!=e)&&(g!=q)&&(g!=r)&&(g!=e)&&(q!=r)&&(q!=e)&&(r!=e))
                    {
                      equ_det=0;
                    }
                    else
                    {
                      equ_det=1;
                    }
                    /*calculate VINGT + CINQ + CINQ is or is'nt TRENTE*/
                    if((equ_det==0)&&((v*10000+i*1000+n*100+g*10+t)+2*(c*1000+i*100+n*10+q)==(t*100000+r*10000+e*1000+n*100+t*10+e)))
                    {
                      /*Print the result and */
                      printf("V = %d , C = %d , T = %d , I = %d , N = %d , G = %d , Q = %d , R = %d , E = %d\n  V I N G T    %d %d %d %d %d\n    C I N Q      %d %d %d %d\n+   C I N Q  +   %d %d %d %d\n-----------  -----------\nT R E N T E  %d %d %d %d %d %d",v,c,t,i,n,g,q,r,e,v,i,n,g,t,c,i,n,q,c,i,n,q,t,r,e,n,t,e);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  end_time=clock();/*Record end time.*/
  printf("\n\nEnd!\nRunning time is %.3f second",(float)(end_time-start_time)/CLOCKS_PER_SEC);/*Print difference that star time and end time,*/
  getch();
  return 0;
}
