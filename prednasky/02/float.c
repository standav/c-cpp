#include <stdio.h>
#include <float.h>

int main()
{
	/* exponent / radix */
	printf ("FLT_RADIX\t%i\n", FLT_RADIX);
	/* pocet desetinnych mist */
	printf ("DBL_DIG\t\t%i\n", DBL_DIG);
	/* rozliseni (1.0 + epsilon != 1.0  */
	printf ("DBL_EPSILON\t%e\n", DBL_EPSILON);
	/* minimalni hodnota double */
	printf ("DBL_MAX\t\t%e\n", DBL_MAX);
	/* minimalni hodnota double */
	printf ("DBL_MIN\t\t%e\n", DBL_MIN);
	/* maximalni hodnota exponentu */
	printf ("DBL_MAX_10_EXP\t%i\n", DBL_MAX_10_EXP);
	/* minimalni hodnota exponentu */
	printf ("DBL_MIN_10_EXP\t%i\n", DBL_MIN_10_EXP);
}
