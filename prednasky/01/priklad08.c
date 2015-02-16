/*

  Podmíněný překlad

#define DEBUG

  Definice je možná pomocí parametru překladače

  gcc debug1.c -DDEBUG -o debug1

*/

int main ()
{
	int x;
#ifdef DEBUG	/* #ifndef */
	prinf (“debug: main -> volani funkce”);
#endif
	f(x);
}
