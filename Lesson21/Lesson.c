#include <stdio.h>
#include <stdlib.h>

int main() {
	
int x,y,z,a;

for(x=1;x<=5;x++)	
{
for(y=1;y<=x;y++) { printf("*"); }
printf("\n");
}	


for(z=1;z<=5;z++)	
{
for(a=5;a>=z;a--){ printf("*"); }
printf("\n");	
}	
	
	return 0;
}
