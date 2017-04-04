#include <stdio.h>
#include <math.h>
#include<stdlib.h>


#define MAX 10000
#define LINE_PRINT 15

int main() {
int primes[MAX / 2] = {2, 3}, cnt = 2;
int i, j, sqr, chk;

printf("%4d %4d ", 2, 3);

for(i = 5; i <= MAX; i += 2) {
sqr = (int) sqrt((double) i);

for(chk = 1, j = 1; primes[j] <= sqr; j++) {
if(! (i % primes[j])) {
chk = 0;
break;
}
}

if(chk) {
printf("%4d ", primes[cnt++] = i);
if(! (cnt % LINE_PRINT)) printf("\n");
}
}

printf("\n");
getch();
return 0;
} 
