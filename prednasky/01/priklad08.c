/*

  Podmíněný překlad

#define DEBUG

  Definice je možná pomocí parametru překladače

  gcc priklad08.c -DDEBUG -o debug

*/


int main ()
{
	int x;
#ifdef DEBUG	/* #ifndef */
	prinf (“debug: main -> volani funkce”);
#endif
	f(x);
}
