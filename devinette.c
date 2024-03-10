/**
 * @file devinette.c
 * @author MENDE Fadel
 * @brief Contient les fonctions jeuDevinette et le main
 * @version 0.1
 * @date 2024-03-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //génération des nombres aléatoires
#include "devinette.h"

void jeuDevinette(){
    srand(time(NULL));/**<initialise le générateur des nombres aléatoires*/
    int secretNumber = rand() % 100 + 1; /**<génère un nombre compris entre 1 et 100*/
    int madevinette;/**<la variable dans laquelle on stocke la supposition de l'utilisateur*/
    int suppositionPrecedente = -1;/**<gardé la trace de la supposition précédente donc si l'utilisateur la même supposition plusieurs fois consécutivement,on va pas compter cela comme un essai sup    int essais = 0*/
    int essais = 0;/**<entier initialisé pour compter le nombres d'essais*/
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
    } while (madevinette!=secretNumber); 

   
}