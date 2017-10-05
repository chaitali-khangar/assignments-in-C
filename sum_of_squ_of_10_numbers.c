#include <stdio.h>

int main()
{
	int sum,squ_num;
	
sum=0;
	for(int num=1;num<=10;num++){
		
		squ_num = num*num;
		sum=squ_num+sum;
		printf("%d\n",sum );

	}

return 0;




}