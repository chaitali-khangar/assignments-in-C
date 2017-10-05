#include <stdio.h>

int main(){
	int rows,space,column;
	rows =1;
	while (rows<=5){
		space = 4;
		while (space>=rows){
			printf(" ");
			space--;
		}
		column = 1;
		while (column<=rows){
			printf("*");
			printf(" ");
			column++;
		}
		printf("\n");

		rows++;
	}

	return 0;
}