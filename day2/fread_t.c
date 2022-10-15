#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[16];
	int age;
	char sex[8];
};

int main(char *argv[],int argc)
{
	struct student stu;
	struct student stu2;
	FILE *fp;
	size_t ret;

	fp=fopen("1.bin","w");
	if(fp==NULL){
	perror("fopen");
	return 0;
	}

	strcpy(stu.name,"zhangsan");
	stu.age = 20;
	strcpy(stu.sex,"male");

	ret = fwrite(&stu,sizeof(stu),1,fp);
	if(ret==-1){
		perror("fwrite");
	goto end;
	}else{
		printf("write struct student success\n");
	}

	fclose(fp);
	fp=fopen("1.bin","r");
	if(fp==NULL){
		perror("fopen");
		return 0;
	}
	
	ret=fread(&stu2,sizeof(stu),1,fp);
	if(ret==-1){
		perror("fread");
		goto end;
	}
	printf("name = %s,age =%d,sex=%s\n",stu2.name,stu2.age,stu2.sex);
end:
	fclose(fp);	
}
