#include <stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	int year = 2022;
	int month = 10;
	int day = 1;

	fp=fopen("ftest.txt","w");

	if(fp==NULL)
	{
		perror("fopen");
		return 0;
	}

	fprintf(fp,"%d-%d-%d\n",year,month,day);	
	fclose(fp);

}



