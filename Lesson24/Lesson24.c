#include <stdio.h>
#include <stdlib.h>

int main() {

int array[2][3]={10,20,30,40,50,60};	
	
int x,y;
	
for(x=0;x<=1;x++)
{
for(y=0;y<=2;y++)	
{printf("%d ",array[x][y]);}
printf("\n");
}	
	
	return 0;
}
