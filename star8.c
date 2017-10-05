#include <stdio.h>

int main(){
    int j,count;
    count =1;
	for (int i = 1; i <=5; i++)

	{
	
		for (int k= 5; k > i; k--)
		{
			printf(" ");
		}
		j =1;
		while(j<=count) {
			printf("*");
			j++;
		}
		
		printf("\n");
		count = count+2;
	}

	int a,count1;
	
	count1=9;

	for (int b = 1; b<=5; b++)
	{
		for (int c = 1 ; c<b; c++)
		{
			printf(" ");
		}
		a=1;
		while(a<=count1){

			printf("*");
			a++;
		}
		printf("\n");
		count1 = count1-2;
	}
	return 0;


}