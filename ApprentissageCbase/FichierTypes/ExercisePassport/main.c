#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int Val=0;
    int Occurence=0;
    int NombreOccurence=0;
    char car;
    int Compteur=0;
    char str_NomFichier[21]; //+1 pour /0
    char str_Nom[21];
    char str_Prenom[21];
    int ID;

    //Ecriture de fichier de type (Comme .txt)
    printf("Donnez votre nom pour un fichier passport a creer :\n");
    printf("Oubliez pas a ecrire l extention du fichier qui est .txt ! \n");
    scanf("%20s",str_NomFichier);
    fflush(stdin);

    //Concatainer le nom du fichier pour ajouter le Passport

    if((fSortie=fopen(str_NomFichier,"w"))==NULL){
        fprintf(stderr,"Erreur ouverture du fichier :%s\n", strerror(errno));

        } else {
            do{
                Compteur++;

                printf("Veuillez entree votre nom :\n");
                scanf("%s",str_Nom);
                fprintf(fSortie,"%s\n", str_Nom);
                fflush(stdin);

                printf("Veuillez entree votre prenom :\n");
                scanf("%s",str_Prenom);
                fprintf(fSortie,"%s\n", str_Prenom);
                fflush(stdin);

                printf("Vous allez reçevoir un ID pour votre passeport, veuillez patienter :\n");
                //random 0001/9999
                ID=Compteur;
                //ID <- random 9999
                fprintf(fSortie,"%d\n", ID);
                printf("Votre ID est %d \n",ID);
                fflush(stdin);

                printf("Voullez continuer ?\n");
                scanf("%c",&car);
                fflush(stdin);

            }while(car!='n');
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

