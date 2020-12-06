#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


//program B_Navale | Port de la version Pascal qui n'est pas codé par David;
//Le port est recodé par David

//Type structuré
//TabDeChar=array[0..11,0..11] of string;   Ancient code Pascal
int TabDeChar[11][11];

//Les fonctions, j'avais oubliée de les initialiser en haut de la page

//Déclarations
//Coordinées de tirs du jeu
struct	coord{
		int x1;
		int y1;
		int x2;
		int y2;
};

//Des variables POUR les pions bateaux
struct	cara{
		int l;
		int lim;
		int pos;
		char nom;
};

//Les bateaux, les pions du jeu
struct bt{
		struct PorteAvion;
		struct Cuirasse;
		struct Destroyer;
		struct SousMarin;
		struct Torpilleur;
};

// Définnie les joueurs, qui obtiendront les dossiers avec les pions bateaux
struct j{
      struct bt j1;
      struct bt j2;
};

struct map{
        int tabjoueur1;
//        tabjoueur1=TabDeChar;           // Je pense qu'il faut le déplacer dans la fonction à laquel elle se fait appelé, ou même au dessus du main ?
		int tabjoueur2;
//        tabjoueur2=TabDeChar;         // Pareil
		int tabattaque1;
//        tabattaque1=TabDeChar;      // Pareil
		int tabattaque2;
//		tabattaque2=TabDeChar;    // Pareil
};

struct plateau{
        int carte;
//		carte=map;          //Pareil
		int joueur;
//		joueur=j;         //Pareil
};

//Déclarations de variables
char don;
int pa,cr,dt,ss,tp
pa,cr,dt,ss,tp=j;           //Par contre, je ne sais pas si le programme fais la différence entre j ici, j joueur ou j j1)
int plat;
plat=plateau;             //à moin que c'est correct

//Déclaration des Fonctions et Procédures
void Reset();
int Init();
//int Affichage(plat.carte.tabjoueur1,don);
int Affichage(int plat,int carte,int tabjoueur1,char don);
	int Sens(short ok, char ship; short joueuractif);
	int InsereBateau(int TabDeChar[11][11],char p, int lim, int l);
int Tour_Pose(don);
int Attaque(int tabjoueur,tabattaque: char TabDeChar, char don, int joueur);
int CheckVie(char TabDeChar);
void Procedureprincipale();


//Le jeu commence içi ! ---------------------------------------------------------------------------------------------------------
//La procédure principale du jeu, pouvant Initialiser te lancer le jeu

//Procédure Jeu();
void Procedureprincipale(){

        short joueuractif, fin;
		short fin=0;
		while (fin==0) {            //Je ne comprend pas cette instruction
			if (fin==0) {
				short joueuractif=1;
				plat.carte.tabattaque1=Attaque(plat.carte.tabjoueur2,plat.carte.tabattaque1,don,joueuractif);
				fin=CheckVie(plat.carte.tabattaque1);
				scanf;
			}
			if (fin==0) {
				short joueuractif=2;
				plat.carte.tabattaque2=Attaque(plat.carte.tabjoueur1,plat.carte.tabattaque2,don,joueuractif);
				fin=CheckVie(plat.carte.tabattaque2);
				scanf;
			}
		}
		if (joueuractif==1)
			writeln('Joueur1 gagne la partie!');
		if (joueuractif==2)
			writeln('Joueur2 gagne la partie!');
//        scanf;                //readln;
	return;}

