// According to the Gregorian calendar, it was Monday on the date 01/01/1900. 
// If any year is input through the keyboard .
// write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main(){
	int yr,firstday,normaldays,leapyear,totaldays;
	printf("Please enter the year\n");
	scanf("%d",&yr);

	normaldays = (yr-1)*365;

	leapyear = (yr-1)/4 - (yr-1)/100+ (yr-1)/400;
	totaldays = normaldays+leapyear;
	firstday = totaldays%7;
	if (firstday==0)
	{
		printf("Monday\n");
	}
	if (firstday==1)
	{
		printf("Tuesday\n");
	}
	if (firstday==2
		{
		printf("wednesday\n");
	}
	if (firstday==3)
	{
		printf("Thursday\n");
	}
	if (firstday==4)
	{
		printf("Friday\n");
	}
	if (firstday==5)
	{
		printf("saturday\n");
	}
	if (firstday==6)
	{
		printf("sunday\n");
	}

return 0;

}