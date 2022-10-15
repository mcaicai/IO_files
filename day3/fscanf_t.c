#include <stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	int year,month,day;
	fp=fopen("ftest.txt","r");
	if(fp==NULL){
		perror("fopen");
		return 0;
	}
	
	fscanf(fp,"%d-%d-%d",&year,&month,&day);
	printf("%d,%d,%d\n",year,month,day);
	fclose(fp);
	

}

