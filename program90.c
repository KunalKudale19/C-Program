#include<stdio.h>
#include<stdlib.h>		//for using malloc
#include<stdbool.h>

bool CheckNumber(int Arr[],int iSize)
{
	int i=0;
	bool bAns=false;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			bAns=true;
			break;
		}
	}
	return bAns;
}
int main()
{
	auto int iLength=0,i=0;
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
	
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);		//for displaying data members
	}
	
	bRet=CheckNumber(ptr,iLength);
	if(bRet==true)
	{
		printf("\nNumber is there\n");
	}
	else
	{
		printf("\nNumber is not there\n");
	}
	free(ptr);
	return 0;
}
