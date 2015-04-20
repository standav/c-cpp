/*
  zpracovani zdrojoveho kodu preprocesorem, vyzkousej mezeru mezi SQR a (x)

  gcc -E priklad03.c 
*/

#define	SQR (x)	(x*x)

y = SQR(n);

x = SQR("ahoj");
