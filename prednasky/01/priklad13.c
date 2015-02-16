#include <stdio.h>
#include <assert.h>

int main ()
{
	int i;

	scanf ("%d", &i);

	assert (i > 0);

	printf ("zadal jsi %d\n", i);
}
