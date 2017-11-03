#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLETAB 10

// Exemple de modification des valeurs dans un tableau
// Entree : Le tableau a modifier
//                  La valeur que prendra les 5 premieres valeurs
// Sortie :
void modificationTableau(int tableau[], int valeur)
{
    int i;

   for(i=0;i<5;i++)
    {
     tableau[i] = 25;
    }

}




// Fonction permettant d'affichier les valeurs du tableau
// Entrees :
// Sortie :
void afficher(int tableau[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
 {
     printf("Tableau[%d] = %d \n", i, tableau[i]);
 }


}

// Programme principal
int main (void)
{
// Declaration
 int tab[TAILLETAB];
 int i;

 // Initialisation du tableau
  // QUESTION 1: Dans quel intervalle varie les valeurs tirées aleatoirement ?
  // QUESTION 2 : Modifier le programme pour avoir un tableau de 5 valeurs comprises entre [4-50]
  // QUESTION 3 : Que remarquez vous sur les valeurs du tableau ?

 srand(1);

 for(i=0;i<TAILLETAB;i++)
 {
     tab[i] = rand()%40 + 1;
 }


// Lecture du Tableau
printf("Affichage du Tableau avant modification\n");
afficher(tab, TAILLETAB);

// Exemple de modification du tableau
// QUESTION 4 : Mettre 0 quand indice est pair et 1 quand l'indice est impair pour toute les valeurs
// du tableau (Modifier la fonction)
modificationTableau(tab, 27);

printf("Affichage du Tableau apres modification\n");
afficher(tab, TAILLETAB);



}






