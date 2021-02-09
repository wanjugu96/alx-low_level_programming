#include "holberton.h"
/**
* _islower-check lowercase
return: returns 1 if c is lowercase, returns 0 otherwise
*/
int _islower(int c) 
{
if (c >= 'a' && c <='Z')
{
return 1;
}
else
{
return(0);
}
}   
