#include <stdio.h>

int main() {
    int n1, n2, d1, d2, v1, v2;
    scanf("%d %d %d", &n1, &d1, &v1);
    scanf("%d %d %d", &n2, &d2, &v2);
    if(((float)d1/(float)v1) < ((float)d2/(float)v2)) printf("%d\n", n1);
    else printf("%d\n", n2);
    return 0;
}
