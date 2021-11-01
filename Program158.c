#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>


int main()
{
	int fd=0;
	char fName[30];
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd=creat(fName,0777);
	
	if(fd==-1)
	{
		printf("unable to create file\n");
	}
	else
	{
		printf("file successfully created \n");
	}
	return 
	0;
}