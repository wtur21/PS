// Programowanie strukturalne

// Praca domowa 6

// (cw. 17-04-21r.)

//******************************************************************************************************

// Zadanie 5.2.3

// Wersja dla char:

int porownaj(char *napis1, char *napis2)
{
    int i, dlugosc, wyn;
    if(strlen(napis1) > strlen(napis2))
        dlugosc = strlen(napis1);
    else
        dlugosc = strlen(napis2);
    for(i = 0; i < dlugosc; i++)
    {
        if(*(napis1 + i) == *(napis2 + i))
            wyn = 1;
        else
            wyn = 0;
    }
    return wyn;
}

// Wersja dla wchar_t:

int porownaj(wchar_t *napis1, wchar_t *napis2)
{
    int i, dlugosc, wyn;
    if(wcslen(napis1) > wcslen(napis2))
        dlugosc = wcslen(napis1);
    else
        dlugosc = wcslen(napis2);
    for(i = 0; i < dlugosc; i++)
    {
        if(*(napis1 + i) == *(napis2 + i))
            wyn = 1;
        else
            wyn = 0;
    }
    return wyn;
}

//******************************************************************************************************

// Zadanie 5.2.5

// char:

void przepisz(char *napis1, char *napis2)
{
    int i;
    for(i = 0; i < strlen(napis1); i++)
        *(napis2 + i) = *(napis1 + i);
}

// wchar_t:

void przepisz(wchar_t *napis1, wchar_t *napis2)
{
    int i;
    for(i = 0; i < wcslen(napis1); i++)
        *(napis2 + i) = *(napis1 + i);
}

//******************************************************************************************************

// Zadanie 5.2.6


// char:

void kopiujn(char *nap1, char *nap2, int n)
{
    int i;
    if(strlen(nap1) < n)
        n = strlen(nap1);
    for(i = 0; i < n; i++)
        *(nap2 + i) = *(nap1 + i);
    *(nap2 + n) = '\0';
}

// wchar_t:

void kopiujn(wchar_t *nap1, wchar_t *nap2, int n)
{
    int i;
    if(wcslen(nap1) < n)
        n = wcslen(nap1);
    for(i = 0; i < n; i++)
        *(nap2 + i) = *(nap1 + i);
    *(nap2 + n) = '\0';
}
//******************************************************************************************************

// Zadanie 5.2.12

// char:

void wytnijz(char *nap1, char *nap2)
{

}

// wchar_t:

void wytnijz(wchar_t *nap1, wchar_t *nap2)
{

}
