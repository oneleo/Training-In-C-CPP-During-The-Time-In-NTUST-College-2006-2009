/* �{���d��: Ch9-4-3.c */
#include <stdio.h>
#include <stdlib.h>
/* ���: �إ߰�n */ 
void siftDown(int *heap, int root, int len) {
   int done;                      /* �O�_�i���� */
   int j, temp;
   j = 2 * root;                  /* �l�`�I���� */
   temp = heap[root];             /* ��n���ڸ`�I�� */
   done = 0;
   while ( j <= len && !done ) {  /* �D�j�� */
      if ( j < len )              /* ��̤j�l�`�I */
         if ( heap[j] < heap[j+1] )
            j++;                  /* �U�@�`�I */
         if ( temp >= heap[j] )   /* ����𪺮ڸ`�I */
            done = 1;             /* ���� */
         else {
            heap[j/2] = heap[j];  /* ���`�I�O�ثe�`�I */
            j = 2 * j;            /* ��l�`�I */
         }
   }
   heap[j/2] = temp;              /* ���`�I���ڸ`�I�� */
}
/* ���: ��n�ƧǪk */ 
void heapSort(int *heap, int len) {
   int i,j,temp;
   /*�N�G�����ন��n*/
   for ( i = ( len / 2 ); i >= 1; i-- )
      siftDown(heap, i, len);
   printf("\n��n�����e: ");
   for ( j = 1; j < 10; j++ )     /* ��ܰ�n */
      printf("[%d]", heap[j]);   
   /* ��n�ƧǪk���D�j�� */ 
   for ( i = len - 1; i >= 1; i-- ) {
      temp = heap[i+1];           /* �洫�̫ᤸ�� */
      heap[i+1] = heap[1];
      heap[1] = temp;
      siftDown(heap, 1, i);       /* ���ذ�n */
      printf("\n���ت���n: ");
      for ( j = 1; j < 10; j++ )  /* ��ܳB�z���e */
         printf("[%d]", heap[j]);
   }
}
/* �D�{�� */ 
int main() {
   /* �G���𪺸`�I��� */
   int data[10] = { 0, 5, 6, 4, 8, 2, 3, 7, 1, 9 };
   int i;
   printf("�G���𤺮e: ");
   for ( i = 1; i < 10; i++ )     /* ��ܤG���𤺮e */
      printf("[%d]", data[i]);
   heapSort(data, 9);             /* ��n�ƧǪk */
   printf("\n\n��X�Ƨǵ��G: ");
   for ( i = 1; i < 10; i++ )     /* ��ܱƧǵ��G */
      printf("[%d]", data[i]);
   printf("\n");
   system("PAUSE");
   return 0; 
}
