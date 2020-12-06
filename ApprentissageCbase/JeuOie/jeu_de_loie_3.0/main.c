#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CDEPART 0
#define CFIN 66
#define DMIN 2
#define DMAX 12
#define CMORT 58
#define CMULTIPLE 9
#define EXCEPTION 63
#define DE 6

/* FEATURE
-Initialiser la position de la case de d�part
-Lancer de d�s
-Verification du jet de d�s
-Si le jet de d�s et bon on se d�place
-V�rification des cases
-V�rification du d�passement de la case 66
-Condition de victoire FIN
*/

int init ();
int jetdedes ();
int verifdes(int, int);
int deplacement(int, int, int);
int Cond_Victoire(int);

int main()
{
    int des1 = 0;
    int des2 = 0;
    int place = init();
    do{
        des1 = jetdedes();
        des2 = jetdedes();
        if(verifdes(des1,des2)){
            place += des1+des2;
            printf("Vous etes en case %d. \n", place);
            place = deplacement(place, des1, des2);
            printf("Vous etes maintenant en case %d. \n", place);
        }else{
            printf("Veuillez entrer des nombres valides.\n");
        }
    }while(Cond_Victoire(place) == 0);
    return 0;
}

int init (){

   return CDEPART;

}

int jetdedes (){
    srand(GetTickCount());

    int jet;
    printf ("Jetez un de. [ENTER]\n");
    getchar();
    jet = (rand() % DE) + 1;
    printf("Vous avez fait : %d", jet);
    getchar();
    return jet;
}

int verifdes(int jet1, int jet2)
{
    if ((jet1+jet2)>=DMIN && (jet1+jet2)<=DMAX)
    {
        return 1;
    }else{
        return 0;
    }
}

int deplacement( int place, int jet1, int jet2)
{
    if (place%CMULTIPLE ==0 && place<EXCEPTION)
    {
        printf("Vous etes sur la case oie, le resultat des des est double.\n");
        place += jet1+jet2;
    }
    if (place > CFIN)
    {

        place = CFIN - (place - CFIN);
        printf("Vous avez depasse la taille du plateau vous retournez en place %d.\n", place);
    }
    if (place == CMORT)
    {
        printf("Vous etes sur la case tete de mort, vous retournez a la case de depart.\n");
        place = CDEPART;
    }
    return place;
}

int Cond_Victoire(int place)
{
    if (place == CFIN )
    {
        printf("Bravo ! Vous avez gagne !\n");
        return 1;
    }
    else
    {
        return 0;
    }

}


