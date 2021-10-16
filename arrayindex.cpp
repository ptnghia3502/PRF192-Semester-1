#include <stdio.h>

void ascSelectionSort (int*a, int n)
{
	int minTndex;
	int i,j;
	for (i=0; i<n-1; i++)
	{
		minTndex= i;
		for (j=i+1; j<n; j++) if (a[minTndex] > a[j]) minTndex=j;
		if (minTndex>i)
		{
			int t= a[minTndex];
			a[minTndex] = a[i];
			a[i] = t;
		}
	}
 } 
 
 void print (int*a, int n)
{
    for (int i=0; i<n;i++) printf("%d ", a[i]);
}
int main()
{   int a[]={1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    ascSelectionSort(a, 10);
    print(a,10);
    getchar();
    return 0;
}
