

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int res;

if (argc - 1 == 2)
  {
res=atoi(argv[1])*atoi(argv[2]);
printf("%d\n",res);
}

 else
   {
printf("Error\n");
}
return (0);
}
