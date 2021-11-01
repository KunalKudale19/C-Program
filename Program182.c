#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0,iRet=0;
	char fName[20];
	
	printf("Enter name of file\n");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	iRet=lseek(fd,0,2);
	
	printf("File size is : %d\n",iRet);
	close(fd);
	return 0;
}