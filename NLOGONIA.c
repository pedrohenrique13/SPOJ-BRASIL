#include <stdio.h>

int main() {
	int k, n, m, x, y, i;
	scanf("%d", &k);
	while(k > 0) {
		scanf("%d %d", &n, &m);
		for(i = 1; i <= k; i++) {
			scanf("%d %d", &x, &y);
			if (x == n || y == m)
				printf("divisa\n");
			else {
				y > m ? printf("N") : printf("S");
				x > n ? printf("E\n") : printf("O\n");
			}
		}
		scanf("%d", &k);
	}
	return 0;
}
