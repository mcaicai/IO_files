#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
   FILE *fp;
   fp= fopen("1.txt","w");
   if(fp==NULL){
      perror("fopen");
      return 0;
   }

   fwrite("abcdef",7,1,fp);
   fflush(fp);

   while(1){
	sleep(1);
   }
}

	
