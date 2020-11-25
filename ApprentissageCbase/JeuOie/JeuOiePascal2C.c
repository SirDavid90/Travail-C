//Algorithme papier : Jeu de l'oie
//But : Pouvoir jouer au jeu de l'oie
//Entrée : Intéractions avec les dées
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

int Emplacement=DEPART;													// Déclaration de certaines conditions
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
	printf ("Veuillez lancer vos dées\n");

	while (Emplacement =! ARRIVEE & Car <> 'O') do {


	for
		printf ("Veuillez lancer vos dées\n");							// Début de la boucle avec l'INPUT de l'utilisateur
		scanf JetDeDees;
	while (JetDeDees < VALMIN, or VALMAX);

		Emplacement = Emplacement &JetDeDees;

		if (((Emplacement Mod 9) = 0) ET (Emplacement <> EXEPTION)){			// Conditions pour le doublage de cases toutes les 9 cases,
			Emplacement <- Emplacement + JetDeDees									// sauf pour la case 0 et 63.
			printf ("Vous doublez votre déplacement de cases !\n")};					// (On encapsule les valeurs) Second lancée de dés !

		if (Emplacement = MORT){											// Vérifie si sur la case de mort
			Emplacement &DEPART
			printf ("Vous êtes de retour à la case départ\n")};

		if (Emplacement > ARRIVEE){											// Vérifie pour le Recul après l'arrivée
			Recul <- Emplacement - 66
			Emplacement <- ARRIVEE - Recul};

		if (Emplacement =! ARRIVEE){											// Demande si le joueur veut continuer a jouer au jeu
			printf ("Voullez vous continuer de jouer au jeu ? O/N\n")
			scanf Car };


		if (Emplacement = ARRIVEE){											// Si le joueur gagne, cette condition est mis en oeuvre
			printf ("Vous avez gagné(e) !")
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
        printf("Vous avez dépasser la case d'arrivée, vous repartez en arrière\n")
        Emplacement = ARRIVEE - (Emplacement - ARRIVEE)
    }
    if (Emplacement == MORT){
        printf("Vous êtes tombé sur la case Mort, vous retourner à la case départ !\n")
        Emplacement = DEPART
    }
    return Emplacement;
};

int Victoire(Emplacement){
    if (Emplacement == ARRIVEE){
        printf("Vous avez gagner, félicitation !\n")
        //printf("Voudriez vous rejouer ? O/N\n")
        return 1;
    }
    else{
        return 0;
    }
    };

/*DLC code random
jet = (rand() % 12 + 1 */
