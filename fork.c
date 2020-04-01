#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
  {
     printf(" I'am in fork program process ID  \n");
     int pid ;  //this variable to hold process ID;
     pid=fork(); // create child process
     if(pid==0)// this process is child (process ID of child =0 allways to parent)
       { 
         printf("I'am child fork with process ID %d \n",getpid());
         int x=10,y=5,z=x*y;
         printf(" z=x*y = %d \n ",z);
       }
     if(pid>0)// this process is parent 
       { 
         printf("I'am parent fork with process ID %d \n",getpid());
         for (int i=0;i<10;i++)
           {
             printf(" i = %d \n ",i);
           }
       }
     return 0;
   }
     
     

