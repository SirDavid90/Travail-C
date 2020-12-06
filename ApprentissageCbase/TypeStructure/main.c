#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Exemple un point dans un plan
//Les types
typedef struct tPoint{

    int x;
    int y;
    char str_couleur[10];

}tPoint

//Les énumérations (associe à ça et seulement ça!)
typedef enum Couleur{red, black, blue}Couleur;
typedef enum boolean(faux, vrai)boolean;


//Prototype
void SetPoint(tPoint *pPoint, int n_x, int n_y, char str_couleur[10]);


int main()
{
    //Les types
    tPoint MonPoint=(0,0, ("blue"));

    tPoint *pMonPoint=NULL;

    tPoint tab_point[100]

    pMonPoint=&MonPoint

    pMonPoint.x=6;
    pMonPoint.y=8;

    //Pointeur
    pMonPoint->x=12;
    pMonPoint->y=20;

    //Pointeur formalisée
    (*pMonPoint).x=10;
    (*pMonPoint).y=12;

    int i=0

    //Problématique
    /* for(i=0i<100i++){
        tab_point[i].x=0;
        tab_point[i].y=0;} */

    pMonPoint.x=5;
    pMonPoint.y=10;
    //MonPoint.str_couleur="black" c'est un non
    strcpy(MonPoint.str_couleur,"black");

    setPoint(&MonPoint,8,8"red")

    //Les enum
    Couleur cl1;   //C L 1

    cl1=red; //=1;

    boolean bln_val=faux;



    //Biensûr, tout ces codes sont à éxécuter pas-à-pas, c'est de la vérification de code
    return 0;
}


void SetPoint(tPoint *pPoint, int n_x, int n_y, char str_couleur[10]){

    pPoint->x=n_x;
    pPoint->y=n_y;
    strcpy(pPoint->str_couleur,str_couleur);


    }
