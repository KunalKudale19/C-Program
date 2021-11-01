//input :3
//output: 1  2 3

//input: 7
//output : 1 2 3 4 5 6 7

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
	int i=0;		//loop counter
	
	if(iValue==0)
	{
		printf("Your entered number is 0\n");
		return;
	}
	if(iValue<0)		//input updater
	{
		iValue=-iValue;
	}
	
	for(i=1;i<=iValue;i++)
	{
		printf("%d\n",iValue);
	}
}