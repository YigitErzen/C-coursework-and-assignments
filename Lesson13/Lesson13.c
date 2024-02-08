#include <stdio.h>
#include <stdlib.h>

int main() {
//example:478 
//x=4,y=7,=z8

int number,x,y,z;

printf("Enter a 3-digit number:");
scanf("%d",&number);

x=number/100;
printf("%d\n",x);

y=number/10;
y=y%10;
printf("%d\n",y);

z=number%10;
printf("%d",z);
	
	return 0;
}
