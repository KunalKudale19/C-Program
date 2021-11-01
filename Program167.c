#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fdsrc=0,fddest=0,iRet=0;
	char fName1[30];
	char fName2[30];
	char Buffer[1024];			//Mug
	printf("Enter source file name\n");
	scanf("%s",fName1);
	
	fdsrc=open(fName1,O_RDONLY);
	
	if(fdsrc==-1)
	{
		printf("unable to open file\n");
		return -1;  	//return to os
	}
	else
	{
		printf("file successfully opened with FD : %d\n",fdsrc);
	}
	
	printf("Enter destination file name\n");
	scanf("%s",fName2);
	fddest=creat(fName2,0777);
	
	while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
		write(fddest,Buffer,iRet);
	}
	close(fdsrc);
	close(fddest);
	return 0;
}