//Liste de Procédures et Fonctions -----------------------------------------------------------------------------------------------
//Procédure Init
int Init(){

		plat.joueur.j1.PorteAvion.l=5;
		plat.joueur.j2.PorteAvion.l=5;
		plat.joueur.j1.Cuirasse.l=4;
		plat.joueur.j2.Cuirasse.l=4;
		plat.joueur.j1.Destroyer.l=3;
		plat.joueur.j2.Destroyer.l=3;
		plat.joueur.j1.SousMarin.l=3;
		plat.joueur.j2.SousMarin.l=3;
		plat.joueur.j1.Torpilleur.l=2;
		plat.joueur.j2.Torpilleur.l=2;

		plat.joueur.j1.PorteAvion.lim=7;
		plat.joueur.j2.PorteAvion.lim=7;
		plat.joueur.j1.Cuirasse.lim=8;
		plat.joueur.j2.Cuirasse.lim=8;
		plat.joueur.j1.Destroyer.lim=9;
		plat.joueur.j2.Destroyer.lim=9;
		plat.joueur.j1.SousMarin.lim=9;
		plat.joueur.j2.SousMarin.lim=9;
		plat.joueur.j1.Torpilleur.lim=10;
		plat.joueur.j2.Torpilleur.lim=10;

		plat.joueur.j1.PorteAvion.nom="porte avion";
		plat.joueur.j2.PorteAvion.nom="porte avion";
		plat.joueur.j1.Cuirasse.nom="cuirasse";
		plat.joueur.j2.Cuirasse.nom="cuirasse";
		plat.joueur.j1.Destroyer.nom="destroyer";
		plat.joueur.j2.Destroyer.nom="destroyer";
		plat.joueur.j1.SousMarin.nom="sous-marin";
		plat.joueur.j2.SousMarin.nom="sous-marin";
		plat.joueur.j1.Torpilleur.nom="torpilleur";
		plat.joueur.j2.Torpilleur.nom="torpilleur";
return;}

//Procédure reset
void Reset(){
	int i,j;
		for ((i=0 ; i<10 ; i++)) do {
            while ((j=0 ; j<10 ; j++)) do {
				plat.carte.tabjoueur1[i,j]="_ ";
				plat.carte.tabjoueur2[i,j]="_ ";
				plat.carte.tabattaque1[i,j]="_ ";
				plat.carte.tabattaque2[i,j]="_ ";
			}
		}
return;}

//Procedure Affichage(tabjoueur:TabDeChar;don:string);
void Affichage(int tabjoueur[][],int TabDeChar[][], char don){          //Probablement pas correct
	int i, j;

		system("cls");
		for (i=0 ; i<10 ; i++) {
			tabjoueur[i,0]:=don[i+1]+' ';
			tabjoueur[0,i]:=don[i+1]+' ';
		tabjoueur[10,0]:="10";
		tabjoueur[0,10]:="10";
		for (i=0 ; i<10 ; i++) {
			for (j=0 ; j<10 ; j++) {
				if tabjoueur[j,i]="_ ";
					TextColor(Blue);
					printf(tabjoueur[j,i]);
					TextColor(White);
				}else if{
                        tabjoueur[j,i]="* ";
						TextColor(Yellow);
						printf(tabjoueur[j,i]);
						TextColor(White);
					}else if{
                            tabjoueur[j,i]="B ";
							TextColor(Green);
							write(tabjoueur[j,i]);
							TextColor(White);
						}else if{
                                tabjoueur[j,i]="X ";
								TextColor(Red);
								printf(tabjoueur[j,i]);
								TextColor(White);
							}else if{
                                    tabjoueur[j,i]="O ";
									TextColor(Blue);
									write(tabjoueur[j,i]);
									TextColor(White);
								}else{
									printf(int tabjoueur[j,i]);
								};
							};
						};
//           printf; //quoi précisément?     //writeln; code original
return;}

//Function Sens(ok:boolean;ship:string;joueuractif:integer):char;
int Sens(short ok, char ship; short joueuractif){        //Erreur, il n'y as pas de boolean en C, remplacer avec un short
	char p;

    while (ok==0){      //Argument demande si ok=false, changé en ok==0 (short)
        printf ("Joueur ",joueuractif,", voulez vous inserer votre ",ship," horizontalement (H) ou verticalement (V)?\n");
        scanf(p);
        if (p=='H' || p=='V'){
            ok=1;
            Sens=p;
        }
    }
return;}

