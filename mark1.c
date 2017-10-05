#include <stdio.h>

int main(){
int m,sum;
float array[5],percentage;
sum = 0;
for (m =1; m<=5; ++m)
{
	printf("please enter the marks out of 100\n");
	scanf("%f", &array[m]);
	
}
for (m = 1; m<=5; m++)
{
	
	
	sum = sum + array[m];
}
percentage = (sum/500.0) * 100;

printf("sum is %d and percentage is %f\n", sum,percentage);

return 0;

}