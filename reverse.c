// A five-digit number is entered through the keyboard. 
// Write a program to obtain the reversed number and 
// to determine whether the original and reversed numbers are equal or not.

#include <stdio.h>

int main(){

	int num,num1,reverse_num,reminder;

	printf("Please enter the five digit number\n");
	scanf("%d",&num);
	num1=num;
	reverse_num=0;
	for (int i = 1; i<=5; i++)
	{
		reminder = num % 10;
		reverse_num= reminder + reverse_num*10;
		num= num/10;
	}

		if (num1==reverse_num)
		{
			printf("The reversed of entered number is same as original number\n");
		}
		else
		{
			printf("The reversed of entered number is not same as original number\n");
		}

	
printf("The reversed of the entered number %d is %d\n",num1,reverse_num );

return 0;


}