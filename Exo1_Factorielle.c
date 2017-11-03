#include <stdio.h>
#include <stdlib.h>


//  Question 1 : Decommenter la partie du code en commentaire et Corriger le code
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





// Programme principal
int main (void)
{
// Declaration
int valeur, result;
// Initialisation
printf("Donner le calcul de la factorielle \n");
scanf("%d",&valeur);
//Traitement

printf("Calcul de la factorielle \n");
result=Factorielle(valeur);
//Affichage
printf("La valeur de la factorielle est %d" ,result);

}






