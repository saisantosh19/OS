#include<stdio.h>
int main()
{
int n,pid[100],bt[100],wt[100],tat[100],p[100],i,j,temp;
float avwt=0,avtat=0;
printf("enter the no of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter process %d",i+1);
scanf("%d",&pid[i]);
printf("enter process %d burst",i+1);
scanf("%d",&bt[i]);
printf("enter process %d priority",i+1);
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
}
for(j=i+1;j<n;j++)
{
if(p[i]>p[j])
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=pid[i];
pid[i]=pid[j];
pid[j]=temp;
}
}
wt[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
wt[i]=wt[i]+bt[i];
}
tat[i]=wt[i]+bt[i];
}
printf("process p\t bt\t wt\t tat\t");
for(i=0;i<n;i++)
{
printf("%d\t %d\t %d\t %d\t %d\t",pid[i],p[i],bt[i],wt[i],tat[i]);
avwt=avwt+wt[i];
avtat=avtat+tat[i];
}
avwt=avwt/n;
avtat=avtat/n;
printf("average waiting time:%f\n",avwt);
printf("\n average turn around time:%f",avtat);
}
