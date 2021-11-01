#include<stdio.h>
#include<stdlib.h>		//for using malloc

int CountRange(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]>10)&&(Arr[i]<20))
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
	
	iRet=CountRange(ptr,iLength);
	printf("\n Count is : %d\n",iRet);	//(.2f)width specifier
	free(ptr);
	return 0;
}