
#ifndef PROJET_LIVRE_H
#define PROJET_LIVRE_H

#define MAX_NOM 30
#define SIZE_INI 10

typedef struct
{
    char titre[MAX_NOM];
    char auteur[MAX_NOM];
    int isbn;
}Livre;

typedef struct
{
    Livre *tab;
    int taille;
    int nbLivres;
}ListeLivres;


void afficherLivres(ListeLivres liste);
void ajouterLivre(ListeLivres* liste);
void supprimerLivre(ListeLivres* liste);
void modifierLivre(ListeLivres* liste);
void rechercheISBN(ListeLivres liste);
void rechercheAuteur(ListeLivres liste);
void rechercheTitre(ListeLivres liste);

void ajouterLivreDynamique(ListeLivres *Liste);


#endif //PROJET_LIVRE_H