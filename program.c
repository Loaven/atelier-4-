#include <stdio.h>

#define NB_VALEURS 3

#define MAX_LONGUEUR 50


int main(void) 
{
    //1)initialisation du tableau avec valeurs etape 1

    int valeurs[NB_VALEURS] = { 8, 4, 12};
    
    //1)Bis Recherche du mximum du tableau
    int max = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++)
    {
        if (valeurs[i] > max)
        {
            max = valeurs[i];
        }
    }

    //2) Affichage avec l'échelle proportionnelle
for ( int i = 0; i < NB_VALEURS; i++)
{
  
    //3) calcul du nombre de X à afficher proportionnel à MAX_LONGUEUR et maximum sachant que nombre de X = (valeur actuelle/max)x Max_LONGUEUR 
 int nb_X = (int)(((double)valeurs[i] / max) * MAX_LONGUEUR); 
 
 // Affichage des X en fonction de cette proportion
    for (int j= 0; j< nb_X; j++)
  {
    printf("X");
  }
  
  //4) Affichage de la valeur
    printf(" %d\n", valeurs[i]);
}
//5) ligne finale
printf ("+-------------------+\n");

    return 0; 
 
}   