#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* int Exercise1()
{
    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int Val=0;
    int Occurence=0;
    int NombreOccurence=0;
    char str_NomFichier[21]; //+1 pour /0

    //Ecriture de fichier de type
    printf("Donnez le nom du fichier a creer :\n");
    printf("Veuillez ne pas donner d extension a ce fichier, vous ecrirez en binaire a l interieur \n");
    scanf("%20s",str_NomFichier);
    fflush(stdin);

    if((fSortie=fopen(str_NomFichier,"wb"))==NULL){
        fprintf(stderr,"Erreur ouverture du fichier :%s\n", strerror(errno));

        } else {
            do{
                //Lors de l ecriture
                printf("Donnez un entier entre 0 ou 1 :\n");
                printf("Entrez un entier 2 pour sortir. \n");
                scanf("%d",&Val);

                if(Val<=1){
                    fprintf(fSortie,"%d\n", Val);
                    Occurence++;
            }
        }while(Val<=1);
    }

        fclose(fSortie);

        //Lecture du fichier
        printf("Donnez un nom du fichier a lire : \n");
        printf("Il n y as pas d extention pour les fichiers binaires. \n");
        scanf("%20s",str_NomFichier);
        fflush(stdin);

        //Ouverture du fichier en question
        if((fEntree=fopen(str_NomFichier,"rb"))==NULL){

            fprintf(stderr,"Erreur ouverture du fichier :%d\n", strerror(errno));

            }else{

                while(NombreOccurence<Occurence){
                    fscanf(fEntree,"%d",&Val);
                    printf("%d\n", Val);
                    NombreOccurence++;

                }
            }
    return 0;   */ //Ma version

    //Le corrigée


/* string containing a file access mode. It can be:
"r"	read: Open file for input operations. The file must exist.
"w"	write: Create an empty file for output operations. If a file with the same name already exists, its contents are discarded and the file is treated as a new empty file.
"a"	append: Open file for output at the end of a file. Output operations always write data at the end of the file, expanding it.
            Repositioning operations (fseek, fsetpos, rewind) are ignored. The file is created if it does not exist.
"r+" read/update: Open a file for update (both for input and output). The file must exist.
"w+" write/update: Create an empty file and open it for update (both for input and output).
                    If a file with the same name already exists its contents are discarded and the file is treated as a new empty file.
"a+" append/update: Open a file for update (both for input and output) with all output operations writing data at the end of the file.
                    Repositioning operations (fseek, fsetpos, rewind) affects the next input operations, but output operations move the position back to the end of file. The file is created if it does not exist.
*/


int CorrigeeBinaire()
{

    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int n_val=0;
    int n_Occurence=0;
    int n_NombreVal=0;
    char str_nomFichier[21];


    printf("Donnez le nom du fichier a creer :\n");
    scanf("%20s",str_nomFichier);
    fflush(stdin);

    //Les fichiers txt
    //Ecriture dans un fichier de type txt

    //Ouverture du fichier en ecriture
    if((fSortie=fopen(str_nomFichier,"w"))==NULL){
         //Test ouverture
        fprintf(stderr,"Erreur ouverture et creation du fichier :%s\n",strerror(errno));
    }else{
            do{
                printf("Donnez un entier diff de 0 :\n");
                scanf("%d",&n_val);
                if(n_val!=0){
                    //Ecriture dans le fichier
                    fprintf(fSortie,"%d\n",n_val);
                    n_Occurence++;
                }
            }while(n_val!=0);
    }
    fclose(fSortie); //fermeture du descripteur de fichier*/

    //Lecture dans un fichier de type txt
    printf("Donnez le nom du fichier a lire : \n");
    scanf("%20s",str_nomFichier);
    fflush(stdin);
            //Les fichiers binaires

    //Ouverture du fichier en ecriture de type binaire
    if((fSortie=fopen(str_nomFichier,"wb"))==NULL){
         //Test ouverture
        fprintf(stderr,"Erreur ouverture et creation du fichier :%s\n",strerror(errno));

    }else{

            do{

                printf("Donnez un entier diff de 0 :\n");
                scanf("%d",&n_val);

                if(n_val!=0){
                    //Ecriture dans le fichier
                    fwrite(&n_val,sizeof(int),1,fSortie);
                    //Cette fonction permet d'écrire un certain nombre d'octets vers le flux
                    //spécifié en quatrième paramètre.
                    //Les octets à écrire seront stockés dans le buffer passé en premier paramètre. Pour spécifier le nombre d'octets à écrire,
                    //il faut jouer sur deux paramètres : le nombre de bloc d'octets à lire
                    //ainsi que la taille de chacun des blocs.
                    n_Occurence++;
                }


            }while(n_val!=0);


    }

    fclose(fSortie); //fermeture du descripteur de fichier



    //Lecture dans un fichier de type binaire

    printf("Donnez le nom du fichier a lire : \n");
    scanf("%20s",str_nomFichier);
    fflush(stdin);

     //Ouverture du fichier en lecture
    if((fEntree=fopen(str_nomFichier,"rb"))==NULL){
        //Test ouverture
         fprintf(stderr,"Erreur ouverture du fichier :%s\n",strerror(errno));
    }else{


            while(n_NombreVal<n_Occurence){

                 //Lecture dans le fichier
                fread(&n_val,sizeof(int),1,fEntree);
                //Cette fonction permet de lire un certain nombre d'octets à partir
                //d'un flux. L'ensemble des octets lu seront stockés dans un buffer
                //passé en premier paramètre : il faut donc être certain que le buffer
                // est bien de taille suffisante, par rapport à la taille des données
                // demandées. Pour spécifier le nombre d'octets à lire,
                //il faut jouer sur deux paramètres : le nombre de bloc d'octets
                //à lire ainsi que la taille de chacun des blocs.
                //La taille totale du buffer à allouer sera donc le produit de
                //ces deux tailles précédentes.
                printf("%d\n",n_val);
                n_NombreVal++;

            }



    }

    fclose(fEntree);//fermeture du descripteur de fichier


    return 0;
}
