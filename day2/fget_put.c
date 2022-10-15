#include <stdio.h>

int main(int argc,char *argv[]){
	FILE *fp;
	int rec;
	fp = fopen("1.txt","a+");
	if(fp == NULL){
	perror("fopen");
	return 0;
	}
	rec = fgetc(fp);
	printf("Get char %c\n",rec);
	rec = fgetc(fp);
	printf("Get char %c\n",rec);
	
	rec = getchar();
	printf("Get Your %c\n",rec);
	int wrc	= 'w';
	rec = fputc(wrc,fp);	
	
	if(rec == -1){
		perror("fputc");
		fclose(fp);
		return 0;
	}

	fclose(fp);
} 
