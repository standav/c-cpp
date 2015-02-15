#Domácí úkoly

##1. domácí úkol

Napište program, který načte datový soubor obsahující předem neznámý počet reálných čísel seřazených tak, že na každém řádku souboru je právě jedno číslo. Čísla načtěte do dynamicky alokovaného pole a proveďte jednoduchou interpolaci číselné řady.

Příklad interpolace:

3 5 6

3 0 5 0 6

3 4 5 5.5 6

Vypočtená data uložte do (jiného) souboru.

##2. domácí úkol

Napište program, který implemetuje datovou strukturu zásobník (paměť typu LIFO).

Při inicializaci zásobniku nastavte jeho velikost a příznakem stanovte chování struktury v případě zaplnění zásobníku. Varianty chování jsou následující:

* při zaplněném zásobníku a vložení dalšího čísla na vrchol zásobníku zahodím číslo, které je zcela dole
* při zaplnění zásobníku inkrementuji jeho velikost (změna velikosti může být dočasná, po vyprázdnění zásobníku je možné zmenšit jeho velikost na původní, stanovenou při inicializaci)

Program by měl být schopen realizovat více zásobníků.

Implementujte funkce:
* push - vložení čísla do zásobníku, návratová hodnota 1 v případě, zásobník je po vložení čísla zaplněn, jinak 0;
* pop - vyjmutí čísla ze zásobníku, návratová hodnota 1 v případě pokusu o vyjmutí čísla z prázdného zásobníku, jinak 0.

Program by měl obsahovat ukázku funkce.


##3. domácí úkol

Napište program, který bude provádět základní maticové operace s daty uloženými v textovém souboru.

Textový soubor má následující strukturu (matice A):
```
A[0,0];A[0,1];...;A[0,M]

A[1,0];..........;A[1,M]

....

....

A[N,0];..........;A[N,M]
```
Program načte soubor (v ideálním případě uživatel zadá název souboru a případně i zvolí oddělovací znak) nebo více, podle plánované aplikace. Data se vloží do dynamicky alokovaného pole a provede se implementovaná operace; volba operace je celkem libovolná, nabízí se výpočet determinantu, násobení matic, atd. Výsledek stačí vytisknout na obrazovku.

Možným rozšířením je práce s daty uloženými v binárním souboru.
