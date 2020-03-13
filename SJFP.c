#include<stdio.h>
int main()
{
int at[20],bt[20],p[20],ct[20],wt[20],tat[20],i,j,h,t,n,total=0,pos,temp;
float awt=0,atat=0;
printf("enter no of processes:");
scanf("%d",&n);
printf("enter arrival time:");
printf("enter burst time");
for(i=0;i<n;i++)
{
printf("%d",i+1);
scanf("%d",&at[i]);
scanf("%d",&bt[i]);
p[i]=i+1;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(at[i]<at[j])
{
t=at[i];
at[i]=at[j];
at[j]=t;
h=bt[i];
bt[i]=bt[j];
bt[j]=h;
ct[0]=bt[0];
}
}
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(i=1;i<n;i++)
{
wt[i]+=bt[j];
total+=wt[i];
}
awt=(float)total/n;
total=0;
printf("\n process\t bursttime\t waitingtime\t turnaroundtime\n");
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
total=tat[i];
printf("\n p %d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
}
atat=(float)total/n;
printf("\n\n average waiting time=%f\n",awt);
printf("\n\n average turnaround time=%f\n",atat);
}
}

