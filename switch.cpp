#include<stdio.h>
#include<conio.h>

int main() {
	int i;
	printf("Nhap vao so 1,2 hoac 3: ");
	scanf("%d", &i);
	switch (i) {
		case 1: {printf("*\n"); break;}
		case 2: {printf("**\n"); break;}
		case 3: {printf("***\n"); break;}
	};
	printf("An phim bat ky de ket thuc\n");
	getch();
	return 0;
}
