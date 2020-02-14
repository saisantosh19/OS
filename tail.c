#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp;
int n,c=0,k=0,i;
char ch;
fp=fopen("file1.txt","r");
printf("enter no of lines to be printed");
scanf("%d",&n);
while(((ch=getc(fp))!=EOF)
{
if(ch=='\n')
{
c=c+1;
}
}
rewind(fp);
while(k<(c-n))
{
if(ch=='\n')
{
k=k+1;
}
ch=getc(fp);
}
printf("%c",ch);
for(i=0;i<n;i++)
{
while((ch=getc(fp))!='\n')
{
printf("%c",ch);
}
printf("\n");
}
fclose(fp);
}
