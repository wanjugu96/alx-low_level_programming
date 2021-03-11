#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{
 int x=atoi(argv[3]);
int y= atoi(argv[1]);

 if (argc !=4)
    {
        printf("ERROR1\n");
        exit(98);
    }
 
 printf("%d\n",(get_op_func(argv[2]))(x,y));

 return(0);
}

