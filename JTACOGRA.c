#include <stdio.h>

int main() {
	int n, t, v, i, k, l;
	scanf("%d", &n);
        l = 0;
	for(i = 1; i <= n; i++) {
		k = 0;
		scanf("%d %d", &t, &v);
		k = t * v;
		l = l + k;
	}
	printf("%d\n", l);
	return 0;
}
