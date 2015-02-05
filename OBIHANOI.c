#include <stdio.h>
#include <math.h>

int main() {
    int n, t = 1;
    while(scanf("%d", &n) && n != 0) {
        printf("Teste %d\n", t++);
        printf("%d\n", (((int)pow((double)2, (double)n)) - 1));
    }
    return 0;
}
