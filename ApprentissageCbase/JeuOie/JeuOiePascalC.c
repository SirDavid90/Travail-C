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

int main()
{

const int DEPART=0;
const int ARRIVEE=66;
const int EXEPTION=63;
const int MORT=58;
const int MULTIPLE=9;
const int VALMIN=2;
const int VALMAX=12;

char Car='a'
int Emplacement;
int JetDeDees;
int Recul;

int Emplacement=DEPART;													// D�claration de certaines conditions
int JetDeDees=DEPART;
int Recul=0;

    printf ("Bienvenue au jeu de l'oie\n");										// Message de bienvenue
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
			scanf Car }; }

	//end while

    return 0;
}

