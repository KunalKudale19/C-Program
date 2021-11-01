#include<stdio.h>
#include<stdlib.h>		//for using malloc

int LastOccurence(int Arr[],int iSize,int iNo)
{
	int i=0,iIndex=-1;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			iIndex=i;
		}
	}
	return iIndex;
}
int main()
{
	auto int iLength=0,i=0,iValue=0;
	int iRet=0;
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
	
	iRet=LastOccurence(ptr,iLength,iValue);
	if(iRet==-1)
	{
		printf("\nThere is no such number\n");
	}
	else
	{
		printf("\nNumber is there at index : %d",iRet);
	}
	free(ptr);
	return 0;
}
