#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample()
{
if(fork()==0)
{
printf("Hello world from child \n");
printf("Child process id is: %d",getpid());
}
else if(fork()>0){
printf("Hi from Parent \n");
printf("parent process id is %d",getpid());
}
}
int main()
{
forkexample();
return 0;
}
