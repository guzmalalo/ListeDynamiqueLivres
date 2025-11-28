#include <stdio.h>
#include <stdlib.h>
#include "livre.h"

int main(void)
{
    int n = 0;
    ListeLivres liste={NULL, 0,0};


    ajouterLivreDynamique(&liste);
    ajouterLivreDynamique(&liste);
    ajouterLivreDynamique(&liste);


    afficherLivres(liste);

    free(liste.tab);
    return 0;
}