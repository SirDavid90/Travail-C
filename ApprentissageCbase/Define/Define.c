#include <stdio.h>
#include <stdlib.h>
#include  "define.h"
#define NBI 10

//extern - automatique - statique - register - volatile
//Permet de faire appel a des fichier exterieur avec le type extern, pour être utilisé ailleur
//auto change tout le temps
//volatile <> const.
//Statique donnée persistente
//cpt compte le nombre de fois elle à été utilisé
//register pour de l'embarqué, mémoire cache, spécifique

//* est un pointeur, il point une référence mémoire

extern int ext=0;
extern int fctInit_tabEntier(int n_tabEntier(TAILLE));
int main()
{
    printf("Hello world!\n");
    return 0;
}

int cpt=(){
static int n_c;
n_c++;
return n_c;
}

int c=cpt(){

return 0;}
