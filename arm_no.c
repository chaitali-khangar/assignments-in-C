// Write a program to print out all Armstrong numbers between 1 and 500.
// If sum of cubes of each digit of the number is equal to the number itself, 
// then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 *5)+(3*3*3)

#include <stdio.h>

int main(){
	int num,reminder,num1,sum;
	num = 1;

	while(num<=500){
		num1 = num;
		sum =0;
		while(num1>0){

			reminder = num1%10;
			sum= reminder * reminder * reminder + sum;
			num1/=10;

	}
	if (num==sum)
	{
		printf("%d is armstrong number \n", sum);
		
	}
	num++;
	}
	return 0;
}