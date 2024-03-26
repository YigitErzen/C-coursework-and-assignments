#include <stdio.h>
#include <stdlib.h>

int main() {
	
int array[2][2];

   	array[0][0]=10;
	
	array[0][1]=20;
	
	array[1][0]=30;
	
	array[1][1]=40;
	
    printf("%d ",array[0][0]);
	printf("%d\n",array[0][1]);
	printf("%d ",array[1][0]);
	printf("%d\n",array[1][1]);
	
	return 0;
}
