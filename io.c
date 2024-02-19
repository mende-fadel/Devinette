#include"stdio.h"
#include "tableau.h"
#include "io.h"
void affiche()
{
    tableau t;
    int i;
    for (i = 0; i < t.taille; i++)
    {
        printf("%d\t", t.valeurs[i]);
    }
    printf("\n");
}
