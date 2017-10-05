#include <stdio.h>

int main(){
	int n=1;

	for (int i = 1; i <=5; i++)
	{
		for (int k = 5; k>i; k--)
		{
			printf(" ");
		}

		for (int j = 1; j<=i; j++)
		{
			printf("%d",n );
			printf(" ");
			
         }
		printf("\n");
		n=n+1;
	}


return 0;


}