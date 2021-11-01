#include<stdio.h>
int Power(int,int);

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	iRet=Power(iValue1,iValue2);
	
	printf("Result is : %d\n",iRet);
	return 0;
}

int Power(int x,int y)
{
	int iMult=1,iCnt=0;
	if(x<0)
	{
		x=-x;
	}
	if(y<0)
	{
		y=-y;
	}
	
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iMult=iMult*x;
	}
	return iMult;
}
