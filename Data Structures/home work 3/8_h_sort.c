/*********************************************************/
/*�i�{���W�١j: 8_h_sort.c                               */
/*�i�{���\��j: ��n�ƧǪk�Ы��u��Ȥ����W�v�Ƨ�         */
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

void print_org_data(const int d[], int n);
void print_array_data(const int d[], int low, int high);
void swap(int *x, int *y);
void move_up(int d[], int n);
void move_down(int d[], int n);
int output_and_delete_root(int d[], int *n);
void heap_sort_descending(int d[], int low, int high);

/*------------------------------------------------*/
/*   �C�L�Ƨǫe����ȸ��(�}�C d �@�� n �Ӥ���)   */
/*------------------------------------------------*/
void print_org_data(const int d[], int n) 
{
   int i;

   clrscr( );
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

/*---------------------------*/
/*   �N x,y ���ܼƤ��Ȥ���   */
/*---------------------------*/
void swap(int *x, int *y)
{
   int z = *x;

   *x = *y;
   *y = z;
}

/*--------------------------------------------------*/
/*   �q d[n] �`�I����ڰl�ܡA�N�G����վ㬰��n��   */
/*--------------------------------------------------*/
void move_up(int d[], int n)
{
   int temp;  

   temp = d[n];
   while(n/2 > 0 && temp > d[n/2]){
      d[n] = d[n/2];
      n /= 2;
   }
   d[n] = temp;
}

/*------------------------------------------*/
/*   �q��� d[1] �}�l�N�G����վ㬰��n��   */
/*------------------------------------------*/
void move_down(int d[], int n)
{
   int i, left;
   int temp;

   temp = d[1];
   i = 1;
   while(i <= n/2){
      left = 2 * i;
      if(left < n && d[left] < d[left+1])
         left++;
      if(temp < d[left]){
         d[i] = d[left];
         i = left;
      }
      else break;
   }
   d[i] = temp;
}

/*------------------------------------------------------------*/
/* ��X��ڤ��ȡA�N�̫�@�Ӹ`�I����ȷh���ڡA�A�վ㬰��n�� */
/*------------------------------------------------------------*/
int output_and_delete_root(int d[], int *n)
{
   int root;  

   root = d[1];
   swap(&d[1], &d[*n]);
   *n = *n-1;
   move_down(d,*n);
   return root;
}

/*-------------------------------*/
/*   ��n�ƧǪk                  */
/*     1.�}�C d �@�� n �Ӥ���    */
/*     2.���u��Ȥ����W�v�Ƨ�    */
/*-------------------------------*/
void heap_sort_descending(int d[], int low, int high)
{
   int i, j, n, y[Size+1], step;

   step = 0;
   /*---------------------------------------------------*/
   /*   �سy����G������x�s�b�}�C y[] ����             */
   /*   (����K�_�� y[0] �O�d���ΡA�H y[1] ����ڦ�m   */
   /*---------------------------------------------------*/
   n = 0;
   for(j=low; j <= high; j++){ 
      y[++n] = d[j];
      move_up(y,n);      
   }
   /*--------------*/
   /*   ��n�Ƨ�   */
   /*--------------*/
   for(i=high; i >= low; i--){
      d[i] = output_and_delete_root(y,&n); 
      printf(" ��%d�^�X ==> ",++step);              
      print_array_data(d, low, high);
      printf(" ==> ��X %d\n",d[i]); 
   }
}

void main(void)
{
   int d[Size]={83,66,55,21,88,18,88,99};

   print_org_data(d, Size); /* �C�L�Ƨǫe����ȸ�� */

   /* �N�}�C d �̪� d[0] �� d[Size-1] ����ȫ��u��Ȥ�����v�Ƨ� */
   heap_sort_descending(d,0,Size-1);
}