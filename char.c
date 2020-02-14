#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp;
char ch;
int c=0,d=0;
fp=fopen("x.txt","r");
while(ch=fgetc(fp)!=EOF,c=getc(fp))
{
if(ch==' ')
{
d=d+1;
}
else
{
c=c+1;
}
}
printf("%d\n",d);
printf("%d\n",c+d);
fclose(fp);
}

