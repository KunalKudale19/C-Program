//accept number from user and display that number of * on screen.
//input : 4
//output: * * * *
//input: 2
//output: * *

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("*\t");
	}
}
int main()
{
	int iValue=0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	Display(iValue);
	
	return 0;
}