#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0,iRet=0;
	char fName[30];
	char Data[7];
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
	iRet=read(fd,Data,6);
	printf("%d bytes gets successfully read from file\n",iRet);
	printf("Data from file is \n");
	write(1,Data,iRet);
	close(fd);
	return 0;
}