#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, count=0, countPos=0, countNeg=0;
	int sumPos=0, sumNeg=0, sum=0;
	double avg;
	printf("Nhap cac so nguyen ket thuc bang 0\n");
	do {
		scanf("%d", &x);
		if (x!=0) {
			count++;
			sum +=x;
			if (x>0) {
				countPos++;
				sumPos +=x;
			}
			else {
				countNeg++;
				sumNeg +=x;
			} 
		}
	}
	while (x!=0);
	if (count==0) printf("Khong co so nhap\n");
	else {
		printf("So luong so da nhap: %d\n", count);
		printf("So so duong: %d\n", countPos);
		printf("So so am: %d\n", countNeg);
		printf("Tong cac so duong: %d\n", sumPos);
		printf("Tong cac so am: %d\n", sumNeg);
		printf("Tong cac so da nhap: %d\n", sum);
		avg = (double)sum/count;
		printf("Tri trung binh: %lf\n", avg);
	} 
	system("pause");
	return 0;
} 
