#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
void main(int p,char *b[])
{
pid_t pid;
pid=vfork();
if(pid<0)
{
printf("fork error");
exit(1);
}
if(pid!=0)
{
printf("parent is %d and child is %d\n",getpid(),pid);
}
else
{
printf("child is %d,parent is %d\n",getpid(),getpid());
}
}
