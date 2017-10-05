#include <stdio.h>

int main(){
	int i,j,k;
	i=1;
	while (i<=5){
		k=4;
		while (k>=i){
			printf(" ");
			k--;
		}
		j=1;
		while (j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
return 0;

}

