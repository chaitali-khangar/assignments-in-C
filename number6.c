# include <stdio.h>
# include <math.h>

int main(){
	int num,reminder,j,k;
	j=4;
	for (int i = 0;i<=4; i++){
		num = pow(11,i);
		k=0;
		while (k<=j){
			printf(" ");
			k++;
		}

		while (num>0){
			printf(" ");
			reminder = num%10;
			printf("%d",reminder);
			num=num/10;
		}
		j--;
		printf("\n");
		}
		
		return 0;	
}