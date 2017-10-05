#include <stdio.h>

int main(){
	 int count;
	 
	 for (int i = 1; i <=5 ; i++)
	 {
	 	for (int j = 5; j>i; j--)
	 	{
	 		printf("  ");
	 	}
	 	count=1;
	 	while (count<=i){

	 		printf("%d", count);
	 		count++;
	 	}
	 	

	 		
	 	
	 	printf("\n");
	 	
	 }

	return 0;
}

