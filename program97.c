#include<stdio.h>

int main()
{
	char Arr[11]="Marvellous";
	
	printf("%s\n",&Arr[0]);		//%s tumhala adress magto,mhanun &Arr use karto,printf madhe.
	printf("%s\n",&Arr[5]);
	printf("%s\n",&Arr[9]);
	printf("%s\n",Arr);
	printf("%s\n",Arr+5);
	printf("%s\n",Arr+9);
	return 0;
}