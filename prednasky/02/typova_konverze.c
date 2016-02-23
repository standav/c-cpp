#include <stdio.h>

void main(void)
{
  	int i, j = 12;
  	float f1, f2 = 1.2;

  	i = (int) f2;      /* explicitni: i <- 1, 0.2 ztrata */
	printf ("%i\n", i);

  	f1 = i;            /* implicitni: f1 <- 1.0 */
	printf ("%.2f\n", f1);


  	f1 = f2 + (float) j; 	/* explicitni: f1 <- 1.2 + 12.0 */
	printf ("%.2f\n", f1);

  	f1 = f2 + j;       	/* implicitni: f1 <- 1.2 + 12.0 */
	printf ("%.2f\n", f1);
}
