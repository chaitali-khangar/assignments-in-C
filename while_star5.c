#include <stdio.h>

int main(){
	int i,j,inner_space,outer_space;
	i=1;
	
	while(i<=5){
		outer_space= 4;
		while(outer_space>=i){
			printf(" ");
			outer_space--;
		}
		printf("*");
		inner_space=2;

		while (inner_space<=i){
			printf(" ");
			inner_space++;
		}
		inner_space=3;
		while (inner_space<=i){
			printf(" ");
			inner_space++;
		}
		if (i>1)
		{
			printf("*");
		}
		
		printf("\n");
		i++;

	}
	j=1;
	while (j<=4){
		outer_space=1;
		while (outer_space<=j){
			printf(" ");
			outer_space++;
		}
		printf("*");
		inner_space=3;
		while (inner_space>=j){
			printf(" ");
			inner_space--;
		}
		inner_space=2;
		while (inner_space>=j){
			printf(" ");
			inner_space--;
		}
		if (j<=3)
		{
			printf("*");
		}			
	
		printf("\n");
		j++;
	}

	return 0;

}