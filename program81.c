#include<stdio.h>
#include<stdlib.h>		//for using malloc

int SumOdd(int Arr[],int iSize)
{
	int i=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2!=0)
		{
			iSum=iSum+Arr[i];
		}
	}
	return iSum;
}

int main()
{
	auto int iLength=0,i=0,iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);		//accepting data
	}
	
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);		//for displaying data members
	}
	
	iRet=SumOdd(ptr,iLength);
	printf("\n Sum of Odd number is: %d\n",iRet);	//(.2f)width specifier
	free(ptr);
	return 0;
}
