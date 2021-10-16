#include <stdio.h>

int main() {
	char s[11];
	printf("Enter a string:");
	gets(s);
	printf("String content: %s\n", s);
	getchar();
	return 0;
}
