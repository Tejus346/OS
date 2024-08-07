#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int AT[10],BT[10],temp[10];
int i, smallest,count=0,time,n;
double WT=0,TT=0,end;
float avg_wt,avg_tt;
printf("\nEnter the total number of processes");
scanf("%d",&n);
printf("\nenter details of %d process\n",n);
for(i=0;i<n;i++){
printf("\nenter arrival time of process:\t");
scanf("%d",&AT[i]);
printf("\n enter buirst time:\t");
scanf("%d",&BT[i]);
temp[i]=BT[i];
}
BT[9]=9999;
for(time=0;count!=n;time++){
smallest=9;
for(i=0;i<n;i++){
if(AT[i]<=time && BT[i]<BT[smallest] && BT[i]>0)
{
smallest=i;
}
}
BT[smallest]--;
if(BT[smallest]==0)
{
count++;
end=time+1;
WT=WT+end-AT[smallest]-temp[smallest];
TT=TT+end-AT[smallest];
}
}
avg_wt=WT/n;
avg_tt=TT/n;
printf("average of waiting time:\t%lf\n",avg_wt);
printf("average of turn around time time:\t%lf\n",avg_tt);
return 0;
}
