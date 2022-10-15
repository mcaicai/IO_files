#include <stdio.h>
#include <dirent.h>

int main(int argc,char *argv[])
{	
	DIR* dp;
	struct dirent *dt;
	dp=opendir("/mnt/hgfs/qianrushi/hqyj-嵌入式2022/Level 04 文件IO/test_04");
	if(dp<0){
		perror("opendir err");
		return 0;
	}
	while((dt=readdir(dp))!=NULL)
	{
		printf("%s\n",dt->d_name);
	}
	closedir(dp);

}
