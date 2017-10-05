#include <stdio.h>

int main(){
	int num,rows,column,space;
	rows=1;
	num=1;
	while (rows<=5){
		space=4;
		while (space>=rows){
			printf(" ");
			space--;
		}
		
		column=1;
		while (column<=rows){
			printf("%d",num );
			printf(" ");
			column++;
			
		}

		num++;
		printf("\n");
		rows++;
	}
	return 0;

}