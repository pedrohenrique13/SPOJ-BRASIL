#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *);

int main() {
    int n, c[5];
    scanf("%d", &n);
    int i, teste = 1;
    for (i = 0; i < n; i++) {
        int total = 0;
        scanf("%d %d %d %d %d", &c[0], &c[1], &c[2], &c[3], &c[4]);
        qsort(c, 5, sizeof(int), compare);
        if (c[1] == c[0]+1 && c[2] == c[0]+2 && c[3] == c[0]+3 && c[4] == c[0]+4) total += (c[0] + 200);
        else if ((c[0] == c[1] && c[1] == c[2] && c[2] == c[3]) || (c[1] == c[2] && c[2] == c[3] && c[3] == c[4])) total += (c[1] + 180);
        else if ((c[0] == c[1] && c[1] == c[2] && c[2] != c[3] && c[3] == c[4]) || (c[0] == c[1] && c[1] != c[2] &&
                                                                            c[2] == c[3] && c[3] == c[4])) total += (c[2] + 160);
        else if ((c[0] == c[1] && c[1] == c[2] && c[2] != c[3] && c[3] != c[4]) || (c[0] != c[1] && c[1] == c[2] &&
                  c[2] == c[3] && c[3] != c[4]) || (c[0] != c[1] && c[1] != c[2] && c[2] == c[3] && c[3] == c[4])) total += (c[2] + 140);
        else if ((c[0] == c[1] && c[1] != c[2] && c[2] == c[3] && c[3] != c[4]) || (c[0] == c[1] && c[1] != c[2] && c[2] != c[3] &&
                  c[3] == c[4]) || (c[0] != c[1] && c[1] == c[2] && c[2] != c[3] && c[3] == c[4])) total += (3 * c[3] + 2 * c[1] + 20);
        else if (c[0] == c[1] && c[1] != c[2] && c[2] != c[3] && c[3] != c[4]) total += c[0];
        else if (c[0] != c[1] && c[1] == c[2] && c[2] != c[3] && c[3] != c[4]) total += c[1];
        else if (c[0] != c[1] && c[1] != c[2] && c[2] == c[3] && c[3] != c[4]) total += c[2];
        else if (c[0] != c[1] && c[1] != c[2] && c[2] != c[3] && c[3] == c[4]) total += c[3];
        printf("Teste %d\n%d\n\n", teste++, total);
    }
    return 0;
}

int compare (const void * a, const void * b) {
    return ( *(int *)a - *(int *)b);
}
