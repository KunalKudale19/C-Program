#include<stdio.h>		//Heasder file inclusion

void Display(int);			//Function declaration

int main()				//Entry point function
{
	int iValue=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	Display(iValue);			//Function call
	
	return 0;
}

void Display(int iNo)				//Function Defination
{
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;				
		printf("%d\n",iDigit);
		iNo=iNo/10;	
	}
}	