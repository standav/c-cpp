/*
	neprilis vhodne pouziti pole uvnitr struktury
 */

#include <stdio.h>

typedef struct {

	int prvky[5];

} pole;

void tisk (pole x)
{
	/*
		volani funkce hodnotou, v pripade struktury se prenasi cela promenna
		=> vytvari se kopie v zasobniku
	*/

	int i;

	for (i = 0; i < sizeof(x.prvky)/sizeof(int); i++)
	{
		printf("%d\n", x.prvky[i]);
	}
}

int main ()
{
	int i;

	pole a;
	a.prvky[0] = 10;
	a.prvky[1] = 20;

	for (i = 0; i < sizeof(a.prvky)/sizeof(int); i++)
	{
		printf("%d\n", a.prvky[i]);
	}

	puts ("volani tisk");
	tisk (a);

	return 0;
}
