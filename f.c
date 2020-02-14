#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
int fd,n,c=0;
char buff[100],ch[2];
fd=open(argv[1],O_RDONLY);
printf("enter no of lines");
scanf("%d",&n);
while(lseek(fd,0,1)!=-1)
{
read(fd,ch,1);
printf("%c",ch[0]);
if(ch[0]=='\n')
c++;
if(c>n-1)
break;
}
close(fd);
}
