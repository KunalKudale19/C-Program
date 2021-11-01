//input :3
//output: 3 2 1

//input: 7
//output : 7 6 5 4 3 2 1

#include<stdio.h>

void Display();					//Declaration

int main()						//entry point function
{
	Display();					//Function call 
	
	return 0;					//return to OS
}


void Display()					//Defination
{
	int i=0;					//loop counter
	
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
	}
}