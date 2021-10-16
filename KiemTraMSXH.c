#include <stdio.h>
#include <stdlib.h>

/* Kiem tra Ma so Xa Hoi
Hop le khi cac chu so * lan luot voi cac so giam dan chia het cho 11
*/
long long i,m;
char n[100];
int Tong,SCS;

int Check()
{

    if (n[0]=='0')
        if (n[1]==0) return 2; // neu nhap moi so 0 ket thuc
    int Ktra=1;
    for (i=0;i<=9;i++)
    {
        if ((n[i]<48)||(n[i]>57)) Ktra=0;                //Neu khong phai so -> Sai
    }
    if ((n[10]>=48)&&(n[10]<=57)) Ktra=0;  // Neu nhap hon 10 so -> sai dinh dang
    if (Ktra==1) return 1; //dung dinh dang
    else         return 0;  //sai dinh dang so
}

int Calc()
{
    m=10; //reset nhan
    Tong=0; //reset tong
    for(i=0;i<=9;i++)
    {
        Tong+=(((int)n[i])-48)*m; //Tong ma SXH
        m--;  // giam bien nhan
    }
    //printf("%d",Tong);
    if ((Tong%11)==0) return 1; // neu chia het cho 11 thi return True
    else return 0;
}

int main()
{
    printf("ISBN Validator ============== \n\n");
    do
    {
        for(i=0;i<=99;i++)
            n[i]='A';       // khoi tao string chua chu~
        printf("ISBN (0 to quit): ");
        scanf("%s",&n);
        printf("\n");
        if (Check()==0) printf("ISBN have invalid no of number\n\n");// Check khong du so
        if (Check()==1)
            {
                if (Calc()) printf("This is a valid ISBN. \n\n"); //Hop le
                else printf("This is not a valid ISBN. \n\n"); //Khong hop le
            }
        if (Check()==2) break;

    }
    while(1);
    return 0;
}
