#include<stdio.h>
#include<unistd.h>
int main()
{
char *args[]={"./exec_f1",NULL};
execv(args[0],args);
return 0;
}
