#include <stdio.h>

int main(){

	int number1,number2,result;
	char op;

	printf("enter number1:");
	scanf("%d",&number1);

	printf("enter number2:");
	scanf("%d",&number2);

	printf("Do you want to + or - ?");
	scanf(" %c",&op);


	result= op=='+' ? number1+number2 : number1-number2 ;

	printf("your result is: %d",result);

}
