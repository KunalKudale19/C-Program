#include<stdio.h>
#include<stdlib.h>		//for using malloc
#include<stdbool.h>		//for using Boolean datatype

bool CheckNumber(int Arr[],int iSize,int iNo)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	auto int iLength=0,i=0,iValue=0;
	bool bRet=false;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);		//accepting data
	}
	printf("Enter number to be searched : \n");
	scanf("%d",&iValue);
		
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);		//for displaying data members
	}
	
	bRet=CheckNumber(ptr,iLength,iValue);
	if(bRet==true)
	{
		printf("\n%d is there\n",iValue);
	}
	else
	{
		printf("\n%d is not there\n",iValue);
	}
	free(ptr);
	return 0;
}
