#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
pid_t process;
int x=1;
process=vfork();
if(process==0)
{
printf("child process,id=%d,x=%d\n",process,++x);
}
else
{
printf("parent process,id=%d,x=%d\n",process,--x);
}
printf("%d",x);
exit(0);
}
