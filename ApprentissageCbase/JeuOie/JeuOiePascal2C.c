//Algorithme papier : Jeu de l'oie
//But : Pouvoir jouer au jeu de l'oie
//Entr�e : Int�ractions avec les d�es
//Sortie : Mouvements sur les cases

#include <stdio.h>
#include <stdlib.h>
#define ARRIVEE 66
#define DEPART 0
#define EXEPTION 63
#define MORT 58
#define MULTIPLE 9
#define VALMIN 2
#define VALMAX 12

int DEPART ();
int JetDeDeesFunction();
int CheckDice(int JetDeDees);
int Deplacement(int Emplacement);


int main(){

const int DEPART;
const int ARRIVEE;
const int EXEPTION;
const int MORT;
const int MULTIPLE;
const int VALMIN;
const int VALMAX;

char Car='a'
int Emplacement;
int Recul;

int Emplacement=DEPART;													// D�claration de certaines conditions
int JetDeDees=DEPART;
int Recul=0;

do{
    JetDeDees = JetDeDees2();

    if (int CheckDice(int JetDeDees)==1{
        Emplacement += Emplacement+JetDeDees;


    printf ("%d", Emplacement);
    printf ("%d", JetDeDees);
                           // += permet d'ajouter des valeurs avec d'autres valeurs !

    int Victoire(Emplacement);


/*    printf ("Bienvenue au jeu de l'oie\n");										// Message de bienvenue
	printf ("Voullez vous jouer au jeu ? O/N\n");								// Si le joueur veut jouer
	scanf Car;
	printf ("Veuillez lancer vos d�es\n");

	while (Emplacement =! ARRIVEE & Car <> 'O') do {


	for
		printf ("Veuillez lancer vos d�es\n");							// D�but de la boucle avec l'INPUT de l'utilisateur
		scanf JetDeDees;
	while (JetDeDees < VALMIN, or VALMAX);

		Emplacement = Emplacement &JetDeDees;

		if (((Emplacement Mod 9) = 0) ET (Emplacement <> EXEPTION)){			// Conditions pour le doublage de cases toutes les 9 cases,
			Emplacement <- Emplacement + JetDeDees									// sauf pour la case 0 et 63.
			printf ("Vous doublez votre d�placement de cases !\n")};					// (On encapsule les valeurs) Second lanc�e de d�s !

		if (Emplacement = MORT){											// V�rifie si sur la case de mort
			Emplacement &DEPART
			printf ("Vous �tes de retour � la case d�part\n")};

		if (Emplacement > ARRIVEE){											// V�rifie pour le Recul apr�s l'arriv�e
			Recul <- Emplacement - 66
			Emplacement <- ARRIVEE - Recul};

		if (Emplacement =! ARRIVEE){											// Demande si le joueur veut continuer a jouer au jeu
			printf ("Voullez vous continuer de jouer au jeu ? O/N\n")
			scanf Car };


		if (Emplacement = ARRIVEE){											// Si le joueur gagne, cette condition est mis en oeuvre
			printf ("Vous avez gagn�(e) !")
			printf ("Voullez vous rejouer au jeu ? O/N\n")
			scanf Car }; } */

	//end while
    }}
    return 0;
}

int DEPART(){

    return DEPART;}

int JetDeDeesFunction(){
    int JetDeDees;

    printf ("Entrez un entier entre 2 et 12 :");
    scanf ("%d",&JetDeDees);
    return JetDeDees; };

int CheckDice(int JetDeDees){

    if (JetDeDees>=VALMAX && JetDeDees=<VALMIN){
    return 1;
    }
    else{
        printf("Veuillez donner un entier valide\n")
    return 0;
    };

int Deplacement(int Emplacement,int JetDeDees){
    if (Emplacement%9 ==0 && Emplacement<EXEPTION){
        Emplacement += JetDeDees;}

    if (Emplacement > ARRIVEE){
        printf("Vous avez d�passer la case d'arriv�e, vous repartez en arri�re\n")
        Emplacement = ARRIVEE - (Emplacement - ARRIVEE)
    }
    if (Emplacement == MORT){
        printf("Vous �tes tomb� sur la case Mort, vous retourner � la case d�part !\n")
        Emplacement = DEPART
    }
    return Emplacement;
};

int Victoire(Emplacement){
    if (Emplacement == ARRIVEE){
        printf("Vous avez gagner, f�licitation !\n")
        //printf("Voudriez vous rejouer ? O/N\n")
        return 1;
    }
    else{
        return 0;
    }
    };

/*DLC code random
jet = (rand() % 12 + 1 */
