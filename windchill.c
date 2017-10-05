// Wind chill factor is the felt temp on exposed skin due to wind.The wind chill temp is always lower than air temp
// and is calculated as par following formula:
// wcf=35.74+0.6215t+(0.4275t-35.75)*v^0.16
// where t is temp and v is wind vwlocity.
// write a program to receive value of t and v and calculate windchill faactor.

#include <stdio.h>
#include <math.h>

int main()
{
	float t,v,wcf;

	printf("Please enter the value of temp and velocity \n");
	scanf("%f%f",&t,&v);

		wcf=35.74+0.6215*t+(0.4275*t-35.75)* pow (v,0.16f);

		printf("WCF is %f\n",wcf);


return 0;
}