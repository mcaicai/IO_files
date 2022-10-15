#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc,char* argv[])
{
	int fd,ret;
	fd = open("test.txt",O_WRONLY|O_CREAT|O_TRUNC,0666);
	if(fd<0)
	{
		printf("open file err\n");
		return 0;
	}
	printf("success,fd=%d\n",fd);
	
	ret = close(fd);
	if(ret <0)
	{
		printf("close failed\n");
	}
	ret = close(fd);
	printf("close failed\n");

}
