#include <stdio.h>

int main() {
	int n, p, q, r;
	char c;
	
	scanf("%d",&n);
	if(n != EOF){
		scanf("%d %c %d", &p, &c, &q);
		switch(c){
			case '+':
				r = p + q;
				if(r > n)
					printf("OVERFLOW\n");
				else
					printf("OK\n");
				break;
			case '*':
				r = p * q;
				if(r > n)
					printf("OVERFLOW\n");
				else
					printf("OK\n");
				break;
			}
		}
	return 0;
}
