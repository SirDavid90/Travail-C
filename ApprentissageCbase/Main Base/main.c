#include <stdio.h>
#include <stdlib.h>
#define NBI 10

/* extern - automatique - statique - register - volatile
extern int ext=0;
extern int fctInit_tabEntier(int n_tabEntier(TAILLE)); */

int main()
{
    /* Commentaire Paragraphe */
    // Commentaire Ligne

    //unsignes : non signé (unsigned short sn_entier)
    //integer

    short sn_entier=2;
    int n_entier=4;
    long l_entier=4;

    printf("Taille octet short : %d\n",sizeof(sn_entier));
    printf("Taille octet entier : %d\n",sizeof(n_entier));
    printf("Taille octet long : %d\n",sizeof(l_entier));

    //réel
    float flt_reel=8;
    double dbl_reel=8;
    long double ldbl_reel=16;
    // opérateur de casse j=(float)somme/i  permet de d'indiquer format d evaleur retournée, d'entier à réel;

    printf("Taille octet float : %d\n",sizeof(flt_reel));
    printf("Taille octet double : %d\n",sizeof(dbl_reel));
    printf("Taille octet long double : %d\n",sizeof(ldbl_reel));

    //caractères
    char c_char='a';

    printf("Taille octet caractere : %d\n",sizeof(c_char));

    //opérateurs
    //bool bln_booleen;
    int n_a=0;
    int n_b=0;

    /*

    //==
    //=<
    //>=
    //!= (pas égal)
    //+, -, /, =
    //% (Modulo)
    //& (&&) | (||)
    //! (not)
    //++, --, +=, -=, *=
    ///=

    */

    //printf("%d",(n_a>n_b)); en pratique

    /*
    printf("val de n_a : %d et n_b : %d \n",n_a,n_b);
    scanf("%d",&n_a);
    printf("val de n_a : %x et n_b : %x \n",n_a,n_b);
    scanf("%d",&n_b);

    printf("Bonjour\n");
    printf("Programme exemple\n");

    // affichage formate
    printf("n_a : %d\n",n_a);
    printf("n_b : %d\n",n_b);
    printf("c_char : %c\n",c_char);
    printf("flt_f : %f\n",flt_f);

    const int Taille=100;
    int n_t=Taille; */

    putchar(c_char); // affichage non formate

    /* printf("\n Entrez un entier : \n");
    scanf("%d,&n_a");
    printf("Entrez un deuxieme entier : \n");
    scanf("%d,&n_b"); */

    /*
    printf("\n Entrez deux entiers : \n");
    scanf("%d%d",&n_a,&n_b);

    printf("n_a : %d\n",n_a);
    printf("n_b : %d\n",n_b);

    fflush(stdin);
    printf("Veuillez entrez un caractere : \n");
    scanf("%c",&c_char);

    printf("c_char : %c",c_char);

    printf("Veuillez entrez un caractere : \n");
    c_char=getchar(); //saisir un caractere

    printf("c_char : %c\n",c_char); */

    //condition //Si 1 instruction, aucune accolade
    if(n_a==n_b){
        printf("n_a et n_b identiques\n");
        }
    else if(n_a>n_b){
        printf("n_a > n_b\n");
        }
    /* else, if, else if...{
        //instructions;
    } */

    int n_val=12;

    if (n_val>=10 && n_val<=20){
        printf("%d",n_val);
    }

    int n_choix=0;

    printf("Menu\n");
    printf("1:Menu McDo\n");
    printf("2:Menu KFC\n");
    printf("choix?\n");
    scanf("%d",&n_choix);

    switch(n_choix){
        case 1 :printf("Menu McDo\n");break;
        case 2 :printf("Menu KFC\n");break;
        default:printf("defaut\n");
        }

    //boucle Pour
    int n_i=2;

    for(n_i=0;n_i<NBI;n_i++){
        printf("%d",n_i);
    }

    //faire to
    do{
        printf("%d",n_i);
        n_i++;

    }while(n_i<NBI);

    //to faire

    while(n_i<NBI){
        printf("%d",n_i);
        n_i++;
    }





    return 0;
}

