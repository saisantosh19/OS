#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
int fd,m,n,i,j;
char buf[100];
fd=open(argv[1],O_RDONLY);
n=read(fd,buf,sizeof(buf));
printf("enter line:");
scanf("%d",&m);
i=0;
while(m!=0)
{
if(buf[i]=='\n')
m--;
i++;
}
for(j=0;j<1;j++)
{
printf("%c\n",buf[j]);
close(fd);
}
}

	
	
	

