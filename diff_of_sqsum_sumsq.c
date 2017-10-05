#include <stdio.h>

int main()
{
	int sum,squ_num,sum1,sq_sum,diff_num;
sum=0;
sum1=0;
	for(int num=1;num<=10;num++){
		
		squ_num = num*num;
		sum=squ_num+sum;
		

	}
		for (int num = 1; num<=10; num++){
		sum1=num+sum1;
		sq_sum=sum1*sum1;
		
		
	}

diff_num = sq_sum - sum;
printf("%d\n", diff_num);

return 0;




}