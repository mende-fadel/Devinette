#include <stdio.h>
#include <stdlib.h>
#include <time.h> //génération des nombres aléatoires
#include "devinette.h"

void jeuDevinette(){
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int madevinette;
    int suppositionPrecedente = -1;
    int essais = 0;

    printf("Bienvenue au jeu de devinettes !\n");
    printf("Devinez le nombre entre 1 et 100.\n");

    do{
        printf("Entrez votre devinette : ");
        scanf("%d", &madevinette);
        essais++;

        if(madevinette > secretNumber){
            printf("Trop grand !\n");
        } else if(madevinette < secretNumber){
            printf("Trop petit !\n");
        }
        else {
            printf("Bravo ! Vous avez deviné le nombre en %d essais", essais);
        }
        if(madevinette == suppositionPrecedente){
            printf("Ce nombre a été déjà deviné !\n");    
        }

        suppositionPrecedente = madevinette;
    } while (1); //boucle infinie jusqu'à ce qu'on trouve le nombre secret

   
}