// Any integer is input through the keyboard. Write a program to
// find out whether it is an odd number or even number.

#include <stdio.h>

int main(){
	int year;

	printf("Please enter the year \n");
	scanf("%d",&year);

	if (year%4==0)
	{
		printf("The entered year %d is leap year\n",year);
	}
	else{

		printf("The entered year %d is not leap year\n",year );
	}

	return 0;

}