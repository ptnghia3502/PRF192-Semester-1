#include <stdio.h>
int sumDivisors(int n);
int main() {
	int n;
	printf("Input a positive integer: ");
	scanf("%d", &n);
	printf("Result: %d\n", sumDivisors(n));
	getchar();
	getchar();
}
int sumDivisors(int n) {
	int i, S=0;
	for (i=1; i<=n/2; i++) 
	    if (n%i==0) S+=i;
	return S;    
}
