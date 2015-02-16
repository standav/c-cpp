/*
  oddeleny preklad

  gcc priklad11.c definice.c -Wall 
*/

#include <stdio.h>

int local = 7;

int main ()
{
  printf ("local: %d, global: %d", local, global);
  return 0;
}
