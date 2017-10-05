#include <stdio.h>

int main(){
int a,b,c,e,f;
int count = 0;

for ( a = 1; a<= 5; a++){
	
	for (b = 1; b<=5; b++){

	
		for (c = 1; c<=5 ; c++){
			for (e=1 ; e<=5 ; e++){

				for (f = 1; f <=5; f++){
				      printf("%d%d%d%d%d\n", a,b,c,e,f);
			           count++;
				}
			}


		}
		
	}
}
printf("count of combination of 123 is %d\n", count);
return 0;


}