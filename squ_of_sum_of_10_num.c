#include <stdio.h>
int main()
{
	int num,sum,sq_sum;
	sum=0;
	for (num = 1; num<=10; num++){
		sum=num+sum;
		sq_sum=sum*sum;
		printf("%d\n", sq_sum);
		
	}


return 0;



}