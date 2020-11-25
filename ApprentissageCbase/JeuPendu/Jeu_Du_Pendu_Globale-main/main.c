#include <stdio.h>
#include <stdlib.h>

//Version modifi� de l'algorithme de Jeffrey, par David Lechevalier

//Corps:
//Initialiser le mot � trouver
//Initialiser l'affichage
//Permettre au joueur d'entr� une lettre
//V�rifier si la lettre est pr�sente
//V�rification de victoire

//Et si la fa�on de pouvoir mettre les valeurs global -> �tait encore plus simple qu'il soit ? Suffirrait'il de mettre le programme entier dans un int_main pour qu'il devient le nouveau programme de base, et que tout fonctionne ?
//Remarque : je pense que c'est aussi �fficase que de porter une map d'un jeu � un autre en d�placent le fichier map du dossier du jeu1 � jeu2, mais je vais quand m�me essayer (Oui, il y as eu des erreures, les Void ne fonctionnenet plus)


    void affichage(int longCh, char c_ChGuess[8]);
    void guessChar(char *c_char);
    //void checkChar(char c_char,char *c_ChGuess[8],char c_Chaine[8],int longCh,int *nbIncorrect);

    void checkChar(char c_char,int longCh, int *nbIncorrect);
    void modifAffich(int nbIncorrect);

    int VerifVictoire(int nbIncorrect, int longCh);

    char c_Chaine[8]={'B','o','n','j','o','u','r'};
    char c_ChGuess[8]={'_','_','_','_','_','_','_'};
    char c_pendu[7][5]={{'_','_','_','_','_'},
                        {' ','|',' ','|',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {' ','|',' ',' ',' '},
                        {'_','|','_',' ',' '}};

    int main()
    {

        //char c_Chaine[8]={'b','o','n','j','o','u','r'};
        //char c_ChGuess[8]={'_','_','_','_','_','_','_'};
        int longCh = strlen(c_Chaine);
        int nbIncorrect=0;
        int FinDuJeu=0;

        affichage(longCh, c_ChGuess);
        char c_char;


        //checkChar(c_char, &c_ChGuess, c_Chaine, longCh, &nbIncorrect);
        //checkChar(c_char, longCh, &nbIncorrect);
        while(FinDuJeu==0){
            guessChar(&c_char);
            checkChar(c_char,longCh,&nbIncorrect);

            modifAffich(nbIncorrect);
            affichage(longCh, c_ChGuess);
            FinDuJeu = VerifVictoire(nbIncorrect, longCh);
            fflush(stdin);
        }
        return 0;
    }

    //Affichage du pendu
    void affichage(int longCh, char c_ChGuess[8]){
        //Affichage du texte a trouver
        for(int i=0;i<longCh;i++){
            printf("%c ", c_ChGuess[i]);
        }
        printf("\n");
        //Affichage du pendu
        for(int i=0;i<7;i++){
            for(int j=0;j<5;j++){
                printf("%c", c_pendu[i][j]);
            }
            printf("\n");
        }
    }

    //Demande d'entr�
    void guessChar(char *c_char){
        printf("Veuillez entrer une lettre\n");
        *c_char=getchar();
    }

    //V�rification du mot � trouver et du caract�re
    void checkChar(char c_char,int longCh, int *nbIncorrect){
        int nbCorrecte=0;
        //si une lettre est pr�sente, on l'ajoute dans la chaine � trouver
        for(int i=0;i<longCh;i++){
            if(tolower(c_Chaine[i])==tolower((c_char))){
                c_ChGuess[i]=tolower(c_char);
                nbCorrecte++;
            }
        }
        if(nbCorrecte==0){
            //printf("Salut");
            *nbIncorrect+=1;
        }
    }


    int VerifVictoire(int nbIncorrect, int longCh){
        int nbCorrect=0;
        if(nbIncorrect==6){
            printf("\n P e r d u \n");
            printf("La reponse eait : %s", c_Chaine);
            return 2;
        }
        for(int i=0;i<longCh;i++){
            if(tolower(c_Chaine[i])==tolower((c_ChGuess[i]))){
                nbCorrect++;
            }
        }
        if(nbCorrect==longCh){
            printf("\n V i c t o i r e \n");
            return 1;
        }
        return 0;
    }

    //Affichage du pendu
    void modifAffich(int nbIncorrect){
        switch(nbIncorrect){
            case 1:
                c_pendu[2][3]='o';
                break;
            case 2:
                c_pendu[3][3]='|';
                break;
            case 3:
                c_pendu[3][2]='/';
                break;
            case 4:
                c_pendu[3][4]='|';
                break;
            case 5:
                c_pendu[4][2]='/';
                break;
            case 6:
                c_pendu[4][4]='|';
                break;
        }
    }
//Code donn�e (ha) de Jeffrey, les l�g�res modifications sont faites par David Lechevalier pour que cela soit fonction(nel, ha)
