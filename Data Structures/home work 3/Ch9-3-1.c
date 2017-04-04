/* �{���d��: Ch9-3-1.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN      20            /* �̤j�r����� */
/* ���: �X�ְ}�C */ 
void merge(char *data,int start,int mid,int end) {
    int left = start;              /* ���b�������� */ 
    int right = mid + 1;           /* �k�b�������� */ 
    int i; 
    char *finalData; 
    /* �t�m�X�ְϬq�һݪ��O����Ŷ� */ 
    finalData = (char*) malloc(sizeof(char)*(end-start+2)); 
    /* �X�֥��k��b�����Ϭq���j�� */
    for (i = 0; i < (end-start+1); i++) {
        if ( left > mid ) { 
            finalData[i] = data[right];
            right++; 
        } else if ( right > end ) { 
            finalData[i] = data[left];
            left++; 
        } else if (data[left] < data[right]) {
            finalData[i] = data[left];
            left++; 
        } else { 
            finalData[i] = data[right];
            right++; 
        } 
    }
    finalData[i] = '\0';   /* �r�굲�� */ 
    /* �ƻs���l�}�C���Ϭq */ 
    for (i = 0; i < (end - start + 1); i++) { 
        data[start + i] = finalData[i]; 
    } /* ��ܦX�᪺֫�r�� */
    printf("%d-%d-%d: [%s]\n",start,mid,end,finalData);
}
/* ���: �X�ֱƧǪk */ 
void mergeSort(char *data, int start, int end) { 
    int mid; 
    if ( end <= start ) return;    /* �פ���� */ 
    mid = (start + end) / 2;       /* �������� */ 
    mergeSort(data, start, mid);   /* ���j�Ƨǥ��b�� */
    mergeSort(data, mid+1, end);   /* ���j�Ƨǥk�b�� */
    merge(data, start, mid, end);  /* �X�ְ}�C */    
}
/* �D�{�� */ 
int main() {
   char data[MAX_LEN];            /* �r��}�C */
   int len;                       /* �r����� */
   printf("��J���ƧǪ��r�� ==> ");
   gets(data);                    /* Ū���r�� */
   len = strlen(data);            /* �p��r����� */
   mergeSort(data, 0, len-1);     /* ����X�ֱƧǪk */
   /* ��ܱƧǫ�r�� */
   printf("\n��X�Ƨǵ��G: [%s]\n", data);
   system("PAUSE");
   return 0; 
}
