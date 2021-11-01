#include<stdio.h>		//Heasder file inclusion

int CountDigit(int);			//Function declaration

int main()				//Entry point function
{
	int iValue=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue);			//Function call
	printf("Number of digits are %d\n",iRet);
	return 0;
}

int CountDigit(int iNo)				//Function Defination
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;				
		iCnt++;
		iNo=iNo/10;	
	}
	return iCnt;
}	