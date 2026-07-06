#include <stdio.h>
// برنامه ای بنویسید که طول و عرض را از کاربر دریافت کند و محیط و مساحت را در خروجی چاپ کند.
int main(){
    int Length,Width,mohit,masahat;

    printf("enter Length:");
    scanf("%d",&Length);
    printf("enter Width:");
    scanf("%d",&Width);

    masahat = Length * Width;
    printf("masahat is:%d",masahat);

    mohit = (Length + Width) * 2;
    printf("mohit is:%d",mohit);


}
