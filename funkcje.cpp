int sprawdzanie_ruchu(int tablica[8][8], int x, int y, int grana, int przeciwna)
{
    int pomoc = 0;
    int i;
    i = x;
    int j;
    j = y;
    // gora
    while ((i - 2) >= 0 && tablica[i - 1][j] == przeciwna)
    {
        i--;
        if (tablica[i - 1][j] == grana)
        {

            pomoc = 1;
            break;
        }
    }

    i = x;
    j = y;
    // dol
    while ((i + 2) < 8 && tablica[i + 1][j] == przeciwna)
    {
        i++;
        if (tablica[i + 1][j] == grana)
        {

            pomoc = 1;
            break;
        }
    }
    // prawo
    while ((j + 2) < 8 && tablica[i][j + 1] == przeciwna)
    {
        j++;
        if (tablica[i][j + 1] == grana)
        {

            pomoc = 1;
            break;
        }
    }

    i = x;
    j = y;
    // lewo
    while ((j - 2) >= 0 && tablica[i][j - 1] == przeciwna)
    {
        j--;
        if (tablica[i][j - 1] == grana)
        {

            pomoc = 1;
            break;
        }
    }

    i = x;
    j = y;
    // lewo gora
    while ((i - 2) >= 0 && (j - 2) >= 0 && tablica[i - 1][j - 1] == przeciwna)
    {
        i--;
        j--;
        if (tablica[i - 1][j - 1] == grana)
        {

            pomoc = 1;
            break;
        }
    }

    i = x;
    j = y;
    // prawo dol
    while ((i + 2) < 8 && (j + 2) < 8 && tablica[i + 1][j + 1] == przeciwna)
    {

        i++;
        j++;
        if (tablica[i + 1][j + 1] == grana)
        {

            pomoc = 1;

            break;
        }
    }

    i = x;
    j = y;
    // prawo gora
    while ((i - 2) >= 0 && (j + 2) < 8 && tablica[i - 1][j + 1] == przeciwna)
    {
        i--;
        j++;
        if (tablica[i - 1][j + 1] == grana)
        {

            pomoc = 1;
            break;
        }
    }

    i = x;
    j = y;
    // lewo dol
    while ((i + 2) < 8 && (j - 2) >= 0 && tablica[i + 1][j - 1] == przeciwna)
    {
        i++;
        j--;
        if (tablica[i + 1][j - 1] == grana)
        {

            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
        return 1;
    return 0;
}

void resetowaniegry(int tablica[8][8])
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            tablica[i][j] = 0;
        }
    }

    tablica[3][3] = 1;
    tablica[3][4] = 2;
    tablica[4][3] = 2;
    tablica[4][4] = 1;
}
void wstawianie(int tablica[8][8], int x, int y, int grana, int przeciwna)
{
    int pomoc = 0;
    int pomoc1 = 0;
    int p;
    int i;
    i = x;
    int j;
    j = y;
    // gora
    while ((i - 2) >= 0 && tablica[i - 1][j] == przeciwna)
    {
        i--;
        if (tablica[i - 1][j] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        for (int c = i; c < x; c++)
        {
            tablica[c][j] = grana;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // dol
    while ((i + 2) < 8 && tablica[i + 1][j] == przeciwna)
    {
        i++;
        if (tablica[i + 1][j] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        for (int c = x + 1; c <= i; c++)
        {
            tablica[c][j] = grana;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // prawo
    while ((j + 2) < 8 && tablica[i][j + 1] == przeciwna)
    {
        j++;
        if (tablica[i][j + 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        for (int c = y + 1; c <= j; c++)
        {
            tablica[i][c] = grana;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // lewo
    while ((j - 2) >= 0 && tablica[i][j - 1] == przeciwna)
    {
        j--;
        if (tablica[i][j - 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        for (int c = j; c <= y; c++)
        {
            tablica[x][c] = grana;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // lewo gora
    while ((i - 2) >= 0 && (j - 2) >= 0 && tablica[i - 1][j - 1] == przeciwna)
    {
        i--;
        j--;
        if (tablica[i - 1][j - 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        p = j;
        for (int c = i; c <= x; c++)
        {
            tablica[c][p] = grana;
            p++;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // prawo dol
    while ((i + 2) < 8 && (j + 2) < 8 && tablica[i + 1][j + 1] == przeciwna)
    {

        i++;
        j++;
        if (tablica[i + 1][j + 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;

            break;
        }
    }

    if (pomoc == 1)
    {

        p = y + 1;
        for (int c = x + 1; c <= i; c++)
        {

            tablica[c][p] = grana;
            p++;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // prawo gora
    while ((i - 2) >= 0 && (j + 2) < 8 && tablica[i - 1][j + 1] == przeciwna)
    {
        i--;
        j++;
        if (tablica[i - 1][j + 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        p = j;
        for (int c = i; c < x; c++)
        {
            tablica[c][p] = grana;
            p--;
        }
    }
    pomoc = 0;
    i = x;
    j = y;
    // lewo dol
    while ((i + 2) < 8 && (j - 2) >= 0 && tablica[i + 1][j - 1] == przeciwna)
    {
        i++;
        j--;
        if (tablica[i + 1][j - 1] == grana)
        {
            pomoc1 = 1;
            pomoc = 1;
            break;
        }
    }
    if (pomoc == 1)
    {
        p = j;
        for (int c = i; c > x; c--)
        {
            tablica[c][p] = grana;
            p++;
        }
    }

    if (pomoc1 == 1)
    {
        tablica[x][y] = grana;
    }

    // dodawanie do tablicy z turami rzeczy, zeby w razie czrgo skonczyc gre jak dwie osoby nie wykonaja ruchu
    // if (pomoc1 == 1)
    // {
    //     if (tury > 0)
    //     {
    //         T[tury] = T[tury - 1] + 1;
    //     }
    //     else
    //         T[tury] = tury;
    // }
    // else
    // {
    //     if (tury > 0)
    //     {
    //         T[tury] = T[tury - 1];
    //     }
    //     else
    //         T[tury] = tury;
    // }
}
int sprawdzanieGry(int tablica[8][8])
{
    int licznik = 0;
    int licznikruchow = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (tablica[i][j] == 1 || tablica[i][j] == 2)
            {
                licznik = licznik + 1;
            }
        }
    }
    if (licznik == 64)
    {
        return 1;
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (sprawdzanie_ruchu(tablica, i, j, 1, 2) == 0)
            {
                licznikruchow += 1;
            }
            if (sprawdzanie_ruchu(tablica, i, j, 2, 1) == 0)
            {
                licznikruchow += 1;
            }
        }
    }
    if (licznikruchow == 128)
    {
        return 1;
    }
    return 0;
}