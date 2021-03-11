#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{

      

 int x=atoi(argv[3]);
int y= atoi(argv[1]);
 printf("argc =%d\n",argc);
 if (argc !=4)
    {
        printf("ERROR1\n");
        exit(98);
    }
  printf("x is =%d\n",x);
  printf("xrgv3 is =%s\n",argv[1]);
  printf("y is =%d\n",y);
   printf("yrgv2 is =%s\n",argv[3]);
 printf("answer is :%d\n",(get_op_func(argv[2]))(x,y));

 return(4);
}

