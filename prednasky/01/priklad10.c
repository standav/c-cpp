/*
  zpracovani zdrojoveho kodu preprocesorem

  gcc -E priklad10.c 
*/

#define printerror(n)	printf (#n "\n")

int main ()
{
	printerror (Chyba 1);
	printerror ("Chyba 2");
}
