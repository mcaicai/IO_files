#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc,char* argv[])
{
	int fd,ret;
	char buf[32]= "hello world";
	char buf2[32]={0};
	fd = open("test.txt",O_RDWR|O_CREAT|O_APPEND,0666);
	if(fd<0)
	{
		printf("open file err\n");
		return 0;
	}
	printf("success ,fd = %d",fd);
	
	ret = write(fd, buf,strlen(buf));
	if(ret<0)
	{
		perror("write");
		goto end;
	}
	printf("count write = %d \n",ret);
	
	lseek(fd,0,SEEK_SET);
	
	ret = read(fd, buf2,32);
	if(ret<0)
	{
		perror("read");
		goto end;
	}
	buf[31] = '\0';
	printf("read buf2 = %s \n",buf2);
end:

close(fd);

	
}
