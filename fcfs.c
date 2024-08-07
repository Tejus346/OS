#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int AT[10],BT[10],WT[10],TT[10],i,j,n,p[10];
int burst=0,comp_t;
char ch='-';
float avg_wt,avg_tt,total=0;
time_t t;
printf("enter number of processes:\n");
scanf("%d",&n);
printf("enter arrival time of processes:\n");
printf("AT\n");
for(i=0;i<n;i++){
scanf("%d",&AT[i]);
}
printf("enter burst time of first process:\n");
scanf("%d",&BT[0]);
srand((unsigned) time(&t));
for(i=1;i<n;i++)
BT[i]=rand()%10;
printf("burst time generated using random funtion\n");
for(i=0;i<n;i++)
printf("%d\n",BT[i]);
for(int i=0;i<n;i++){
if(i==0)
WT[i]=AT[i];
else
WT[i]=burst-AT[i];
burst+=BT[i];
total+=WT[i];
}
avg_wt=total/n;
comp_t=0;
total=0;
//char ch="-";
printf(" ");
for(i=0;i<n*8;i++){
printf("%c",ch);
}
printf("\n");
for(i=0;i<n+1;i++){
printf("|         ");
}
printf("\n");
for(i=0;i<n+1;i++){
printf("|         ");
}
printf("\n");
printf(" ");
for(i=0;i<n*8;i++){
printf("%c",ch);
}
printf("\n0 \t");
for(i=0;i<n;i++){
comp_t+=BT[i];
TT[i]=comp_t-AT[i];
total+=TT[i];
printf("%d\t",comp_t);
}
avg_tt=total/n;
printf("\nprocess,waiting_time,turn_around_time\n");
for(int i=0;i<n;i++){
printf("\n %d\t\t%d\t\t%d\n",i+1,WT[i],TT[i]);
}
printf("Average waiting time is:%f\n",avg_wt);
printf("Average turn around time is:%f\n",avg_tt);
return 0;
}