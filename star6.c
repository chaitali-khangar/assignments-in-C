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
return 0;



}