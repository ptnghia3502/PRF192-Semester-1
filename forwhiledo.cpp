#include <stdio.h>

int main() {
/*  int S,i;
	S=0;
	for (i=1; i<=10; i++) {
		S += i;
	}
	printf("%d", S);
	return 0;  */
/*  int S,i;
	S=0;
	i=1;
	while (i<=10) {
		S +=i;
		i++;
	}
	printf("%d", S);
	return 0;  */
	int S,i;
	S=0;
	i=1;
	do {
		S +=i;
		i++;
	}
	while (i<=10);
	printf ("%d", S);
	return 0;
}
