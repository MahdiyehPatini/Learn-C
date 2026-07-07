#include <stdio.h>

int main(){

	int number1,number2;
	char op;

	printf("enter number1:");
	scanf("%d",&number1);

	printf("enter number2:");
	scanf("%d",&number2);

	printf("Do you want to + or - ?");
	scanf("%s",&op);

    int result=number1+number2;

    int result2=number1-number2;

	char result3=(op == "+") ? result:result2;

	printf("your result is: %d",result3);

}
