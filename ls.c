#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<stdlib.h>
int main()
{
char dirname[10];
DIR*p;
struct dirent *d;
printf("enter directory name\n");
scanf("%s",dirname);
p=opendir(dirname);
if(p==NULL)
{
printf("cannot find directory");
exit(-1);
}
while(d=readdir(p))
{
printf("%s\n",d->d_name);
}
}
