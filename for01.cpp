#include<stdio.h>

int main() {
	int n,i;
	printf("n= ");
	scanf("%d", &n);
	int sum=0;
	for (i=1; i<=n; i++) {
		sum +=i;
	};
	printf("sum= %d", sum);
	getchar();
	getchar();
	return 0;
}
