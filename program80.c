#include<stdio.h>
#include<stdlib.h>		//for using malloc

int CountEven(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			iCnt++;
		}
	}
	return iCnt;
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
	
	iRet=CountEven(ptr,iLength);
	printf("\n Count of even elements are : %d\n",iRet);	//(.2f)width specifier
	free(ptr);
	return 0;
}
