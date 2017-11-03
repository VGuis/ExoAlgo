#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLETAB 10
//  Question 1 : Modifier le programme pour stocker dans le tableau les valeurs de la factorielle
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
 int tab[TAILLETAB]={0};
 int i;
int valeur,result;
printf("Donner la valeur de la factorielle");
scanf("%d",valeur);


// Lecture du Tableau
printf("Affichage du Tableau avant modification\n");
afficher(tab, valeur);

// Exemple de modification du tableau
result = FactorielleTableau(tab,valeur);

printf("Affichage du Tableau apres modification\n");
afficher(tab, valeur);

printf("La valeur de la factorielle de %d est %d",valeur,result);




}






