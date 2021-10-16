#include <stdio.h>
#include <stdlib.h>

int getchoice();

int tong(int a, int b);
void function1();

int hieu(int a, int b);
void function2();

int tich(int a, int b);
void function3();

double thuong(int a, int b);
void function4();

int main() {
	int userchoice;
	do {
		userchoice = getchoice();
		switch(userchoice)
		{
			case 1: function1(); break;
			case 2: function2(); break;
			case 3: function3(); break;
			case 4: function4(); break;
			default: printf("Bye\n");
		}
	}
	while (userchoice>0 && userchoice<5);
	fflush(stdin);
	getchar();
	return 0;
}


int getchoice() {
	int choice;
	printf("\n1-Operation 1");
	printf("\n2-Operation 2");
	printf("\n3-Operation 3");
	printf("\n4-Operation 4");
	printf("\nOthers-Quit");
	printf("\nChoose: ");
	scanf("%d%*c", &choice);
	return choice;
}

int tong(int a, int b) {
	int s;
	s = a + b;
	return s;
}

void function1() {
	int x, y;
	printf("Nhap 2 so nguyen: \n");
	scanf("%d%d", &x, &y);
	printf("Tong cua 2 so: %d\n", tong(x,y));
}

int hieu(int a, int b) {
	int s;
	s = a - b;
	return s;
}

void function2() {
	int x, y;
	printf("Nhap 2 so nguyen: \n");
	scanf("%d%d", &x, &y);
	printf("Hieu cua 2 so: %d\n", hieu(x,y));
}

int tich(int a, int b) {
	int s;
	s = a * b;
	return s;
}

void function3() {
	int x, y;
	printf("Nhap 2 so nguyen: \n");
	scanf("%d%d", &x, &y);
	printf("Tich cua 2 so: %d\n", tich(x,y));
}

double thuong(int a, int b) {
	double s;
	s = a / b;
	return s;
}

void function4() {
	int x, y;
	printf("Nhap 2 so nguyen: \n");
	scanf("%d%d", &x, &y);
	printf("Thuong cua 2 so: %f\n", thuong(x,y));
}
