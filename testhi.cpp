#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100
#define FILENAME "C:/Users/Nghia/Desktop/PRF192/Workshop/PE/pe.txt"

int menu() 
{
	printf("Quan ly danh sach!");
	printf("\n1 - Nhap ten SV moi");
	printf("\n2 - Cap nhat sinh vien");
	printf("\n3 - Xoa sinh vien khoi danh sach");
	printf("\n4 - Sap xep danh sach theo thu tu tang dan");
	printf("\n5 - In ra danh sach ban dau va da sap xep");
	printf("\n6 - Luu vao file");
	printf("\n7 - Quit");
	printf("\nSelect : ");
	int choice;
	scanf("%d", &choice);
	return choice;
}

int isFull(char list[MAXN][10], int *pn) {        //Danh sach day
	return ((*pn) == MAXN);
}

int isEmpty(char list[MAXN][10], int *pn) {       //Danh sach trong
	return ((*pn) == 0);
}

void add (char list[MAXN][10], int *pn) {               //Them sinh vien
	char ten[10];
	printf("Nhap ten hoc sinh: ");
	fflush(stdin);
	scanf("%11[^\n]", ten);
	strcpy(list[*pn], ten);
	(*pn)++;
	printf("Da them vao danh sach!\n");
}
 
void update (char list[MAXN][10], int *pn) {            //Cap nhat danh sach
	char ten[10];
	char update[10];
	printf("Tim ten hoc sinh can thay the: ");
	fflush(stdin);
	scanf("%11[^\n]", ten);
	int i;
	int s=0;
	for (i=0; i<*pn; i++) {
		if (strcmp(ten,list[i])==0) {
			printf("Da tim thay ten hoc sinh!\n");
			printf("Hay nhap ten khac de thay the: ");
			fflush(stdin);
	        scanf("%11[^\n]", update);
	        strcpy(list[i], update);
	        printf("Da cap nhat xong");
	        s++; break;
		}
	}
	if (s == 0) printf("Khong tim thay ten hoc sinh!\n");
}

void removed(char list[MAXN][10], int *pn)       //Xoa hoc sinh (theo so thu tu)
{
	int i;
	for (i = 0; i < (*pn); i++) printf("STT[%d] : %s \n", i, list[i]);
	printf("Nhap STT de xoa ten hoc sinh khoi danh sach : ");
	int xoa;
	scanf("%d", &xoa);
	if (xoa >= 0 && xoa < *pn) 
	{
	for (i = xoa; i < *pn; i++)
		strcpy(list[i], list[i+1]);
	printf("Da xoa ten hoc sinh ra khoi danh sach!\n");
	(*pn)--;
	}
	else printf("Khong tim thay ten hoc sinh, xoa that bai!\n");
}

void sort(char list[MAXN][10], int *pn)           //In danh sach ten hoc sinh theo thu tu tang dan
{
	int i, j;
   	for (i = 0 ; i < *pn-1; i++)
     	for (j = *pn-1; j > i; j--)
     		if (strcmp(list[j] , list[j-1]) < 0)
     			{
     				char t[10];
		            strcpy(t, list[j]);
		            strcpy(list[j], list[j-1]);
		            strcpy(list[j-1], t);
				}
	printf("Da sap xep xong!\n");
}

void print(char list[MAXN][10], int *pn) {
	int i;
	for (i = 0; i < (*pn); i++) printf("STT[%d] : %s \n", i, list[i]);
}

int main() {
	int userChoice;
	int n=0;
	char list[MAXN][10];
	do
	{
		userChoice = menu();
        switch(userChoice)
        {
        	case 1:
				if (isFull(list, &n)) printf("Danh sach da day, khong the them!\n");
				else add(list, &n);
				break;
            case 2:
				if (isEmpty(list, &n)) printf("Danh sach trong, khong the xoa!\n");
				else update(list, &n);
				break;
            case 3:
				if (isEmpty(list, &n)) printf("Danh sach trong, khong the tim kiem!\n");
				else removed(list, &n);
				break;
            case 4:
				if (isEmpty(list, &n)) printf("Danh sach trong, khong the sap xep!\n");
				else sort(list, &n);
				break;
			case 5:
				if (isEmpty(list, &n)) printf("Danh sach trong, khong the in!\n");
				else print(list, &n);
				break;
            default: printf("\nGoodbye\n");
		}
		system("pause");
        system("cls");
	} while (0 < userChoice && userChoice <6 );
}
