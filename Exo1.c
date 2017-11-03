#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLETAB 10
//  Question 5 : Modifier le programme pour stocker dans le tableau les valeurs de la factorielle
int FactorielleTableau(int tableau[],int valeur)
{
    static int j;
    int result=1;
    j++;
    printf("Valeur de passage %d = \n",j);
    if(valeur==0)
        {
       // ajout
       //ajout
        return 1;
        }

    // a modifier => result = .....
    printf(" =  %d\n", result);
  // ajout
    return result;

}
//  Question 4 : Decommenter la partie du code en commentaire et Corriger le code
int Factorielle(int valeur)
{
  static int j;
    int result=1;
 /*   j++;
    printf("Valeur de passage %d = \n",j);
    if(valeur==1)
        {
         return 1;
        }
    result =  result*Factorielle(valeur);
    printf(" =  %d\n", result);*/
    return result;

}

// Exemple de modification des valeurs dans un tableau
// Argument Entree : Le tableau a modifier
//                  La valeur que prendra les 5 premieres valeurs

void modificationTableau(int tableau[], int valeur)
{
    int i;

   for(i=0;i<5;i++)
    {
     tableau[i] = 25;
    }

}




// Fonction permettant d'affichier les valeurs du tableau
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
modificationTableau(tab, 27);

printf("Affichage du Tableau apres modification\n");
afficher(tab, TAILLETAB);

// Calcul de la factorielle
printf("***************************** \n");
printf("***************************** \n");
printf("Calcul de la factorielle \n");
int result=Factorielle(5);
printf("La valeur de la factorielle est %d" ,result);

}






