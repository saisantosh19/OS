#include<stdio.h>
int main()
{
int i,j,n,time,remain,flag=0;quan_time;
int wait_time=0;tat=0;at[10];bt[10];rt[10];
printf("enter total process:");
scanf("%d",&n);
remain=n;
for(i=0;i<n;i++)
{
printf("enter arrival time and burst time for process %d");
scanf("%d",&at[count]);
scanf("%d",&bt[i]);
rt[i]=bt[i];
}
printf("enter quantum time");
scanf("%d",&quan_time");
printf("\n\nprocess\t turn around time \t waiting time\t");
for(time=0;i=0;remain!=0)
{
if(rt[i]<=quantum_time && rt[i]>0)
{
time=time+rt[count];
rt[count]=0;
flag=1;
}
else if(rt[i]>0)
{
rt[i]=rt[i]-quan_time;
time=time+quantum_time;
}
if(rt[i]==0 && flag==1)
{
remain--;
printf("p[%d]\t\t %d\t\t %d\n",count+1,time_at[i],time_at[i]-bt[i]);
wait_time=wait time+time_at[i]-bt[i];
tat=tat+time-at[i];
flag=0;
}
if(i==n-1)
i=1;
else if(at[i+1]<=time)
i++;
else
i=0;
}
printf("arg time=%f\n",wait_time*1.0/n);
printf(ard turn around time=%f",tat*1.0/n);
return 0;
}


