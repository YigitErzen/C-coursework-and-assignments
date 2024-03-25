#include <stdio.h>
#include <stdlib.h>

int main() {
int x,y,sidelength;
printf("Enter the side length: ");
scanf("%d",&sidelength);
    
for(x=1;x<=sideLength;x++)
{
for(y=1;y<=x;y++)
{
printf("*");
}
printf("\n");
}
return 0;
}

