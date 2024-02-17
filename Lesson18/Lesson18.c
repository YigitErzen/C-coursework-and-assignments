#include <stdio.h>
#include <stdlib.h>

int main() {

char* cities[] = {"New York", "Miami", "Los Angeles", "San Francisco", "Boston"};
int i;

for(i = 0; i < 5; i++) 
{
 printf("%s\n", cities[i]);
 }

return 0;
}

