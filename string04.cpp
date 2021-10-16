#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	int n=10;
	char s[11]="Hello";
	int m=9;
	printf("n=%d, s=%s, m=%d\n", n, s, m);
	scanf("%s", s);
	printf("n=%d, s=%s, m=%d\n", n, s, m);
	getch();
	return 0;

}

