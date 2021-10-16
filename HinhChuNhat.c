#include <stdio.h>
#include <conio.h>

int main() {
	int i, j, dai, rong;
	printf("Nhap chieu dai: ");
	scanf("%d", &dai);
	printf("Nhap chieu rong: ");
	scanf("%d", &rong);
	for (i=1; i<=rong; i++) {
	   for (j=1; j<=dai; j++) {
	   	  printf("*");
	   };
	   printf("\n");
	}
}
