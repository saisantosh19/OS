#include<stdio.h>
int main()
{
int n,t,i,j,h,ar[10],bt[10],ct[10],tat[10],wt[10];
int act=0,awt=0,att=0;
printf("enter no of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter burst time,arrival time");
scanf("%d",&bt[i]);
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(bt[i]<bt[j])
{
t=bt[i];
bt[i]=bt[j];
bt[j]=t;
h=ar[i];
ar[i]=ar[j];
ar[j]=h;
}
}
}
ct[0]=bt[0];
for(i=1;i<n;i++)
{
ct[i]=ct[i-1]+bt[i];
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-ar[i];
wt[i]=tat[i]-bt[i];
}
printf("AR BT CT TAT WT\n");
for(i=0;i<n;i++)
{
printf("%d %d %d %d %d \n",ar[i],bt[i],ct[i],tat[i],wt[i]);
}
for(i=0;i<n;i++)
{
act=act+ct[i];
awt=awt+wt[i];
att=att+tat[i];
}
printf("%d",awt/n);
printf("%d",att/n);
printf("%d",act/n);
}
