#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//Utiliser des printf pour dessiner une partie du pendu, a chaque case switch, l'�cran est n�ttoy�, le mot affich� et pendu d�ssiner d'avantage... pendue.
//Et le jeu repose la question "Donner une lettre"

//Utiliser des pointeur pour changer des valeurs ou les rependres dirrectement
//Comparateur de Tab[Motcach�e] et Tab[MotD�voil�e], Si elles sont identiques, victoire -> 1

void main(){

    int Victoire =0;
    int Erreur =0;
    char Input ='o';
    char InputChar ='c';
    int i=0;
    int j=0;
    // int *Pointeur; Non utilis�
    // *Pointeur = point� Pour r�cup�rer une valeur
//-------D�but--------------------------------------------------------------------------------------------------------------------------------------


    //system("cls");
    //printf ("Bonjour, cher utilisateur !\n");
    //printf ("Voudriez-vous jouer au Pendu ? o/n\n");
    //scanf ("%c",&Input);

        //Le jeu attend un input O ou N, sinon elle r�p�te la question
        // while (Input != 'o' || Input !='n'){
    system("cls");
    printf ("Bonjour, cher utilisateur !\n");
    printf ("Voudriez-vous jouer au Pendu ? o/n\n");
    scanf ("%c",&Input);//}
    fflush(stdin);

//--------Initiation-------------------------------------------------------------------------------------------------------------------------------
    char MotCachee[7]={'A','n','a','n','a','s'};
    char Cachette[7]={'_','_','_','_','_','_'};

        //D�but du jeu
    while (Victoire !=1 && Input =='o')
    {
    //system("cls");    Pourquoi il �fface � r�p�tition apr�s le dessin du pendu ?
    printf ("Veuillez entrer un caractere\n");
    printf ("Vous avez 5 essais\n");
    printf (" |\n o\n\n\n __\n ||\n");
    scanf ("%c",&InputChar);
    fflush(stdin);
        for (i=0; i<7; i++) {
            if (MotCachee[i] == InputChar){
                Cachette[i] = MotCachee[i];
                printf("%c",Cachette[i]);
            }
            else{
                Erreur++;
            }
        while (Victoire !=1){

        if (char Cachette[7]=={'A','n','a','n','a','s'}){
            Victoire++;
            }
        if (int Erreur==6){
            printf ("Vous avez perdu, le mot etait Ananas\n");
            }
        if (int Victoire==1){
            printf ("Vous avez gagnee, felicitation !\n")
            }}
        //printf("Voulez-vous continuer\n (o/n)");
        //scanf ("%c",&Input);

    }

    /*
    }
    //Comparateur des tableaux pour accorder la victoire si toutes les lettres de la 2�me colone sont identiques � la 1�re colone
    if (char MotCachee[i][]{'A','n','a','n','a','s'} = ,char MotCachee[][i]{'_','_','_','_','_','_'}){
    //Accorder le point
    }

        while (Erreur ==1 && Victoire !=1){
    clrscr();
    printf ("Veuillez entrer un caract�re\n");
    printf ("Vous avez encore 4 essais\n");
    printf (" |\n"," Q\n","\n","\n"," _\n"," ||\n");
    //Affichage de CachetteMot (algo qui comprend comment afficher Ananas)
    scanf ("%d",&InputChar);
    //Comparaison du motCach�e
    //Si oui Lettre affiche
    //Si non Erreur++
    }

        while (Erreur ==2 && Victoire !=1){
    clrscr();
    printf ("Veuillez entrer un caract�re\n");
    printf ("Vous avez encore 3 essais\n");
    printf (" |\n Q\n H\n\n _\n ||\n");
    //Affichage de CachetteMot (algo qui comprend comment afficher Ananas)
    scanf ("%d",&InputChar);
    //Comparaison du motCach�e
    //Si oui Lettre affiche
    //Si non Erreur++
    }

        while (Erreur ==3 && Victoire !=1){
    clrscr();
    printf (" |\n Q\n-H\n\n _\n ||\n");
    printf ("Veuillez entrer un caract�re\n");
    printf ("Vous avez encore 2 essais\n");
    //Affichage de CachetteMot (algo qui comprend comment afficher Ananas)
    scanf ("%d",&InputChar);
    //Comparaison du motCach�e
    //Si oui Lettre affiche
    //Si non Erreur++
    }

        while (Erreur ==4 && Victoire !=1){
    clrscr();
    printf (" |\n Q\n-H-\n\n _\n ||\n");
    printf ("Veuillez entrer un caract�re\n");
    printf ("Vous avez encore 1 essais\n");
    //Affichage de CachetteMot (algo qui comprend comment afficher Ananas)
    scanf ("%d",&InputChar);
    //Comparaison du motCach�e
    //Si oui Lettre affiche
    //Si non Erreur++
    }

        while (Erreur ==5 && Victoire !=1){
    clrscr();
    printf (" |\n Q\n-H-\n ||\n _\n ||\n");
    printf ("Veuillez entrer un caract�re\n");
    printf ("Bon, on vas dire que l'essaie 0 compte\n");
    //Affichage de CachetteMot (algo qui comprend comment afficher Ananas)
    scanf ("%d",&InputChar);
    //Comparaison du motCach�e
    //Si oui Lettre affiche
    //Si non Erreur++
    }

        while (Erreur ==6 && Victoire !=1){
    clrscr();
    printf (" |\n X\n/H\\n /\\n|-\n");
    printf ("Vous avez perdu, le mot �tait Ananas !\n");
    char Input ='c';
    int Erreur =0;                                                                   //Donner valeur C pour renvoyer au d�but du programme
    scanf ("%d");
    }

        if (Victoire ==1){
    clrscr();
    printf ("F�licitation, vous avez gagn�e la partie !\n");
    printf ("\n\n \Q/\n H\n ||\n");
    //printf ("Voudriez vous jouer une autre partie ? o/n\n");
    scanf ("%d",&Input);
    int Victoire =0;
    int Erreur =0;
    } */

    return ;
}



/*Optimisation : Retirer plusieurs WHILE, Un seul peut suffire
                    Puis je peux ajouter des IF avec une condition comme "Mauvaise lettre" "Dessiner le Pendu" et autres...
                    Doubler le \ pour l'�crire sans soucies*/
