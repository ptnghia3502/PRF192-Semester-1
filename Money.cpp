#include<stdio.h>
#include<conio.h>
int main()
{
    int tien[5]={50,25,10,5,1};
    int soTien, to;
    printf("Nhap vao so tien cua ban:");
    scanf("%d", &soTien);
    for(int i=0; i<5; i++) {
        to=soTien/tien[i];
        printf("\n%d to %d", to, tien[i]);
        soTien=soTien%tien[i];
    }
    getchar();
    return 0;
}
