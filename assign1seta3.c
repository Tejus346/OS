#include<stdio.h>
#include<unistd.h>
int main(){
int f;
char *binarypath="/bin/ls";
char *arg1="-lh";
char *arg2="/home";
printf("creating a child process with fork...\n");
fork();
sleep(5);
printf("parent process is sleeping for 5 seconds\n");
execl(binarypath,binarypath,arg1,arg2,NULL);
printf("Sleep is now over \n");
return 0;
}