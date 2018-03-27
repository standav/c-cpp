/*
Necht na vstupu programu je textovy soubor (jedno, jestli na std. vstupu nebo je argumentem). Napiste program, ktery urci cetnost slov v textu.

Cetnost:
a) case sensitive: Ahoj vs. ahoj - dve ruzna slova
b) case insensitive: Ahoj vs ahoj - jedno slovo

Velmi dlouhy text ve velmi dlouhem souboru.

$ prg -c 0 < text.txt	- case insensitive
$ prg -c 1 < text.txt   - case sensitive

velmi 	2x
dlouhy 	1x
...

Velmi	1x
velmi 	1x
...

dodatek:

argument -s 
0 - nedeje se nic
1 - radime vypis podle cetnosti
2 - radime vypis podle prvniho pismene slova

*/


