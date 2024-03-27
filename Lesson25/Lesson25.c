#include <stdio.h>
#include <stdlib.h>

int main() {
	
int row,column,i,j,k,n;

printf("Enter the number of rows:");
scanf("%d",&row);

printf("Enter the number of columns:");
scanf("%d",&column);

int array[row][column];

for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
printf("\n[%d][%d]-->",i,j);	
scanf("%d",&array[i][j]);
}
}		

printf("Generated array:");
printf("\n");
for(k=0;k<row;k++) 
{
for (n=0;n<column;n++) 
{
printf("%d ",array[k][n]);	
}	
printf("\n");
}

return 0;
}

