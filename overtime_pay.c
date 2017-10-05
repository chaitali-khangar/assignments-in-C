// Write a program to calculate overtime pay of 10 employees. 
// Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
// Assume that employees do not work for fractional part of an hour.


#include <stdio.h>

 int main(){
 	int otpay,hours,count;
 	count=1;

 	while (count<=10){
 		printf("Please enter the no of working hours\n");
 		scanf("%d",&hours);

 		if (hours>=40)
 		{
 			hours=hours-40;

 			otpay=hours * 12;
 			printf("the otpay for an employee is Rs %d\n",otpay );
 		}
 		else 
 		{
 			printf("Sorry, the employee is not eligible for an otpay\n");

 		}
 		count++;



 	}

return 0;

 }