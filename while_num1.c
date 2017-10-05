#include <stdio.h>

int main(){
	int num,rows,column,num1;
	rows = 1;
	while (rows<=5){
		column=1;
		num=rows;
		while (column<=rows){
			printf("%d",num);
			column++;
			num++;
		}	
		num1 = num-2;
		column=1;
		while(column<=rows-1){
			printf("%d",num1 );
			num1--;
			column++;
		}
		printf("\n");
		rows++;
	}
	return 0;
}