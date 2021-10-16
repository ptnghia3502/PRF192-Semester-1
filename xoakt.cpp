#include<stdio.h>
#include<conio.h>
#include<string.h>

void check(char s[100])
{
    int n=strlen(s); 
    for(int i=0;i<n;i++)
    if(s[i]==32)
    {
        for(int j=i;j<n;j++)
        {
            s[j]=s[j+1];
            i--;
        }
    }
    for(int i=0;i<strlen(s);i++)
    {
        strupr(s);
	    break;
    }
}

int main() {
	char s[256]="pham           TrOng            nghia"; 
	check(s);
	printf("%s",s);
	return 0;
}
