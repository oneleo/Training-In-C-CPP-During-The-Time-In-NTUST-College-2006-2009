/* �{���d��: Ch9-3-2.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN      20           /* �̤j�r����� */
/* ���: �ֳt�ƧǪk�����j��� */
void q_sort(char *data, int begin, int end) {
   char partition;                /* ���Ϊ��r�� */
   char temp;
   int left, right, k;
   if ( begin < end ) {/* ���j�������, �O�_�~����� */
      left = begin;               /* ���Ϊ��̥����� */
      right = end + 1;            /* ���Ϊ��̥k���� */
      partition = data[left];     /* ���Ĥ@�Ӥ��� */
      do {  /* �D�j����O�q��Ӥ�V��M�洫���� */ 
         do {                     /* �q�����k�� */
            left++;
         } while( data[left] < partition );
         do {                     /* �q�k������ */
            right--;
         } while( data[right] > partition );
         if ( left < right ) {
            temp = data[left];    /* �洫��� */
            data[left] = data[right];
            data[right] = temp;
         }
      } while( left < right );
      temp = data[begin];          /* �洫��� */
      data[begin] = data[right];
      data[right] = temp;
      printf("��X���G: ");  /* ��ܳB�z�����r�� */
      for ( k = begin; k <= end; k++)
         printf("%c", data[k]);
      printf("\n");               /* ���� */
      q_sort(data, begin,right-1);/* �ֳt�Ƨǻ��j�I�s */
      q_sort(data, right+1, end); /* �ֳt�Ƨǻ��j�I�s */
   }
}
/* ���: �ֳt�ƧǪk */
void quickSort(char *data, int count) {
   q_sort(data, 0, count-1);
}
/* �D�{�� */ 
int main() {
   char data[MAX_LEN];            /* �r��}�C */
   int len;                       /* �r����� */
   printf("��J���ƧǪ��r�� ==> ");
   gets(data);                    /* Ū���r�� */
   len = strlen(data);            /* �p��r����� */
   quickSort(data, len);          /* ����ֳt�ƧǪk */
   /* ��ܱƧǫ�r�� */
   printf("\n��X�Ƨǵ��G: [%s]\n", data);
   system("PAUSE");
   return 0; 
}
