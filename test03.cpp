#include <stdio.h>
#include <conio.h>

void clear()
{
	while (getchar()!= '\n');
 } 
 
 int main() 
 {
 	char ch1, ch2;
 	printf("Input the first character: ");
 	scanf("%c", &ch1);
 	clear();
 	printf("Input the second character: ");
 	ch2=getchar();
 	printf("ch1= %c, ASCII code: %d\n", ch1, ch1);
 	printf("ch2= %c, ASCII code: %d\n", ch2, ch2);
 	getch();
 }
