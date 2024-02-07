#include <stdio.h>
#include <stdlib.h>
int main() {

int number,i;
int factorial=1;

printf("Enter number to calculate factorial:");
scanf("%d",&number);

for(i=1;i<=number;i++)
{
	factorial=factorial*i;
}
printf("factorial=%d",factorial);

	
	
	return 0;
}
