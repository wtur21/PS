// Zad.1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miesiace.h"

int main(void)
{
printf("%d", suma("grudzien"));
return 0;
}

int suma(char nazw[])
{
    int i, i_2, suma;
    for(i = 0; i < 12; i++)
        if(strcmp(nazw, mies[i].nazwa) == 0)
               break;
    for(suma = 0, i_2 = 0; i_2 <= i; i_2++)
        suma = suma + mies[i_2].liczba_d;
    return suma;
}

// Plik "miesiace.h":

#include <stdio.h>
#include <stdlib.h>

struct miesiac {
    char nazwa[30];
    char skrot[3];
    int liczba_d;
    int num_mies;
};

struct miesiac mies[12] = {
{"styczen", "sty", 31, 1},
{"luty", "lut", 28, 2},
{"marzec", "mar", 31, 3},
{"kwiecien", "kwi", 30, 4},
{"maj", "maj", 31, 5},
{"czerwiec", "cze", 30, 6},
{"lipiec", "lip", 31, 7},
{"sierpien", "sie", 31, 8},
{"wrzesien", "wrz", 30, 9},
{"pazdziernik", "paz", 31, 10},
{"listopad", "lis", 30, 11},
{"grudzien", "gru", 31, 12}
};

//*************************************************************************************************************

// Zad. 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miesiace.h"

int main(void)
{
int i, i_2, suma, dni, rok;
char nazw[30];
printf("Podaj dzien: ");
scanf("%d", &dni);
printf("Podaj nazwe lub skrot trzyliterowy miesiaca: ");
scanf("%s", &nazw);
printf("Podaj rok: ");
scanf("%d", &rok);

if(strlen(nazw) == 3)
{
for(i = 0; i < 12; i++)
    if(strcmp(nazw, mies[i].skrot) == 0)
            break;
    for(suma = 0, i_2 = 0; i_2 <= i; i_2++)
        suma = suma + mies[i_2].liczba_d;
    suma = suma - (mies[i].liczba_d - dni);
    if(rok % 4 == 0 && mies[i].num_mies >= 2)
        suma = suma + 1;

    printf("\nSuma dni w roku wlaczajac podany dzien: %d\n", suma);
}
else if(strlen(nazw) > 3)
{
    for(i = 0; i < 12; i++)
        if(strcmp(nazw, mies[i].nazwa) == 0)
            break;
    for(suma = 0, i_2 = 0; i_2 <= i; i_2++)
        suma = suma + mies[i_2].liczba_d;
    suma = suma - (mies[i].liczba_d - dni);
    if(rok % 4 == 0 && mies[i].num_mies >= 2)
        suma = suma + 1;
    printf("\nSuma dni w roku wlaczajac podany dzien: %d\n", suma);
}
else
{
    printf("\nNiepoprawna nazwa lub skrot miesiaca\n");
    exit(0);
}
return 0;
}

// Plik "miesiace.h" taki jak w zadaniu 1

// **************************************************************************************

// Zad. 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100

struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};

void sortuj(struct ksiazka bibl[])
{
    int n, m;
    char temp[150];
    char temp1[150];
    for(n = 0; n <= sizeof(bibl); n++)
    {
        for(m = n + 1; m <= sizeof(bibl); m++)
        {
            if(bibl[n].tytul[0] > bibl[m].tytul[0])
               {
                   strcpy(temp, bibl[m].tytul);
                   strcpy(bibl[m].tytul, bibl[n].tytul);
                   strcpy(bibl[n].tytul, temp);

                   strcpy(temp1, bibl[m].autor);
                   strcpy(bibl[m].autor, bibl[n].autor);
                   strcpy(bibl[n].autor, temp1);

                   bibl[n].wartosc = bibl[m].wartosc;
               }
            else if(bibl[n].tytul[0] == bibl[m].tytul[0])
                {
                    if(bibl[n].tytul[1] > bibl[m].tytul[1])
                    {
                        strcpy(temp, bibl[m].tytul);
                        strcpy(bibl[m].tytul, bibl[n].tytul);
                        strcpy(bibl[n].tytul, temp);

                        strcpy(temp1, bibl[m].autor);
                        strcpy(bibl[m].autor, bibl[n].autor);
                        strcpy(bibl[n].autor, temp1);

                        bibl[n].wartosc = bibl[m].wartosc;
                    }
                }
                else if(bibl[n].tytul[1] == bibl[m].tytul[1])
                {
                    if(bibl[n].tytul[2] > bibl[m].tytul[2])
                    {
                        strcpy(temp, bibl[m].tytul);
                        strcpy(bibl[m].tytul, bibl[n].tytul);
                        strcpy(bibl[n].tytul, temp);

                        strcpy(temp1, bibl[m].autor);
                        strcpy(bibl[m].autor, bibl[n].autor);
                        strcpy(bibl[n].autor, temp1);

                        bibl[n].wartosc = bibl[m].wartosc;
                    }
                }
        }
    }
}

int main(void)
{
struct ksiazka bibl[MAXKS];
int licznik = 0;
int index;

printf("Podaj tytul ksiazki.\n");
printf("Aby zakonczyc wcisnij [enter] na poczatku wiersza.\n");
while(licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] != '\0')
{
    printf("Teraz podaj autora.\n");
    gets(bibl[licznik].autor);
    printf("Teraz podaj wartosc.\n");
    scanf("%f", &bibl[licznik++].wartosc);
    while(getchar() != '\n')
        continue;
    if(licznik < MAXKS)
        printf("Podaj kolejny tytul.\n");
}
printf("Oto lista twoich ksiazek:\n");
sortuj(bibl);
for(index = 0; index < licznik; index++)
{
    printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
}
return 0;
}

// ***************************************************************************

// Zad. 4

// a.

#include <stdio.h>
#include <stdlib.h>

struct im_naz {
        char imie[30];
        char imie_2[30];
        char nazwisko[30];
};

struct osoba {
    struct im_naz o;
    long long pesel;
};

int main(void)
{
struct osoba os[3] = {
    {{"Michael", "J.", "Jordan"}, 65092301159},
    {{"Jan", "C.", "Kowalski"}, 68021121561},
    {{"Maciej", "S.", "Nowak"}, 78110224125}
};
int i;
for (i = 0; i <= 2; i++)
    printf("\n%s, %s %s -- %lld\n", os[i].o.nazwisko, os[i].o.imie, os[i].o.imie_2, os[i].pesel);
return 0;
}


// b.

#include <stdio.h>
#include <stdlib.h>

struct im_naz {
        char imie[30];
        char imie_2[30];
        char nazwisko[30];
};

struct osoba {
    struct im_naz o;
    long long pesel;
};

void wysw(struct osoba os[])
{
int i;
for (i = 0; i <= 2; i++)
{
    if (os[i].o.imie_2 == NULL)
        printf("\n%s, %s -- %lld\n", os[i].o.nazwisko, os[i].o.imie, os[i].pesel);
    else
        printf("\n%s, %s %s -- %lld\n", os[i].o.nazwisko, os[i].o.imie, os[i].o.imie_2, os[i].pesel);
}
}


int main(void)
{
struct osoba os[3] = {
    {{"Michael", "J.", "Jordan"}, 65092301159},
    {{"Jan", "", "Kowalski"}, 68021121561},
    {{"Maciej", "S.", "Nowak"}, 78110224125}
};
wysw(os);
return 0;
}

// c.

