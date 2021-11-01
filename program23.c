//Factorial

//input	:	3
//output : 3*2*1=6

//input	:	6
//output : 6*5*4*3*2*1=720

#include<stdio.h>

typedef unsigned long int UINT;

UINT Factorial(int);

int main()
{
	int iNo=0;
	UINT iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	
	printf("Factorial is : %ld\n",iRet);
	
	return 0;
}

UINT Factorial(int iValue)
{
	UINT iFact=1;
	int iCnt=0;
	
	if(iValue<0)							//updater
	{
		iValue=-iValue;
	}
	/*		//1     // 2     // 3 
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;	//4					//iSum+=iCnt;
	}
	return iFact;
	*/
	
	iCnt=1;
	while(iCnt<=iValue)
	{
		iFact=iFact*iCnt;
		iCnt++;
	}
	return iFact;
}