// Write a program to check whether a triangle is valid or not, 
// when the three angles of the triangle are entered through the keyboard. 
// A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include <stdio.h>

int main(){
	float a1,a2,a3;
	printf("Please enter the three angles of the triangle\n");
	scanf("%f%f%f",&a1,&a2,&a3);

	if (a1+a2+a3==180)
	{
		printf("The triangle is valid\n");
	}
	else{
		printf("Thr triangle is not Valid\n");
	}
	return 0;

}