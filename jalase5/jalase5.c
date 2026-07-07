#include <stdio.h>

int main(){
    int num1= 20;
    int num2= (num1>30) ? num1 * 5 : num1/2;
    int num3=sizeof (num2);
    printf("%d",num3);

    //printf("%d",num2);

}
