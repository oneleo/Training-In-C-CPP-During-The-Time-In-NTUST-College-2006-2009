/*********************************************************/
/*�i�{���W�١j: 8_m_sort.c                               */
/*�i�{���\��j: 2-���X�ֱƧǪk�Ы��u��Ȥ�����v�Ƨ�     */
/*       ��J : �@�ե��g�ƧǪ�������                   */
/*       ��X : �C�@�^�X�ƧǤ����G                       */
/*�i��Ƶ��c�j: �}�C���c                                 */
/*********************************************************/
/*�i�ܼƦW�٤Υγ~�j                                     */
/*        d[] : �x�s�ݱƧǪ���ȥH�αƧǹL�{���C�@�^�X�� */
/*              ���G                                     */
/*     Size,n : �}�C d ���j�p(�����Ӽ�)                  */
/*********************************************************/
#include <stdio.h>
#define Size 8
/*------------------------------------------------*/
/*   �C�L�Ƨǫe����ȸ��(�}�C d �@�� n �Ӥ���)   */
/*------------------------------------------------*/
void print_org_data(const int d[], int n) 
{
   int i;

   printf("�}�C����   d[0] [1] [2] [3] [4] [5] [6] [7] \n");
   printf("----------------------------------------------\n");
   printf("<�Ƨǫe> ==> ");
   for(i = 0; i < n; i++){
      printf("%2d  ",d[i]);
   }
   printf("\n----------------------------------------------\n");
}

/*---------------------------------------------*/
/*   �L�X�}�C d �����e(�q d[low] �� d[high])   */ 
/*---------------------------------------------*/
void print_array_data(const int d[], int low, int high)
{
   int i;

   for(i = low; i <= high; i++){
      printf("%2d  ",d[i]);
   }
   printf("\n");
}

/*----------------------*/
/*   �p�� i �� j ����   */
/*----------------------*/
int my_exp(int i, int j)
{
   int k = 1;

   if(j == 0)
      return 1;
   while(j >= 1){
      k = k * i;
      j --;
   }
   return k;
}

/*--------------------------------*/
/*   2-���X��(���u��Ȥ�����v)   */
/*--------------------------------*/
void merge_it(int d[], int high, int i, int *j)
{
   int y[Size+1], z[Size+1];
   int temp, iy, iz, jy, jz;
 
   temp = *j;
   iy = 0;
   while(iy < i && temp <= high)
      y[++iy] = d[temp++];

   iz = 0;
   while(iz < i && temp <= high)
     z[++iz] = d[temp++];

   temp = *j;
   jy = 1;
   jz = 1;
   while(jy <= iy || jz <= iz){
      if(jy <= iy && jz <= iz)
         d[temp++] = (y[jy] < z[jz]) ? y[jy++] : z[jz++];

      if(jy > iy){
         while(jz <= iz)
            d[temp++] = z[jz++];
         break;
      } 
      if(jz > iz){
         while(jy <= iy)
            d[temp++] = y[jy++];
         break;
      }         
   }
   *j = temp;  
}

/*-------------------------------*/
/*   2-���X�ֱƧǪk              */
/*     1.�}�C d �@�� n �Ӥ���    */
/*     2.���u��Ȥ�����v�Ƨ�    */
/*-------------------------------*/
void merge_sort_ascending(int d[], int low, int high)
{
   int i, j, k, m, n, step=0;

   m = 0;
   n = high - low + 1;
   k = my_exp(2, m);
   while(k < n){
      m++;
      k = my_exp(2, m);
   }
   for(i = 1; i <= m; i++){
      j = low;
      while(j <= high){
         k=my_exp(2, i-1);
         merge_it(d, high, k, &j);
      }
      printf(" ��%d�^�X ==> ",++step);
      print_array_data(d, low, high);
   }
}

int main(void)
{
   int i,d[Size];
  srand((unsigned)time(NULL));
  printf("Data before insertion sort:\n");
  for(i=0;i<Size;i++)
  {
    d[i]=rand()%50001;
    printf("%5d ",d[i]);
    if((i+1)%13==0)
    {
      printf("\n");
    }
  }
printf("\n");
   print_org_data(d, Size); /* �C�L�Ƨǫe����ȸ�� */

   /* �N�}�C d �̪� d[0] �� d[Size-1] ����ȫ��u��Ȥ�����v�Ƨ� */
   merge_sort_ascending(d,0,Size-1); 
   getch();
   return 0;
} 
