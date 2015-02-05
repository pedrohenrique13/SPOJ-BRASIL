#include <stdio.h>

long fatorial (int n){
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 12){
        printf("%d\n", fatorial(n));
    }
    return 0;
}
