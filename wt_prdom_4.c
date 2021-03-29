// Programowanie strukturalne

// Praca domowa 4
// (cw. 27-03-21r.)

//******************************************************************************************************

// Zadanie 4.2.6

// a)

#include <stdio.h>
#include <stdlib.h>

void przepisz(unsigned int n, int tab1[n], int tab2[n])
{
int i;
for(i = 0; i < n; i++)
    tab2[i] = tab1[i];
}

// b)

#include <stdio.h>
#include <stdlib.h>

void przep_odwr(unsigned int n, int tab1[n], int tab2[n])
{
int i, k;
for(i = 0, k = (n - 1); i < n; i++, k--)
    tab2[i] = tab1[k];
}

//******************************************************************************************************

// Zadanie 4.2.7

// a)

#include <stdio.h>
#include <stdlib.h>

void przep_sume(unsigned int n, int tab1[n], int tab2[n], int tab3[n])
{
int i;
for(i = 0; i < n; i++)
    tab3[i] = tab2[i] + tab1[i];
}

// b)

#include <stdio.h>
#include <stdlib.h>

void wieksz(unsigned int n, int tab1[n], int tab2[n], int tab3[n])
{
int i;
for(i = 0; i < n; i++)
{
    if(tab1[i] > tab2[i])
        tab3[i] = tab1[i];
    else if(tab1[i] < tab2[i])
        tab3[i] = tab2[i];
}
}

// c)


#include <stdio.h>
#include <stdlib.h>

void przep(unsigned int n, int tab1[n], int tab2[n], int tab3[n])
{
int i;
int temp2[] = {};
int temp3[] = {};
for(i = 0; i < n; i++)
    temp2[i] = tab2[i];
for(i = 0; i < n; i++)
    temp3[i] = tab3[i];
for(i = 0; i < n; i++)
    tab2[i] = tab1[i];
for(i = 0; i < n; i++)
    tab3[i] = temp2[i];
for(i = 0; i < n; i++)
    tab1[i] = temp3[i];
}


//******************************************************************************************************

// Zadanie 4.2.8

// a)

#include <stdio.h>
#include <stdlib.h>

void przep(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n])
{
int i, k;
for(i = 0, k = n; k < 2*n; i++, k++)
{
    tab3[i] = tab1[i];
    tab3[k] = tab2[i];
}
}

// b)

#include <stdio.h>
#include <stdlib.h>

void przep(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n])
{
int i1, i2, k;
for(i1 = 0, i2 = 0, k = 0; k < 2*n; k++)
{
        if(k % 2 == 0)
        {
            tab3[k] = tab2[i2];
            i2++;
        }
        else if(k % 2 != 0)
        {
            tab3[k]= tab1[i1];
            i1++;
        }
}
}

//******************************************************************************************************

// Zadanie 4.2.9

#include <stdio.h>
#include <stdlib.h>

void przep(unsigned int n, int tab1[n], int tab2[n], int tab3[n])
{
int i, maks, min, mid;
for(i = 0; i < n; i++)
{
    if((tab1[i] >= tab2[i]) && (tab1[i] >= tab3[i]))
    {
        maks = tab1[i];
        if(tab2[i] >= tab3[i])
        {
            mid = tab2[i];
            min = tab3[i];
        }
        else
        {
            mid = tab3[i];
            min = tab2[i];
        }
    }
    else if((tab2[i] >= tab3[i]) && (tab2[i] >= tab1[i]))
    {
        maks = tab2[i];
        if(tab1[i] >= tab3[i])
        {
            mid = tab1[i];
            min = tab3[i];
        }
        else
        {
            mid = tab3[i];
            min = tab1[i];
        }
    }
    else if((tab3[i] >= tab1[i]) && (tab3[i] >= tab2[i]))
    {
        maks = tab3[i];
        if(tab1[i] >= tab2[i])
        {
            mid = tab1[i];
            min = tab2[i];
        }
        else
        {
            mid = tab2[i];
            min = tab1[i];
        }

    }
    tab1[i] = maks;
    tab2[i] = mid;
    tab3[i] = min;
}
}
