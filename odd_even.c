// Any integer is input through the keyboard. Write a program to
// find out whether it is an odd number or even number.

#include <stdio.h>

int main(){
	int num;

	printf("Please enter the integer value\n");
	scanf("%d",&num);

	if (num%2==0)
	{
		printf("The entered %d integer value is even number\n", num);
	}
	else{

		printf("the entered %d integer value is an odd number\n", num);
	}
return 0;

}