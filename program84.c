#include<stdio.h>
#include<stdlib.h>		//for using malloc

int Maximum(int Arr[],int iSize)
{
	int i=0,iMax=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
	}
	return iMax;
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
	
	iRet=Maximum(ptr,iLength);
	printf("\nLargest number is: %d\n",iRet);	//(.2f)width specifier
	free(ptr);
	return 0;
}
