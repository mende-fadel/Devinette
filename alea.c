#include <stdlib.h>
#include "tableau.h"
#include "alea.h"
int alea(int m)
{
    return rand() % (m + 1);
}

void remplir(int m)
{
    tableau t;
    int i = 0;
    while (i < t.taille)
    {
        t.valeurs[i++] = alea(m);
    }
}