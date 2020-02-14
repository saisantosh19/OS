#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp2,*fp3;
int arr[100],i,n;
printf("enter n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&arr[i]);
}
fp2=fopen("x.txt","w");
fp3=fopen("y.txt","w");
for(i=0;i<=n;i++)
{
if(arr[i]%2==0)
{
fputc(arr[i],fp2);
}
else
{
fputc(arr[i],fp3);
}
}
fclose(fp2);
fclose(fp3);
}

