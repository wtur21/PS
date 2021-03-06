
//Programowanie strukturalne

//Praca domowa 1
//(æw. 27-02-21r.)

//Zadania z rozdzia³u 11:

//Zad. 1:

#include <stdio.h>
#include <stdlib.h>

void pobierz(int n);
int main()
{
pobierz(5);
return 0;
}
void pobierz(int n)
{
    char znaki[n];
    int a = 0;
    printf("Podawaj znaki\n");
    for(a = 0; a < n; a++)
        scanf("%c", &znaki[a]);
}

//Zad. 2:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void pobierz(int n);
int main()
{
pobierz(5);
return 0;
}
void pobierz(int n)
{
    char znaki[n];
    int a = 0;
    printf("Podawaj znaki\n");
    for(a = 0; a < n ; a++)
    {
        znaki[a] = getchar();
        if(isspace(znaki[a]))
            break;
    }
}

//Zad. 3:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void pobierz(void);
int main()
{
pobierz();
return 0;
}
void pobierz(void)
{
    char znaki[100];
    int a = 0;
    printf("Podawaj znaki\n");
    for(a = 0; a < 100 ; a++)
    {
        znaki[a] = getchar();
        if(isspace(znaki[a]))
            break;
    }
}

//Zad. 4:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * szukaj(char st[], char ch);
int main()
{
char *wsk;
wsk = szukaj("abc xyz abc xyz", 'c');
printf("%s", wsk);
return 0;
}
char * szukaj(char st[], char ch)
{
int n, dl;
char *zw;
dl = strlen(st);
for(n = 0; n < dl; n++)
{
    if(st[n] == ch)
       {
        zw = &st[n];
        break;
       }
    else
        zw = &st[0];
}
return zw;
}

//Zad. 5:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zawiera(char st[], char ch);
int main()
{
int zaw = zawiera("abc xyz abc xyz", 'd');
printf("%d", zaw);
return 0;
}
int zawiera(char st[], char ch)
{
int n, dl, zw;
dl = strlen(st);
for(n = 0; n < dl; n++)
{
    if(st[n] == ch)
       {
        zw = 1;
        break;
       }
    else
        zw = 0;
}
return zw;
}

//Zad. 6:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char kopiuj(char st_d[], char st_z[], int i);
int main()
{
char st2[] = "cba zyx cba zyx";
char st1[50];
kopiuj(st1, st2, 6);
printf("%s\n%s", st2, st1);
return 0;
}
char kopiuj(char st_d[], char st_z[], int i)
{
int n;
for(n = 0; n < strlen(st_z); n++)
{
    if(n < i)
        st_d[n] = st_z[n];
    else if(n >= i)
        st_d[n] = '\0';
}
return st_d;
}

//Zad.7:

//Zad. 8:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *odwr(char st_z[]);
int main()
{
char st[] = "abcdefghi";
printf("%s\n", odwr(st));
return 0;
}
char *odwr(char st_z[])
{
int n;
int d = strlen(st_z);
char temp[d];
for(n = 0; n < d; n++)
    temp[n] = st_z[n];

for(n = 0; n < d; n++)
    st_z[n] = temp[d - (n + 1)];

return st_z;
}

//Zad. 9:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *u_odst(char st[]);
int main()
{
char str[30];
while(gets(str))
{
    if(str[0] == '\0')
        break;
    else
        printf("%s\n", u_odst(str));
}
return 0;
}
char *u_odst(char st[])
{
int n;
for(n = 0; n < strlen(st); n++)
    if(isspace(st[n]))
        st[n] = '\b';
return st;
}

//Zad. 10:

//Zad. 11:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
char ch;
int mlit = 0;
int wlit = 0;
int slowa = 0;
int cyfry = 0;
int zp = 0;
printf("Napisz cos:\n");
while((ch = getchar()) != EOF)
{
    if(islower(ch))
        mlit++;
    else if(isupper(ch))
        wlit++;
    else if(ispunct(ch))
        zp++;
    else if(ch == ' ' || ch == '\n')
        slowa++;
    else if(isdigit(ch))
        cyfry++;
}
printf("Wielkie litery: %d\nMale litery: %d\nZnaki przestankowe: %d\nSlowa: %d\nCyfry: %d\n", wlit, mlit, zp, slowa, cyfry);
return 0;
}

//Zad. 12:

//Zad. 13:

//Zad. 14:

#include <stdio.h>
#include <stdlib.h>

int main()
{
char str_m[] = "a";
int test = n_atoi(str_m);
printf("%d\n", test);
return 0;
}

int n_atoi(char *str_a)
{
int wyn = 0;
int zn = 1;
int n = 0;
if(str_a[0] == '-')
{
    zn = -1;
    n++;
}
for(; str_a[n] != '\0'; n++)
    wyn = wyn*10 + str_a[n] - '0';
return zn*wyn;
}

//Zad. 15:


//1.3.3:

#include <stdio.h>
#include <stdlib.h>


int main()
{
int a,b,c;
printf("Podaj trzy liczby calkowite:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if(a > b && a > c)
    printf("Najwieksza liczba to %d.", a);
else if(b > a && b > c)
    printf("Najwieksza liczba to %d.", b);
else if(c > a && c > b)
    printf("Najwieksza liczba to %d.", c);
else if(b == a && b > c)
    printf("Najwieksza liczba to %d.", b);
else if(b == c && b > a)
    printf("Najwieksza liczba to %d", b);
else if(c == a && c > b)
    printf("Najwieksza liczba to %d.", c);
else if(a == b && b == c)
    printf("Wszystkie liczby sa rowne.");
return 0;
}

//1.3.7:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a,b,c, dt, pdt, rozw, rozw2;
printf("Podaj a, b oraz c:\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
dt = pow(b,2) - 4*a*c;
pdt = sqrt(dt);
if(dt > 0)
{
    rozw = (-b - pdt)/2*a;
    rozw2 = (-b + pdt)/2*a;
    printf("Rozwiazania tego rownania to %f oraz %f.", rozw, rozw2);
}
else if(dt == 0)
{
    rozw = -b/2*a;
    printf("Rozwiazaniem tego rownania jest %f.", rozw);
}
else if(dt < 0)
    printf("Brak rozwiazan.");
return 0;
}

//1.3.9:

#include <stdio.h>
#include <stdlib.h>

int main()
{
int wyb;
float a,b,wyn;
printf("Podaj dwie liczby:\n");
scanf("%f", &a);
scanf("%f", &b);
printf("Wybierz operacje ktora chcesz na nich wykonac:\n");
printf("1) Dodawanie\n");
printf("2) Odejmowanie drugiej od pierwszej\n");
printf("3) Odejmowanie pierwszej od drugiej\n");
printf("4) Mnozenie\n");
printf("5) Dzielenie pierwszej przez druga\n");
printf("6) Dzielenie drugiej przez pierwsza\n");
scanf("%d", &wyb);
if(wyb == 1)
    wyn = a + b;
else if(wyb == 2)
    wyn = a - b;
else if(wyb == 3)
    wyn = b - a;
else if(wyb == 4)
    wyn = a * b;
else if(wyb == 5)
    wyn = a / b;
else if(wyb == 6)
    wyn = b / a;
printf("Wynik to %.2f\n.", wyn);
return 0;
}

//1.4.5:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
unsigned int n, i;
unsigned int wyn = 0;
printf("Podaj n:\n");
scanf("%u", &n);
for(i = 0; i <= n; i++)
    wyn = wyn + pow(i,2);
printf("Wynik to %d\n.", wyn);
return 0;
}

