#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
  {
     printf("I'am in exec.c program  \n");
     printf(" pid of exec.c program is %d \n",getpid()); //this exec.c process ID;
     char *args[]={"./fork",NULL}; // execution fork.c process
     execv(args[0],args);
     printf("I'am come back to exec.c program \n ");
     return 0;
   }
     
     

