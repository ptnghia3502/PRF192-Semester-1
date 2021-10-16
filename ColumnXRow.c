#include <stdio.h>

int main() 
{
	int a[100];
	int i, j, n, m;
	printf("Nhap so lon: \n"); scanf("%d", &n);
	printf("Nhap so nho: \n"); scanf("%d", &m);
	for (i=m; i<n+1; i++)
	{ 
	    printf("\n");
		for (j=m; j<n+1; j++)
		{
			a[j] = j;
			printf (" %d  ", a[j] * i);
		}
	}
	return 0;
}
