// If lengths of three sides of a triangle are input through the 
// keyboard,write a program to find the area of triangle.

#include <stdio.h>
#include <math.h>

int main(){

	float a,b,c,p,area;

	printf("Please enter value  for three side of triangle \n");

	scanf("%f%f%f",&a,&b,&c),

	p=(a+b+c)/2;

	area = sqrt(p*(p-a)*(p-b)*(p-c));

	printf("the area of triangle is %f\n", area);

	return 0;
}