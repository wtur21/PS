// Programowanie strukturalne

// Praca domowa 8

// (cw. 08-05-21r.)

//******************************************************************************************************

// Zadanie 6.2.5

// 6.2.1

int*** alokuj(unsigned int w1, unsigned int w2, unsigned int w3)
{
    int i, j;
    int *** t = malloc(w1 * sizeof(int**));
    for(i = 0; i < w1; i++)
    {
        t[i] = malloc(w2 * sizeof(int*));
        for(j = 0; j < w2; j++)
            t[i][j] = malloc(w3 * sizeof(int));
    }
    return t;
}

//6.2.3

void zwolnij(unsigned int w1, unsigned int w2, unsigned int w3, int *** t)
{
    int i, j;
    for(i = 0; i < w1)
    {
        for(j = 0; j < w2; j++)
            free(t[i][j])
        free(t[i])
    }
    free(t);
}

//******************************************************************************************************

// Zadanie 6.2.6



//******************************************************************************************************

// Zadanie 6.2.11

int suma(int t[][100], unsigned int n)
{
int suma = 0;
int i, j;
for (i = 0; i < n; i++)
{
    for (j = 0; j < 100; j++)
        suma = suma + t[i][j];
}
return suma;
}

//******************************************************************************************************

// Zadanie 6.2.12

int suma(int** t, unsigned int n, unsigned int m)
{
int suma = 0;
int i, j;
for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
        suma = suma + t[i][j];
}
return suma;
}
