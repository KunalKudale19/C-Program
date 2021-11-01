#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0;
	char Arr[10];
	
	fd=open("LB17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	//0 from starting postion
	//1 from current position
	//2 from end of file
	
	lseek(fd,-5,2);
	read(fd,Arr,5);
	
	printf("Data from file is:\n");
	
	write(1,Arr,5);
	close(fd);
	return 0;
}