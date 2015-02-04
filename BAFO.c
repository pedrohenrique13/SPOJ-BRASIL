#include <stdio.h>
 int main() {
     int R, A, B, auxa, auxb, i, N = 1;
     while((scanf("%d", &R)) && R > 0) {
         A = 0;
         B = 0;
         for(i = 0; i < R; i++) {
             scanf("%d %d", &auxa, &auxb);
             A += auxa;
             B += auxb;
         }
         if(A > B) {
             printf("Teste %d\n", N++);
             printf("Aldo\n");
         }
         else {
             printf("Teste %d\n", N++);
             printf("Beto\n");
         }
     }
     return 0;
 }
