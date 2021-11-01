//input :3
//output: 3 2 1

//input: 7
//output : 7 6 5 4 3 2 1

#include<stdio.h>

void Display(int);						//Declaration

int main()								//entry point function
{
	int iNo=0;
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	Display(iNo);						//Function call 
	
	return 0;							//return to OS
}


void Display(int iValue)					//Defination
{
	int i=0;							//loop counter
	
	for(i=iValue;i>=1;i--)
	{
		printf("%d\n",i);
	}
}