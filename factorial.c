// Write a program to find the factorial value of any number entered through the keyboard.

#include <stdio.h>

// int main(){
// 	int num,num1,result;
// 	result = 1;


// 	printf("please enter the integer number\n");
// 	scanf("%d",&num);
// 	num1=num;

// 	while (num>0)
// 	{

// 		result = num *result;
		
		
// 		num--;
// 	}
// 	printf("factorial of %d is %d\n",num1,result );

	
// 	return 0;


// }


int main(){
	int num,num1,result;
	result = 1;
	

	printf("Please enter the integer number\n");
	scanf("%d",&num);

	num1=num;

	for (int i = num; i >0; i--)
	{
		result = num * result;

		num--;
	}
	printf("factorial of %d is %d\n",num1,result );
	return 0;
}
