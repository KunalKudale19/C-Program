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


int Power(int iNo1,int iNo2)
{
	int iAns=1,iCnt=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	while(iCnt<iNo2)
	{
		iAns=iAns*iNo1;
		iCnt++;
	}
	return iAns;
}