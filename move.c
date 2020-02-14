#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
void main()
{
int fd,fd1,n;
char buff[100];
fd=open("file1.txt",O_RDONLY);
n=read(fd,buff,sizeof(buff));
fd1=open("file3.txt",O_WRONLY);
write(fd1,buff,n);
remove("file1.txt");
close(fd);
close(fd1);
}
