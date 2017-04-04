/* 程式範例: Ch9-3-1.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN      20            /* 最大字串長度 */
/* 函數: 合併陣列 */ 
void merge(char *data,int start,int mid,int end) {
    int left = start;              /* 左半部的索引 */ 
    int right = mid + 1;           /* 右半部的索引 */ 
    int i; 
    char *finalData; 
    /* 配置合併區段所需的記憶體空間 */ 
    finalData = (char*) malloc(sizeof(char)*(end-start+2)); 
    /* 合併左右兩半部分區段的迴圈 */
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
    finalData[i] = '\0';   /* 字串結尾 */ 
    /* 複製到原始陣列的區段 */ 
    for (i = 0; i < (end - start + 1); i++) { 
        data[start + i] = finalData[i]; 
    } /* 顯示合併後的字串 */
    printf("%d-%d-%d: [%s]\n",start,mid,end,finalData);
}
/* 函數: 合併排序法 */ 
void mergeSort(char *data, int start, int end) { 
    int mid; 
    if ( end <= start ) return;    /* 終止條件 */ 
    mid = (start + end) / 2;       /* 中間索引 */ 
    mergeSort(data, start, mid);   /* 遞迴排序左半邊 */
    mergeSort(data, mid+1, end);   /* 遞迴排序右半邊 */
    merge(data, start, mid, end);  /* 合併陣列 */    
}
/* 主程式 */ 
int main() {
   char data[MAX_LEN];            /* 字串陣列 */
   int len;                       /* 字串長度 */
   printf("輸入欲排序的字串 ==> ");
   gets(data);                    /* 讀取字串 */
   len = strlen(data);            /* 計算字串長度 */
   mergeSort(data, 0, len-1);     /* 執行合併排序法 */
   /* 顯示排序後字串 */
   printf("\n輸出排序結果: [%s]\n", data);
   system("PAUSE");
   return 0; 
}
