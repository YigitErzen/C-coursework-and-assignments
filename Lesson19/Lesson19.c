#include <stdio.h>
#include <stdlib.h>

int main() {
    
int numbers[100];
int i,numberCount,total,average;
total=0;
    
printf("Enter the number of numbers:");
scanf("%d",&numberCount);
    
for(i=0;i<numberCount;i++)
{
printf("Enter the %dth number:",i+1);
scanf("%d",&numbers[i]);
}
    
for(i=0;i<numberCount;i++) 
{
total=total+numbers[i];
}
    
average=total/numberCount;

printf("Sum of the entered numbers:%d\n",total);
printf("Average of the entered numbers:%d",average);

return 0;
}

