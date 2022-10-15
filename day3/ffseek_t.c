#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	fp=fopen("1.txt","w");
	if(fp==NULL)
	{
		perror("fopen");
		return 0;
	}
	fwrite("abcded",6,1,fp);
	fseek(fp,-2,SEEK_CUR);
	fwrite("vvv",3,1,fp);

}
