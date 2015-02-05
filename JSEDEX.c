#include <stdio.h>

int main() {
  int n,a,l,p;
  scanf("%d", &n);
  if(n >= 1){
     scanf("%d %d %d", &a, &l, &p);
     if((a && l && p) <= 1){
        if ((n <= a) && (n <= l) && (n <= p))
           printf("S\n");
        else
           printf("N\n");
      }
  }
  return 0;
 }
