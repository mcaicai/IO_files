#include <stdio.h>
#include <sys/stat.h>

int main(int argc,char *argv[])
{
	int ret;
	ret = chmod("my_temp",0444);
	if(ret<0){
		perror("chmod");
		return 0;
	}
}
