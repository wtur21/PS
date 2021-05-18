// Programowanie strukturalne

// Praca domowa 9

// (cw. 15-05-21r.)

//******************************************************************************************************

// Zadanie 7.2.7

#include <stdio.h>
#include <stdlib.h>

struct zespolone {
double re;
double im;
};

struct zespolone dodaj(struct zespolone a, struct zespolone b)
{
struct zespolone suma;
suma.im = a.im + b.im;
suma.re = a.re + b.re;
return suma;
}

int main(void)
{
struct zespolone comp1;
struct zespolone comp2;
comp1.re = 5.21;
comp1.im = 1.08;
comp2.re = 9.21;
comp2.im = 2.54;
dodaj(comp1, comp2);
printf("%.2lf + %.2lfi", dodaj(comp1, comp2));
return 0;
}

//******************************************************************************************************

// Zadanie 7.2.8

#include <stdio.h>
#include <stdlib.h>

struct student {
char imie[50];
char nazw[50];
char adres[200];
char pesel[11];
char kierunek[50];
int nr_leg;
};

void dane(struct student *a)
{
scanf("%s", &a->imie);
scanf("%s", &a->nazw);
scanf("%s", &a->adres);
scanf("%s", &a->pesel);
scanf("%s", &a->kierunek);
scanf("%d", &a->nr_leg);
}

int main(void)
{
struct student jan;
struct student *st;
st = &jan;
dane(st);
// test
printf("Imie: %s\n", jan.imie);
printf("Nazwisko: %s\n", jan.nazw);
printf("Adres: %s\n", jan.adres);
printf("PESEL: %s\n", jan.pesel);
printf("Kierunek: %s\n", jan.kierunek);
printf("Nr legitymacji: %d\n", jan.nr_leg);
return 0;
}

//******************************************************************************************************

// Zadanie 7.2.15

enum zwierzeta{pies, kot, papuga, chomik, ryby};

//******************************************************************************************************

// Zadanie 7.2.16

#include <stdio.h>
#include <stdlib.h>

enum polaczenie{nawiazane, nienawiazane, trwa_laczenie};

struct komputer{
enum polaczenie stan_pol;
char ip[15];
char nazw_wlasc[40];
};

void wyswietl(struct komputer a)
{
if (a.stan_pol == 0)
    printf("Polaczenie: nawiazane\n");
else if (a.stan_pol == 1)
    printf("Polaczenie: nienawiazane\n");
else if (a.stan_pol == 2)
    printf("Polaczenie: trwa_laczenie\n");
printf("Adres IP: %s\n", a.ip);
printf("Nazwa wlasciciela: %s\n", a.nazw_wlasc);
}

int main(void)
{
struct komputer komp1 = {trwa_laczenie, "11.22.333.444", "Wiktor"};
wyswietl(komp1);
return 0;
}

//******************************************************************************************************

// Zadanie 7.3.21



//******************************************************************************************************

// Zadanie 7.3.22
