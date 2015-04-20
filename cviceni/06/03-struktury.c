#include <stdio.h>

/* 
   1. nepojmenovana struktura 
 */
struct {
	int vaha;
	int vyska;
} honza, pavel;

/* 
   2. pojmenovana struktura, nevyhoda: neustale pouzivani kl. slova struct
 */
struct miry
{
	int vaha;
	int vyska;
} helena;

/* 
   3. definice noveho datoveho typu 
 */
typedef struct {
	int vaha;
	int vyska;
} parametry;

/* 
   4. pojmenovani jak datoveho typu, tak struktury,
   vyhodne pro praci se spojovymi seznamy
 */
typedef struct vlastnosti
{
	int vaha;
	int vyska;
} nazev;

int main ()
{
	honza.vaha = 80;
	honza.vyska = 180;

	helena.vaha = 66;
	helena.vyska = 175;

	struct miry josef;
	josef.vaha = 90;

	parametry vaclav;
	vaclav.vaha = 77;


	parametry *oldrich = (parametry *)malloc (sizeof(parametry));

	/*
	  oldrich.vaha = 30;

	  nelze, protoze ukazatel je na promennou parametry, nikoliv parametry.vaha
	 */
	(*oldrich).vaha = 67;
	// ekvivalentni zapis
	oldrich->vaha = 68;

	return 0;
}
