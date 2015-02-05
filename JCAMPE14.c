#include <stdio.h>

int main() {
    int cv, ce, cs, fv, fe, fs, pc, pf;
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    pc = ((cv * 3) + ce);
    pf = ((fv * 3) + fe);
    if (pc > pf && pc != pf) printf("C\n");
    else if (pf > pc && pf != pc) printf("F\n");
    else if (pf == pc && cs != fs) {
        if (cs > fs) printf("C\n");
        else if(fs > cs) printf("F\n");
    }
    else printf("=\n");
    return 0;
}
