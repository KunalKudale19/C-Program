#include<stdio.h>		//Heasder file inclusion

int Display(int);			//Function declaration

int main()				//Entry point function
{
	int iValue=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);			//Function call
	printf("Summation of all digits of entered number is %d\n",iRet);
	return 0;
}

int Display(int iNo)				//Function Defination
{
	int iDigit=0;
	int iAns=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;				
		iAns=iAns+iDigit;
		iNo=iNo/10;	
	}
	return iAns;
}	