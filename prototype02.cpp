#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n); /*prototype*/

int main() {
	int n;
	int check;
	do {
		printf("Nhap 1 so nguyen, ket thuc bang 0: ");
		scanf("%d", &n);
		check = isPrime(n);
		if (check==1) printf("%d la SNT\n", n);
		else printf("%d KHONG la SNT\n", n);
	}
	while (n!=0);
	system("pause");
	return 0;
}

int isPrime(int n) {
	int m=sqrt(n);
	int i;
	if (n<2) return 0;
	for (i=2; i<m; i++)
	  if (n%i!=0) return 0;
	return 1;  
}
