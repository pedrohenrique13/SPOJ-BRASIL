#include <stdio.h>

int main() {
	int n, m, i;
	scanf("%d %d", &n, &m);
	if(n != 0 || m != 0) {
		i = n - m;
		printf("%d\n", i);
	}
	return 0;
}
