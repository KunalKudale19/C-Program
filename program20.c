//Factorial

//input	:	3
//output : 3*2*1=6

//input	:	6
//output : 6*5*4*3*2*1=720

#include<stdio.h>

unsigned long int Factorial(int);

int main()
{
	int iNo=0;
	unsigned long int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	
	printf("Factorial is : %ld\n",iRet);
	
	return 0;
}

unsigned long int Factorial(int iValue)
{
	unsigned long int iFact=1;
	int iCnt=0;
	
	if(iValue<0)							//updater
	{
		iValue=-iValue;
	}
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;						//iSum+=iCnt;
	}
	return iFact;
}