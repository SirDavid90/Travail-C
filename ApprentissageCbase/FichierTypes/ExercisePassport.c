#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* But : Faire un passport
Méthode : Script demande le nom de l'utilisateur et ajoute "passport" a coté,
ID, Nom, Prénom de l'utilisateur, avec un type structure */


int Passport()
{
    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int Val=0;
    int Occurence=0;
    int NombreOccurence=0;
    char str_NomFichier[21]; //+1 pour /0
    char str_Nom[21];
    char str_Prenom[21];
    int ID[5];

    //Ecriture de fichier de type (Comme .txt)
    printf("Donnez votre nom pour un fichier passport a creer :\n");
    printf("Oubliez pas a ecrire l extention du fichier qui est .txt ! \n");
    scanf("%20s passport",str_NomFichier);
    fflush(stdin);

    if((fSortie=fopen(str_NomFichier,"w"))==NULL){
        fprintf(stderr,"Erreur ouverture du fichier :%s\n", strerror(errno));

        } else {
            do{
                printf("Donnez un entier different de 0 :\n");
                scanf("%d",&Val);

                if(Val!=0){
                    fprintf(fSortie,"%d\n", Val);
                    Occurence++;
            }
        }while(Val!=0);
    }

        fclose(fSortie);

        //Lecture du fichier
        printf("Donnez un nom du fichier a lire : \n");
        printf("Il faut ajouter une extention si il y en a une. \n");
        scanf("%20s",str_NomFichier);
        fflush(stdin);

        //Ouverture du fichier en question
        if((fEntree=fopen(str_NomFichier,"r"))==NULL){

            fprintf(stderr,"Erreur ouverture du fichier :%d\n", strerror(errno));

            }else{

                while(NombreOccurence<Occurence){
                    fscanf(fEntree,"%d",&Val);
                    printf("%d\n", Val);
                    NombreOccurence++;

                }
            }

    return 0;
}
