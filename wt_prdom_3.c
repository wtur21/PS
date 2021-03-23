// Programowanie strukturalne

// Praca domowa 3 (æw. 20-03-21r.)

//******************************************************************************************************

// 2.2.5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot(int n)
{
int wyn;
wyn = pow(2,n);
return wyn;
}

int main(void)
{
printf("%d", pot(5));
return 0;
}

//******************************************************************************************************

// 2.2.6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot(unsigned int n, unsigned int m)
{
    int wyn;
    wyn = pow(n,m);
    return wyn;
}

int main(void)
{
int a = pot(2,2);
printf("%d", a);
return 0;
}

//******************************************************************************************************

// 2.2.21

#include <stdio.h>
#include <stdlib.h>

int ciag(unsigned int n)
{
int wyn, i;
int a_1 = 1;
int a_2;
if(n == 0)
    a_2 = 1;
else
    for(i = 0; i < n; i++)
    {
        a_2 = 2 * a_1 + 5;
        a_1 = a_2;
    }
return a_2;
}

int main(void)
{
printf("%d", ciag(2));
return 0;
}

//******************************************************************************************************

// 2.2.33

// Zadanie znajduje się w pliku pod adresem
// https://github.com/wtur21/PS/blob/main/wt_2_2_33.cpp

//******************************************************************************************************

// 3.2.4

#include <stdio.h>
#include <stdlib.h>

void zamiana(int* a, int* b)
{
int temp;
if(*b < *a)
{
   temp = *b;
   *b = *a;
   *a = temp;
}
}

int main(void)
{
int a = 4;
int b = 3;
int *wa, *wb;
wa = &a;
wb = &b;
zamiana(wa, wb);
printf("%d, %d", a, b);
return 0;
}

//******************************************************************************************************

// 3.2.5

#include <stdio.h>
#include <stdlib.h>

int suma(int* a, int* b)
{
int suma = *a + *b;
return suma;
}

int main(void)
{
int a = 4;
int b = 3;
int *wa, *wb;
wa = &a;
wb = &b;
int wyn = suma(wa, wb);
printf("%d", wyn);
return 0;
}

//******************************************************************************************************

// 3.2.6

#include <stdio.h>
#include <stdlib.h>

void przep(int n, int* w)
{
*w = n;
}

int main(void)
{
int a = 4;
int *wa;
wa = &a;
przep(10, wa);
printf("%d", a);
return 0;
}

//******************************************************************************************************

// 3.2.10

#include <stdio.h>
#include <stdlib.h>

int rezerw()
{
double a;
double *wsk;
wsk = &a;
return wsk;
}

int main(void)
{
int add = rezerw();
printf("%d", add);
return 0;
}
