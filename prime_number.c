#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num;
	bool prime;
for (num=1;num<=100;num++){
	prime=true;
	
	for (int i=2;i<num;i++){

		if (num%i==0){
			prime=false;
			break;
		}
	}
		if (prime==true){

			printf("the entered number %d is prime number\n",num);
		}

		
	}
return 0;



}
