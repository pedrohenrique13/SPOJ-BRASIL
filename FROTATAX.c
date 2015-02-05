#include <stdio.h>

int main() {
    float A, G, Ra, Rg, Ac, Ga;
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
    Ga = Rg;
    Ac = ((G * Ra) / A);
    if (Ac > Ga) {
        printf("A\n");
    }
    else {
        printf("G\n");
    }
    return 0;
}
