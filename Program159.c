#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0;
	char fName[30];
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open file\n");
	}
	else
	{
		printf("file successfully opened with FD : %d\n",fd);
	}
	return 
	0;
}