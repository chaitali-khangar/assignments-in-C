#include <stdio.h>
int main()
{
	int num;

	for(num=1;num<=100;num++){

		if(num%3==0||num%5==0){


			printf("the number %d is deivisible of 3 or 5\n", num);
		}
	}
return 0;


}