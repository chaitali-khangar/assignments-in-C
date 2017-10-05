#include <stdio.h>

int main()
{
	int sum,num;

	for(num=1;num<=1000;num++){
	sum=0;

	for(int i=1;i<num;i++){
		
		if(num%i==0){
			sum=i+sum;
		}
	}
			if(sum==num){

				printf("the number %d is perfect number\n",num);
			}
		}	
return(0);

}