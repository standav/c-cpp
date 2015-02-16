/*
  oddeleny preklad
  gcc priklad7.c definice1.c 
*/

#include <stdio.h>

int local = 7;

int main ()
{
  printf ("local: %d, global: %d", local, global);
  return 0;
}
