#include <stdio.h>

int main() {
	int a,b;
	printf("Nhap vao vao so a: ");
	scanf("%d", &a);
	printf("Nhap vao so b: ");
	scanf("%d", &b);
	if (a>b) {
	    printf("a lon hon b\n");
	} else if(a<b) {
		printf("a nho hon b\n");
	} else {
	    printf("a bang b\n");
	}
	return 0;
}
