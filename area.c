// Given the length and breadth of a rectangle, 
// write a program to find whether the area of the rectangle is greater than its perimeter. 
// For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main(){
	float length,breadth,area_of_rectangle,perimeter_of_rectangle;

	printf("Please enter the length and breadth of rectangle\n");
	scanf("%f%f",&length,&breadth);

	area_of_rectangle = length * breadth;
	perimeter_of_rectangle = 2 * length + 2* breadth;

	if (area_of_rectangle > perimeter_of_rectangle)
	{
		printf("The area of rectangle with length %f and breadth %f is greater than its perimeter\n",length,breadth );
	}

	else{
		printf("The area of rectangle with length %f and breadth %f is not  greater than its perimeter\n", length,breadth);
	}


	return 0;

}