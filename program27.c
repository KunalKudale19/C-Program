#include<stdio.h>		//Heasder file inclusion

void Display();			//Function declaration

int main()				//Entry point function
{
	Display();			//Function call
	
	return 0;
}

void Display()				//Function Defination
{
	int iNo=1064;
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;				
		printf("%d\n",iDigit);
		iNo=iNo/10;	
	}
}