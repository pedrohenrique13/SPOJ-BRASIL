#include <stdio.h>
int main() {
	int n, l, c, i, aux;
	scanf("%d", &n);
	if (n > 0){
		aux = 0;
		for ( i = 1; i <= n; i ++) {
			scanf("%d %d", &l, &c);
			if ( l > c)
				aux += c;
			}
		printf("%d\n", aux);
	}
	return 0;
}