//Function InsereBateau(tab:TabDeChar;p:char;lim,l:integer):TabDeChar;
int InsereBateau(int TabDeChar[11][11],char p, int lim, int l){

	short ok, placement;
    int x,y,i,j;

    ok=0;
    placement=1;
    while (ok==0){
        printf("Veuillez entrer les coordonnees de la pointe du navire\n");
        printf("X : ");
        scanf(x);
        printf("Y : ");
        scanf(y);
        if (x<11 && y<11){ //Check si la pointe du navire se trouve dans la carte
            if (p='H' && x<lim){ //Check si le bateau tient dans la carte
                for (i=0 ; i<10 ; i++){ //Check si un bateau est sur le chemin
                    if (tab[x+i-1,y]="B " || tab[x+1-1,y]="* ")
                        placement=0;
                    }
                }
            if (placement==1){  //Si pas de bateau dans le chemin, création d'un bateau
                TextColor(Red);
                if (tab[x-1,y]="_ ");
                    (tab[x-1,y]="* ");
                if (tab[x-1,y-1]="_ ");
                    (tab[x-1,y-1]="* ");
                if (tab[x-1,y+1]="_ ");
                    (tab[x-1,y+1]="* ");
                TextColor(White);
                for (i=0 ; i<10 ; i++){         //Pas fini de retranscrire, je suis sûr que ça ne marchera pas en C
                    tab[x+i-1,y-1]="* ";
                    tab[x+i-1,y]:="B ";
                    tab[x+i-1,y+1]="* ";
                }
                if (tab[x+i,y]="_ ")
                    tab[x+i,y]="* ";
                if (tab[x+i,y+1]="_ ")
                    tab[x+i,y+1]="* ";
                if (tab[x+i,y-1]="_ ")
                tab[x+i,y-1]:="* ";
                ok=true;
            }
        }
        if (p=='V' && y<lim){
            for (i=0 ; i<10 ; i++) { //Check si un bateau est sur la case
                if (tab[x,y+i-1]="B " || tab[x,y+i-1]="* ")
                    placement=0;
                }
            }
            if (placement==1){ //Si pas de bateau sur la case, création d'un bateau
                if (tab[x,y-1]="_ ");
                    tab[x,y-1]:="* ";
                if (tab[x+1,y-1]="_ ");
                    tab[x+1,y-1]:="* ";
                if (tab[x-1,y-1]="_ ");
                    tab[x-1,y-1]:="* ";
                for (i=0 ; i<10 ; i++) {
                    tab[x-1,y+i-1]:="* ";
                    tab[x,y+i-1]:="B ";
                    tab[x+1,y+i-1]:="* ";
                    };
                if (tab[x,y+i]="_ ");
                    tab[x,y+i]:="* ";
                if (tab[x+1,y+i]="_ ");
                    tab[x+1,y+i]:="* ";
                if (tab[x-1,y+i]="_ ");
                    tab[x-1,y+i]:="* ";
                ok=1;
                placement=1;
                InsereBateau=tab;
            }
        } //Déplacer crochet
return;}

