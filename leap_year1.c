// Any year is entered through the keyboard, 
// write a program to determine whether the year is leap or not. Use the logical operators && and ||.

#include <stdio.h>

int main (){

	int year;

	printf("please enter the year\n");
	scanf("%d",&year);

	if ((year%4==0 && year%100!=0)||year%400==0)
	{
		printf("the entered year %d is leap year\n",year );
	}
	else {

		printf("the entered year is not leap year\n");
	}
return 0;

}