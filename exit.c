#include <stdio.h> 
#include <errno.h> 
#include <string.h> 
#include <stdlib.h> 
  
int main () 
{ 
    FILE * fp; 
    fp = fopen ("a.txt", "rb"); 
  
    if (fp == NULL) 
    { 
        printf("Value of errno: %d\n", errno); 
        printf("Error opening the file: %s\n", 
                             strerror(errno)); 
        perror("Error printed by perror"); 
  
        exit(EXIT_FAILURE); 
        printf("It will not be printed\n"); 
    } 
  
    else
    { 
        fclose (fp); 
        printf("file found");
        exit(EXIT_SUCCESS); 
        printf("It will not be printed\n"); 
    } 
    return 0; 
}
