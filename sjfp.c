#include<stdio.h>
void main()
{
int n,t,i,j,h,at[10],bt[10],ct[10],wt[10],tat[10];
int act=0,atat=0,awt=0;
printf("enter no of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter arrival time,burst time");
scanf("%d",&at[i]);
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
}
}
}
ct[0]=bt[0];
for(i=0;i<n;i++)
{
ct[i]=ct[i-1]+bt[i];
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
}
printf("AT BT CT TAT WT \n");
for(i=0;i<n;i++)
{
printf("%d %d %d %d %d\n",at[i],bt[i],ct[i],tat[i],wt[i]);
}
for(i=0;i<n;i++)
{
act=act+ct[i];
awt=awt+wt[i];
atat=atat+tat[i];
}
printf("%d",act/n);
printf("%d",awt/n);
printf("%d",atat/n);
}
