// Any character is entered through the keyboard, write a program to 
// determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for various characters.


# include <stdio.h>

int main(){

	char letter;

	printf("please enter the characters\n");
	scanf("%c",&letter);
	int ascii_value = (int)letter;


	if (ascii_value >=65 && ascii_value<=90){
		printf("The entered character is in capital letter\n");
	}
	else if (ascii_value >=97 && ascii_value<=122)
	{
		printf("The entered character is in small case letter\n");
	}

		else if (ascii_value >=48 && ascii_value<=57)
	{
		printf("The entered character is in small case letter\n");
	
	}
			else if ((ascii_value >=0 && ascii_value<=47)|| (ascii_value >=58 && ascii_value<=64) 
				|| (ascii_value >=91 && ascii_value<=96)||(ascii_value >=123 && ascii_value<=127))
	{
		printf("The entered character is special character\n");
	}

return 0;



}