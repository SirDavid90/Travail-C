#include <stdio.h>
#include <stdlib.h>
#include  "define.h"
#define NBI 10

//extern - automatique - statique - register - volatile
//Permet de faire appel a des fichier exterieur avec le type extern, pour �tre utilis� ailleur
//auto change tout le temps
//volatile <> const.
//Statique donn�e persistente
//cpt compte le nombre de fois elle � �t� utilis�
//register pour de l'embarqu�, m�moire cache, sp�cifique

//* est un pointeur, il point une r�f�rence m�moire

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
