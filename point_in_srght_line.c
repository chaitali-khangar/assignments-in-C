// Given three points (x1, y1), (x2, y2) and (x3, y3), 
// write a program to check if all the three points fall on one straight line.

#include <stdio.h>
#include <math.h>	

int main (){
	float x1,y1,x2,y2,x3,y3,d1,d2,d3;
	printf("please enter the three co-ordinate points for x and y\n");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);

	d1 = sqrt(pow(y2-y1,2) + pow(x2-x1,2));

	d2 = sqrt(pow(y3-y2,2) + pow(x3-x2,2));

	d3 = sqrt(pow(y3-y1,2) + pow(x3-x1,2));
	
	if (d3==d1+d2)
	{
		printf("the entered points lies in straight line\n");
	}

	else{

		printf("the entered points does not lies in straight line\n");
	}
	return 0;




}