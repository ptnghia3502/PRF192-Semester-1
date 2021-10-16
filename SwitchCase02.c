#include<stdio.h>
#include<conio.h>

int main() {
	int ithang;
	printf("Nhap vao thang: ");
	scanf("%d", &ithang);
	switch(ithang) {
		case 1: case 2: case 3: printf("Quy 1\n"); break;
		case 4: case 5: case 6: printf("Quy 2\n"); break;
		case 7: case 8: case 9: printf("Quy 3\n"); break;
		case 10: case 11: case 12: printf("Quy 4\n"); break;
		default: printf("Nhap vao so tu 1...2");
	};
	getch();
	return 0;
}
