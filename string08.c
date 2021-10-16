#include <stdio.h>

int main()
{
	char name[7][31] = {"Dinh Tien Hoang", "Le Dai Hanh",
	                    "Ly Cong Uan", "Le Loi", 
	                    "Tran Nguyen Han", "Le Thanh Tong",
						"Nguyen Hue"};
	int i;
	for(i=0; i<7;i++) printf("addr: %u, value: %s\n", name[i], name[i]);
	getchar();
	return 0;
}
