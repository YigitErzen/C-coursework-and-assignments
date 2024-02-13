#include <stdio.h>
#include <stdlib.h>

int main() {

int choice;

printf("Math Menu\n\n");
printf("******************\n");
printf("1- Square: area and perimeter calculation\n");
printf("2- Square of the entered number\n");
printf("3- Cube of the entered number\n");
printf("4- Circle: area and perimeter calculation (pi=3)\n");
printf("5- Rectangle: area and perimeter calculation\n");
printf("******************\n");
printf("Select your operation:");
scanf("%d", &choice);

switch(choice)
{
	
case 1:
{int side, area, perimeter;
printf("Enter the length of the side of the square:");
scanf("%d", &side);
perimeter = 4 * side;
area = side * side;
printf("Perimeter of the square:%d\n", perimeter);
printf("Area of the square:%d", area);
break;}

case 2:
{int number, result;
printf("Enter a number:");
scanf("%d", &number);
result = number * number;
printf("Square of the number you entered:%d", result);
break;}	

case 3:
{int number, result;
printf("Enter a number:");
scanf("%d", &number);
result = number * number * number;
printf("Cube of the number you entered:%d", result);
break;}

case 4:
{int radius, area, perimeter;
printf("Enter the length of the radius of the circle:");
scanf("%d", &radius);
area = 3 * radius * radius;
perimeter = 2 * 3 * radius;
printf("Perimeter of the circle:%d\n", perimeter);
printf("Area of the circle:%d", area);
break;}		
		
case 5:
{int shortside, longside, area, perimeter;
printf("Enter the length of the short side of the rectangle:");
scanf("%d", &shortside);
printf("Enter the length of the long side of the rectangle:");
scanf("%d", &longside);
area = shortside * longside;
perimeter = 2 * (longside + shortside);
printf("Area of the rectangle:%d\n", area);
printf("Perimeter of the rectangle:%d", perimeter);
break;}

default:
printf("Invalid number entered!");
break;
}
	return 0;
}

