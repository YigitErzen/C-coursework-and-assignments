#include <stdio.h>
#include <stdlib.h>

int main() {
//factorial of the entered number
int number,i,x;

printf("Enter a number:");
scanf("%d",&number);

i=1;
x=1;

while(i<=number)
{
	x=i*x;
	i++;
}
printf("%d",x);

	return 0;
}
