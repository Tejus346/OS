#include<stdio.h>
#include<time.h>
int main()
{
clock_t start_t,end_t,total_t;
int i;
start_t=clock();
printf("starting of the program ,start_t=%ld\n",start_t);
printf("going to scan a big loop,start_t=%d\n",start_t);
for(i=0;i<10000000;i++){
}
end_t=clock();
printf("End of the big loop,end_t=%d\n",end_t);
total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
printf("Exiting of the program..\n");
return (0);
}
