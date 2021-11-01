#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0,iRet=0;
	char fName[30];
	char Buffer[1024];			//Mug
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd=open(fName,O_RDONLY);
	
	if(fd==-1)
	{
		printf("unable to open file\n");
		return -1;  	//return to os
	}
	else
	{
		printf("file successfully opened with FD : %d\n",fd);
	}
	
	printf("Data from file is :\n");
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iRet);
	}
	close(fd);
	return 0;
}