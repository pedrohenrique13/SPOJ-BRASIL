#include <stdio.h>

int main() {
	int x1, x2, y1, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	while(x1 != 0) {
        if (x1 == x2 && y1 == y2)
            printf("0\n");
        else
            (x1 == x2 || y1 == y2 || x1 - y1 == x2 - y2 || x1 + y1 == x2 + y2) ? printf("1\n") : printf("2\n");
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	}
	return 0;
}
