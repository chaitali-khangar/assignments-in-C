// Given the coordinates (x, y) of a center of a circle and it’s radius, 
// write a program which will determine whether a point lies inside the circle,
// on the circle or outside the circle.

#include <stdio.h>
#include <math.h>

int main (){
	float x,y,radius_of_circle,a,sum;


	printf("please enter the points for X and Y\n");
	scanf("%f%f",&x,&y);

	printf("please enter the radius of circle\n");
	scanf("%f",&radius_of_circle);
	a=radius_of_circle;

	sum = sqrt(pow(x-a,2) + pow(y-a,2));

	if (sum==radius_of_circle)
	{
		printf("the point lies on the circle\n");
	}
	if (sum < radius_of_circle)
	{
		printf("The point lies inside the circle\n");
	}
	else{

		printf("the point lies outside the circle\n");
	}


	return 0;

}
