#include <stdio.h>
#include <conio.h>
#define MAX 50

int main() {
	float fa[MAX], fsum=0;
	int i=0;
	do {
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%f", &fa[i]);
	}
	while (fa[i++] >0);
	i--;
	for (int ij=0; ij<i; ij++)
	  fsum += fa[ij];
	  printf("Tong: %5.2f\n", fsum);
	getch();
}
