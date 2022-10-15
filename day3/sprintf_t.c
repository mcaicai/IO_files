#include <stdio.h>

int main(int argc,char* argv[])
{
	char buf[100]={0};
	int year = 2022;
	int month =10;
	int day =1;
	int years = 2021;
	int months =11;
	int days =29;

	sprintf(buf,"%d-%d-%d",year,month,day);
	printf("%s\n",buf);
	
	sscanf(buf,"%d-%d-%d",&years,&months,&days);
	printf("%d-%d-%d\n",years,months,days);
	return 0;
}



