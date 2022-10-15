#include <stdio.h>

int main(char *argv[],int argc)
{
	FILE *fp;
	char *ret;
	char buff[100];
	fp=fopen("1.txt","r");
	if(fp==NULL){
		perror("fopen ");
		return 0;
	}

	ret = fgets(buff,5,fp);
	if(ret == NULL){
	perror("fget");
	fclose(fp);
	return 0;
	}
	printf("buff=%s\n",buff);


}
