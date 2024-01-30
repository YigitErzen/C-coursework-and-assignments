#include <stdio.h>
#include <stdlib.h>
int main() {
   //Area and perimeter of a rectangle whose short and long sides are decimals
    float shortside,longside,area,perimeter;
    shortside = 4.6;
    longside = 9.3;
    perimeter = (shortside + longside) * 2;
    area = shortside * longside;
    
    printf("Perimeter of the rectangle: %f\n", perimeter);
    printf("Area of the rectangle: %f", area);
    
    return 0;
}

