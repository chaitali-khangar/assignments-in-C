// Two numbers are entered through the keyboard. 
// Write a program to find the value of one number raised to the power of another.

# include <stdio.h>

int main(){
	int num1,num2,num,power;

printf("Please enter two interger number\n");
scanf("%d%d",&num1,&num2);

	num=num2;
	power=1;

while (num2>=1){
		power = num1 * power;
		num2--;
	}
	printf("the %dth power of the %d is %d\n",num,num1,power );
	return 0;

}