// Programowanie strukturalne

// Praca domowa 7

// (cw. 24-04-21r.)

//******************************************************************************************************

// Zadanie 5.2.24

// char:

void kopiuj(char *nap, char tab[])
{
int i;
for(i = 0; i < strlen(nap); i++)
    tab[i] = *(nap + i);
}

// wchar_t:

void kopiuj(wchar_t *nap, wchar_t tab[])
{
int i;
for(i = 0; i < wcslen(nap); i++)
    tab[i] = *(nap + i);
}

//******************************************************************************************************

// Zadanie 5.2.25



//******************************************************************************************************

// Zadanie 4.2.10

// a)

int funkcja_a(unsigned int n, int tab[])
{
int i;
int max = tab[0];
for(i = 0; i < n; i++)
   if(tab[i] > max)
        max = tab[i];
return max;
}

// b)

int funkcja_b(unsigned int n, int tab[])
{
int i;
int min = tab[0];
for(i = 0; i < n; i++)
   if(tab[i] < min)
        min = tab[i];
return min;
}

// c)

int funkcja_c(unsigned int n, int tab[])
{
int i;
int maxind = 0;
for(i = 0; i < n; i++)
   if(tab[i] > tab[maxind])
        maxind = i;
return maxind;
}

// d)

int funkcja_d(unsigned int n, int tab[])
{
int i;
int minind = 0;
for(i = 0; i < n; i++)
   if(tab[i] < tab[minind])
        minind = i;
return minind;
}

// e)

int funkcja_e(unsigned int n, int tab[])
{
int i;
int maxb = tab[0];
for(i = 0; i < n; i++)
   if(abs(tab[i]) > abs(maxb))
        maxb = tab[i];
return maxb;
}

// f)

int funkcja_f(unsigned int n, int tab[])
{
int i;
int maxbind = 0;
for(i = 0; i < n; i++)
   if(abs(tab[i]) > abs(tab[maxbind]))
        maxbind = i;
return maxbind;
}

//******************************************************************************************************

// Zadanie 4.2.11

double wektory(unsigned int n, double tab1[], double tab2[])
{
double wyn = 0;
int i;
for(i = 0; i < n; i++)
    wyn = wyn + tab1[i] * tab2[i];
return wyn;
}
