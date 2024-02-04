#include <stdio.h>
#include <stdlib.h>
int main() {
int number1,number2,total;

printf("Enter the 1st number:");
scanf("%d",&number1);

printf("Enter the 2nd number:");
scanf("%d",&number2);

total=number1+number2;

if(total>50)
{
	printf("Total:%d - greater than 50",total);
}
else
{
	printf("total:%d - no greater than 50 ",total);
	}	

	return 0;
}
