#include<stdio.h>

void Display(int);				//Declaration

int main()						//entry point function
{
	int iNo=0;						//Local variable
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	Display(iNo);				//Function call 
	
	return 0;				//return to OS
}


void Display(int iValue)				//Defination
{
	int i=0;							//loop counter
	
	for(i=1;i<=iValue;i++)
	{
		printf("Marvellous\n");
	}
}