#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main (int argc,char *argv[])
{
	FILE *fp;
	time_t ctime;
	struct tm *ctimesr;
	int linecount = 0;
	char buf[32];
	fp= fopen("test.txt","a+");
	if(fp==NULL) 
	{
		perror("fopen");
		return 0;
	}

	while(fgets(buf,32,fp)!=NULL){
	if(buf[strlen(buf)-1]=='\n'){
		linecount++;
	}
	}
	
	while(1){
	ctime = time(NULL);
//	printf("ctime=%d\n",(int)ctime);
	ctimesr=localtime(&ctime);
	printf("%d-%d-%d %d:%d:%d\n",ctimesr->tm_year+1900,ctimesr->tm_mon+1,ctimesr->tm_mday,
					ctimesr->tm_hour,ctimesr->tm_min,ctimesr->tm_sec);
	fprintf(fp,"%d-%d-%d %d:%d:%d\n",linecount,
					ctimesr->tm_year+1900,ctimesr->tm_mon+1,ctimesr->tm_mday,
					ctimesr->tm_hour,ctimesr->tm_min,ctimesr->tm_sec);
	fflush(fp);	
	sleep(1);
	linecount++;
	}
	fclose(fp);
	

}
