#include <stdio.h>

// int main (){
// 	for (int i = 1; i <=5; i++)
// 	{
// 		for (int j = 1; j <=i; j++)
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	return 0;

// }

int main (){
	int i,j;
	i=1;
	while (i<=5){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}