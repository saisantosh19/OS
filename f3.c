#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc,char*argv[])
{
int fd,m,n,i=0,lines=0,c=0,l=0;
char buff[100];
printf("enter no of lines");
scanf("%d",&m);
fd=open(argv[1],O_RDONLY);
n=read(fd,buff,sizeof(buff));
while(buff[i]!='\0')
{
if(buff[i]!='\0')
{
lines=lines+1;
}
i=i+1;
}
n=lines-m;
i=0;
while(l<n)
{
if(buff[i]='\n')
{
l=l+1;
}
i=i+1;
}
while(buff[i]!='\0')
{
printf("%c",buff[i]);
i=i+1;
}
close(fd);
}
