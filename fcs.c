#include<stdio.h>
void main()
{
int n,at[10],bt[10],ct[10],tat[10],wt[10],i,j,h,t;
char p[10];
float act=0,atat=0,awt=0;
printf("enter no.of process");
scanf("%d",&n);
printf("enter process");
for(i=0;i<n;i++)
{
scanf("%s",&p[i]);
}
printf("enter arrival times:");
for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
}
printf("enter burst times:");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
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
for(i=1;i<n;i++)
{
ct[i]=ct[i-1]+bt[i];
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
}
printf("arrival burst complete turnaround waiting\n");
for(i=0;i<n;i++)
{
act=act+ct[i];
atat=atat+tat[i];
awt=awt+wt[i];
printf("%d %d %d %d %d\n",at[i],bt[i],ct[i],tat[i],wt[i]);
}
printf("average complete time=%.2f\n",act/n);
printf("average turn around time=%.2f\n",atat/n);
printf("average waiting time=%.2f\n",awt/n);
}
