#include <stdio.h>

int main(){
	int i,j,k,count;
	i=1;
	while (i<=5){
		k=4;
		while(k>=i){
			printf(" ");
			k--;
		}
		if(i==1){
			j = 1;
		}else{
			j = 2*i-1;
		}
		count =1 ;
		while (count<=j){
			printf("*");
			// printf(" ");
			count++;
		}
		printf("\n");

		i++;
	}
return 0;
}