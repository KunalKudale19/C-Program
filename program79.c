#include<stdio.h>
#include<stdlib.h>		//for using malloc

float Average(int Arr[],int iSize)
{
	register int iSum=0,i=0;
	float fResult=0.0f;
	
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	fResult=(float)iSum/(float)iSize;		//Explicit typecasting.			(18.0/4.0)
	return fResult;
}

int main()
{
	auto int iLength=0,i=0;
	int *ptr=NULL;
	float fRet=0.0f;
	
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
	
	fRet=Average(ptr,iLength);
	printf("\n Average is : %.2f\n",fRet);	//(.2f)width specifier
	free(ptr);
	return 0;
}
