#include <stdio.h>
#include <stdbool.h>

int main()
{
int num,sum;
bool prime;
sum=0;

for(num =2; num<=10; num++){
	prime = true;
	

	for(int i=2; i<num;i++){
		
		if(num%i==0){
			prime = false;

			break;
		}
	}

			if(prime)
			{
			sum=num+sum;
			printf("%d\n", sum);
				/* code */
			}

		
	
	
}
return 0;

}

