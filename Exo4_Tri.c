#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TAILLETAB 10

// Tri sans recursivite
void tri_selection(int t[], int taille);
void tri_insertion(int t[],  int taille);
void tri_bulle(int t[], int taille);

// Tri Rapide recursif
int partitionnement(int t[], int gauche, int droite);
void tri_rapide(int t[], int gauche, int droite);

//Tri fusion recursif
void fusionner(int t[], int debut, int milieu, int fin);
void tri_fusion(int t[], int gauche, int droite);


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
 int tri;

 srand(1);
 for(i=0;i<TAILLETAB;i++)
 {
     tab[i] = rand()%40 + 1;
 }


// Lecture du Tableau
printf("Affichage du Tableau avant modification\n");
afficher(tab, TAILLETAB);

printf("Selection du type de tri\n");
printf("1: Tri par selection\n");
printf("2: Tri par insertion\n");
printf("3: Tri a bulles\n");
printf("4: Tri rapide\n");
printf("5: Tri par fusion\n");
scanf("%d",&tri);

switch(tri)
{
case 1: // Selection
    {
        tri_selection(tab, TAILLETAB);
        break;
    }
    case 2: // Insertion
    {
         tri_insertion(tab, TAILLETAB);
        break;
    }
    case 3: // Selection
    {
        tri_bulle(tab,TAILLETAB);
        break;
    }
    case 4: // Selection
    {
        tri_rapide(tab,0,TAILLETAB);
        break;
    }
    case 5: // Selection
    {   tri_fusion(tab,0,TAILLETAB);
        break;
    }
    default: // Selection
    {
        printf("Pas de choix de tri \n");
        break;
    }
}


// Exemple de modification du tableau
// QUESTION 4 : Mettre 0 quand indice est pair et 1 quand l'indice est impair pour toute les valeurs
// du tableau (Modifier la fonction)

printf("Affichage du Tableau apres modification\n");
afficher(tab, TAILLETAB);

}
void tri_selection(int t[], int taille)
{
    int i,j,min,temp;
    for(i=0;i<taille-1;i++)
    {
        min=i;
        //for
        //
        //

        temp = t[min];
        t[min]=t[i];
        t[i]=temp;
        printf("Passage %d\n",i+1);
        afficher(t,taille);
    }

}
void tri_insertion(int t[],  int taille)
{

   int i,j,valeur;
    // Etape 1 : ajouter une valeur sentinelle
  //creation d'un tableau temp
  int tabtemp[TAILLETAB+1];
  tabtemp[0]= INT_MIN;
  for(i=1;i<=TAILLETAB;i++)
        tabtemp[i]=t[i-1];



 for(i=2;i<taille-1;i++)
    {
        valeur =tabtemp[i];
        j=i;
        //while
        //
        //
        tabtemp[j]=valeur;
          printf("Passage %d\n",i-1);
        afficher(tabtemp,taille);
    }

 for(i=0;i<TAILLETAB;i++)
       t[i]= tabtemp[i+1];

}
void tri_bulle(int t[], int taille)
{
    int i,j,valeur;
    for(i=taille-1;i>=1;i--)
    {




 printf("Passage %d\n",taille-i);
        afficher(t,taille);

    }


}

// Tri Rapide recursif
int partitionnement(int t[], int gauche, int droite)
{

}
void tri_rapide(int t[], int gauche, int droite)
{

}

//Tri fusion recursif
void fusionner(int t[], int debut, int milieu, int fin)
{

}
void tri_fusion(int t[], int gauche, int droite)
{

}





