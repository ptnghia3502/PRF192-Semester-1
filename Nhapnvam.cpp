#include <stdio.h>
int n;
int main () {
	int m;
	printf("Var. n, addr: %u\n", &n);
	printf("Var. m, addr: %u\n", &m);
	printf("main code, addr: %u\n", &main);
	printf("Enter 2 integers: ");
	scanf("%d%d", &n, &m);
	printf("Value of entered: n=%d, m=%d\n", n, m);
	getchar();
	getchar();
	return 0;
}
