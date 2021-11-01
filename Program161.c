#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0,iRet=0;
	char fName[30];
	char Data[]="Marvellous Infosystems";
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open file\n");
		return -1;  	//return to os
	}
	else
	{
		printf("file successfully opened with FD : %d\n",fd);
	}
	iRet=write(fd,Data,10);
	printf("%d bytes gets successfully written in the file\n",iRet);
	return 0;
}