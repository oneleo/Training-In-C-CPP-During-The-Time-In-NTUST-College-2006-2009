/* 程式範例: Ch9-3-2.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN      20           /* 最大字串長度 */
/* 函數: 快速排序法的遞迴函數 */
void q_sort(char *data, int begin, int end) {
   char partition;                /* 分割的字元 */
   char temp;
   int left, right, k;
   if ( begin < end ) {/* 遞迴中止條件, 是否繼續分割 */
      left = begin;               /* 分割的最左索引 */
      right = end + 1;            /* 分割的最右索引 */
      partition = data[left];     /* 取第一個元素 */
      do {  /* 主迴圈分別從兩個方向找尋交換元素 */ 
         do {                     /* 從左往右找 */
            left++;
         } while( data[left] < partition );
         do {                     /* 從右往左找 */
            right--;
         } while( data[right] > partition );
         if ( left < right ) {
            temp = data[left];    /* 交換資料 */
            data[left] = data[right];
            data[right] = temp;
         }
      } while( left < right );
      temp = data[begin];          /* 交換資料 */
      data[begin] = data[right];
      data[right] = temp;
      printf("輸出結果: ");  /* 顯示處理中的字串 */
      for ( k = begin; k <= end; k++)
         printf("%c", data[k]);
      printf("\n");               /* 換行 */
      q_sort(data, begin,right-1);/* 快速排序遞迴呼叫 */
      q_sort(data, right+1, end); /* 快速排序遞迴呼叫 */
   }
}
/* 函數: 快速排序法 */
void quickSort(char *data, int count) {
   q_sort(data, 0, count-1);
}
/* 主程式 */ 
int main() {
   char data[MAX_LEN];            /* 字串陣列 */
   int len;                       /* 字串長度 */
   printf("輸入欲排序的字串 ==> ");
   gets(data);                    /* 讀取字串 */
   len = strlen(data);            /* 計算字串長度 */
   quickSort(data, len);          /* 執行快速排序法 */
   /* 顯示排序後字串 */
   printf("\n輸出排序結果: [%s]\n", data);
   system("PAUSE");
   return 0; 
}
