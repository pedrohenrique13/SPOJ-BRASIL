#include <stdio.h>

int main() {
	long a, i, k, l;
	scanf("%ld", &a);
	i = a % 76;
	i == 10 ? (printf("%ld\n", a + 76)) : (l = (a - 1986));
    l = a - 1986;
    while(l >= 76){
        l -= 76;
    }
    k = 76 - l;
    if(k < 76)
        printf("%ld\n", (a +k));
	return 0;
}
