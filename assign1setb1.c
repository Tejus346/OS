#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
int pid,retnice;
printf("press DEL to stop process");
pid=fork();
for(;;)
{
if(pid==0)
{
retnice=nice(-5);
printf("child gets higher CPU priority %d\n",retnice);
sleep(1);
}
else{
retnice=nice(4);
printf("parent gets lower CPU priority %\n",retnice);
sleep(1);
}
}
}
