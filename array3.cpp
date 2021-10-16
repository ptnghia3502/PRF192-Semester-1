#include <stdio.h>
#include <stdlib.h>

int main() {
	int ia[50], i, in, isum =0;
	printf("Nhap vao gia tri n: ");
	scanf("%d", &in);
	for (i=0; i<in; i++) {
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &ia[i]);
	}
	for (i=0; i<in; i++) 
	  isum += ia[i];
	  printf("Trung binh cong: %.2f\n", (float) isum/in);
	getchar();
	return 0;  
}
