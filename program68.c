#include<stdio.h>
void Display(int iRow,int iCol)
{
	register int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("Number of rows and columns should same\n");
		return;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol,j<i;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{	
	auto int iValue1=0,iValue2=0;
	
	printf("Enter number of rows:\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns:\n");
	scanf("%d",&iValue2);
	
	
	Display(iValue1,iValue2);
	return 0;
}