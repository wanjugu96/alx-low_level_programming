#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b)
{
  int x=a + b;
  return (x);
}
int op_sub(int a, int b)
{
  int y=abs(a - b);

  return (y);
}
int op_mul(int a, int b)
{
  int x=a * b;

  return (x);
}
int op_div(int a, int b)
{
  int x=a / b;

  return (x);
}
int op_mod(int a, int b)
{
  int x=a % b;
  return (x);
}

