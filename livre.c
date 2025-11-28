#include "livre.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void afficherLivres(ListeLivres liste)
{
    printf("---- Liste de Livres -----\n");
    for (int i = 0; i < liste.nbLivres; ++i)
    {
        printf(" --- Livre %d :\n", i);
        printf(" Titre %s \n", liste.tab[i].titre);
        printf(" Auteur %s \n", liste.tab[i].auteur);
        printf(" ISBN %d \n", liste.tab[i].isbn);
    }
}

void ajouterLivreDynamique(ListeLivres* liste)
{
    if (liste->tab == NULL)
    {
        liste->tab = malloc(sizeof(Livre) * SIZE_INI);
        liste->taille = SIZE_INI;
        liste->nbLivres = 0;
    }

    if (liste->nbLivres == liste->taille)
    {
        liste->tab = realloc(liste->tab, sizeof(Livre) * liste->taille * 2);
        liste->taille = liste->taille * 2;
    }

    char s[MAX_NOM];
    int i = liste->nbLivres;

    printf("Donnez le titre : ");
    fgets(s, sizeof(char) * MAX_NOM, stdin);
    s[strlen(s) - 1] = '\0';
    strcpy(liste->tab[i].titre, s);

    printf("Donnez l'auteur: ");
    fgets(s, sizeof(char) * MAX_NOM, stdin);
    s[strlen(s) - 1] = '\0';
    strcpy(liste->tab[i].auteur, s);

    printf("Donnez l'isbn: ");
    scanf("%d", &(liste->tab[i].isbn));

    fgets(s, sizeof(char) * MAX_NOM, stdin);

    liste->nbLivres++;
}