//Procedure Tour_Pose(don:string);
void Tour_Pose(char don){

	int lim, l;
    short joueuractif,ok,placement;

    joueuractif=1;
    plat.carte.tabjoueur1=InsereBateau(plat.carte.tabjoueur1,Sens(ok,plat.joueur.j1.PorteAvion.nom,joueuractif),plat.joueur.j1.PorteAvion.lim,plat.joueur.j1.PorteAvion.l);
    Affichage(plat.carte.tabjoueur1,don);
    plat.carte.tabjoueur1=InsereBateau(plat.carte.tabjoueur1,Sens(ok,plat.joueur.j1.Cuirasse.nom,joueuractif),plat.joueur.j1.Cuirasse.lim,plat.joueur.j1.Cuirasse.l);
    Affichage(plat.carte.tabjoueur1,don);
    plat.carte.tabjoueur1=InsereBateau(plat.carte.tabjoueur1,Sens(ok,plat.joueur.j1.Destroyer.nom,joueuractif),plat.joueur.j1.Destroyer.lim,plat.joueur.j1.Destroyer.l);
    Affichage(plat.carte.tabjoueur1,don);
    plat.carte.tabjoueur1=InsereBateau(plat.carte.tabjoueur1,Sens(ok,plat.joueur.j1.SousMarin.nom,joueuractif),plat.joueur.j1.SousMarin.lim,plat.joueur.j1.SousMarin.l);
    Affichage(plat.carte.tabjoueur1,don);
    plat.carte.tabjoueur1=InsereBateau(plat.carte.tabjoueur1,Sens(ok,plat.joueur.j1.Torpilleur.nom,joueuractif),plat.joueur.j1.Torpilleur.lim,plat.joueur.j1.Torpilleur.l);
    Affichage(plat.carte.tabjoueur1,don);

    joueuractif=2;
    Affichage(plat.carte.tabjoueur2,don);
    plat.carte.tabjoueur2=InsereBateau(plat.carte.tabjoueur2,Sens(ok,plat.joueur.j2.PorteAvion.nom,joueuractif),plat.joueur.j2.PorteAvion.lim,plat.joueur.j2.PorteAvion.l);
    Affichage(plat.carte.tabjoueur2,don);
    plat.carte.tabjoueur2=InsereBateau(plat.carte.tabjoueur2,Sens(ok,plat.joueur.j2.Cuirasse.nom,joueuractif),plat.joueur.j2.Cuirasse.lim,plat.joueur.j2.Cuirasse.l);
    Affichage(plat.carte.tabjoueur2,don);
    plat.carte.tabjoueur2=InsereBateau(plat.carte.tabjoueur2,Sens(ok,plat.joueur.j2.Destroyer.nom,joueuractif),plat.joueur.j2.Destroyer.lim,plat.joueur.j2.Destroyer.l);
    Affichage(plat.carte.tabjoueur2,don);
    plat.carte.tabjoueur2=InsereBateau(plat.carte.tabjoueur2,Sens(ok,plat.joueur.j2.SousMarin.nom,joueuractif),plat.joueur.j2.SousMarin.lim,plat.joueur.j2.SousMarin.l);
    Affichage(plat.carte.tabjoueur2,don);
    plat.carte.tabjoueur2=InsereBateau(plat.carte.tabjoueur2,Sens(ok,plat.joueur.j2.Torpilleur.nom,joueuractif),plat.joueur.j2.Torpilleur.lim,plat.joueur.j2.Torpilleur.l);
    Affichage(plat.carte.tabjoueur2,don);
return};

//Function Attaque(tabjoueur,tabattaque:TabDeChar;don:string;joueur:integer):TabDeChar;
int Attaque(int tabjoueur, tabattaque: char TabDeChar, char don; int joueur){

	int x,y;
    short ok;

    ok=0;
    Affichage(tabattaque,don);
    printf("Veuillez entrer les coordonnees de tir joueur",joueur);
    while (ok==0){
        printf("X : ");
        scanf(x);
        printf("Y : ");
        scanf(y);
        if (x>0 && x<11 && y>0 && y<11){
            if tabattaque[x,y]="_ "{
                short ok==1;
                if tabjoueur[x,y]="B "{
                    tabattaque[x,y]="X ";
                    int Affichage(tabattaque,don);
                    printf ("Toucher"); }
                } else {
                    tabattaque[x,y]:="O ";
                    Affichage(tabattaque,don);
                    writeln ("A l eau");
                }
            }
        }
    Attaque=tabattaque;
return;}

//Function CheckVie(tab:TabDeChar):boolean;
int CheckVie(char TabDeChar){


	short mort;
    int nbX,i,j;

    int nbX=0;
    short mort=0;
    for (i=0 ; i<10 ; i++) {
        for (j=0 ; j<10 ; j++) {
            if (tab[i,j]="X ")
                int nbX++;
        }
    }
    if (nbX==17)
        short mort=1;
    int CheckVie=mort;
return;}

void main(){

	char don =' 1234567890';
	void Reset();
	int Init();
	int Affichage(plat.carte.tabjoueur1,don);
	int Tour_Pose(don);
	void Procedureprincipale();
//	scanf;          //readln;
return;}
