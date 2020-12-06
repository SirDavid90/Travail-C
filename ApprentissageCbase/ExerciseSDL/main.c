#include <stdio.h>
#include <stdlib.h>


//Prototype, pointeur fonction affiche
void Affiche(int Val);
void (*pAffiche2) (int);
void (*pAffiche) (double);
void (*pAffiche2) (void*);
//void (*pAffiche)(int);//int methode argument qu'il va pointer

int main()
{
    //Affiche(12);
    pAffiche=&Affiche;
     pAffiche2=&Affiche2;

    int Val=0;
    int *p_int=&n_val

    pAffiche(12);

    return 0;
}

void affiche(int Val){
    printf("%d\n", Val);
}
