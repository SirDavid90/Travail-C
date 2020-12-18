#include <stdio.h>
#include <stdlib.h>

//Valeur Monstre
short PointVieMonstre;
short TraceMonstre;
short ResultatRandom;

//Valeurs Pisteurs
short NombrePisteur;
int TracePisteur;
short PrecisionFusilPisteur;
short PisteurMort;

//Valeur HUD
char Tableau_CadreJeu[30][15];
char Tableau_InfoJeu[30][5];
char Jouer

//Fonctions
int Initialisation();
int RoutineEffacage();
int F_NombrePisteur();
int TourDeJeu();          //Le temps passe, les choses changes, les empreintes disparaisses...

    int TracerCadre();   //Les fonctions utilisable dans la fonction TourDeJeu
    int InfoCadre();
    int UsureDesTraces();
    int RapportPisteurs();
    int TirPisteur();

    int GameOver();
    int Victoire();

//D'autre fonctions
int DeplacementPisteur(); //Ces deux fonctions comprennent aussi l'apparition des traces
int DeplacementMonstre();

//D'autre valeurs
short RetourVersInitiateur; //A utiliser pour retourner vers le d�but du main, pour relancer une nouvelle partie, mais comment faire ?

//Les pointeurs     //(Doivent �tre nombreux, il faut reprendre un maximum de valeurs de ses fonctions
short P_NombrePisteur;


//-------------------------------^Valeurs et Fonctions du jeu^------------------------------
/*Toutes ces valeurs doivent �tre utilis� par des pointeurs, car si il y as plein de fonction c'est pour avoir des lignes de codes qui vont �tre r�-utiliser un paquet de fois
int Initialisation est utilis� pour la premi�re partie lanc�e, mais aussi si on relance le jeu
La m�thodologie est la pr�sente : Si je casse toutes les t�ches du jeu en fonctions et que j'utilise les pointeurs pour r�cup�rer les valeurs, le programme est facile a lire et propre */


int Initialisation()
{
    //Initialiser toutes les valeurs du jeu, que se soit pour commencer une partie, ou en recommencer une nouvelle !
    //Instruction sur l'appartion du monstre sur une case (�viton le hasard pour le moment)
    short PointVieMonstre=4;
    short TraceMonstre=1;

    short NombrePisteur=1;  //=1 pour �viter d'enclencher le gameover si c'�tais encore a 0
    short PrecisionFusilPisteur=;
    int TracePisteur=1;
    short PisteurMort=0;

    char **Tableau_CadreJeu;    //[30][15];  //Refaire le tableau, le remettre a zero
    char Jouer='c';

    //R�initialiser le tableau

        Tableau_CadreJeu[0]="****************************\n";
        Tableau_CadreJeu[1]="*                          *\n";
        Tableau_CadreJeu[2]="*                          *\n";
        Tableau_CadreJeu[3]="*                          *\n";
        Tableau_CadreJeu[4]="*                          *\n";
        Tableau_CadreJeu[5]="*                          *\n";
        Tableau_CadreJeu[6]="*                          *\n";
        Tableau_CadreJeu[7]="*                          *\n";
        Tableau_CadreJeu[8]="*                          *\n";
        Tableau_CadreJeu[9]="*                          *\n";
        Tableau_CadreJeu[10]="*                          *\n";
        Tableau_CadreJeu[11]="*                          *\n";
        Tableau_CadreJeu[12]="*                          *\n";
        Tableau_CadreJeu[13]="*                          *\n";
        Tableau_CadreJeu[14]="*                          *\n";
        Tableau_CadreJeu[15]="****************************\n";

    //Bien, maintenant il faut remettre les pointeurs � jour
}



int RoutineEffacage()
{
    //Effa�age ? que pourrai-je �ffacer ? l'ancienne positions des entit�es ?
    //Il faudra mettre la commande d'�ffa�age, l'�crans reste propre.
}

int F_NombrePisteur()
{
    //Le jeu demande � l'utilisateur combien de pisteur il y as au jeu
    printf("Combien de Pisteurs voulez vous jouer avec ?\n")
    scanf ("%d" NombrePisteur);
    //Le nombre de pisteur a �t� choisis, il faut un pointeur pour r�cup�rer cette valeur, puis la fonction est termin�
    short p_NombrePisteur=&NombrePisteur;
}

int TourDeJeu()
{
    //Ajouter une boucle while pour assurer que le joueur reste dans cette boucle tant qu'il n'a n'y perdu ni gagner
    //La boucle principale, il faut utiliser le reste des fonctions pour le jeu, cette fonctione va boucler autant de fois qu'il le faut pour jouer au jeu
    int TracerCadre(char **Tableau_CadreJeu)
    {
        //Tracer le cadre, le contour consiste d'�toile, et aussi le "menu" du joueur qui indique le traquer n�x et combien de pas � prendre
        Tableau_CadreJeu[0]="****************************\n";
        Tableau_CadreJeu[1]="*                          *\n";
        Tableau_CadreJeu[2]="*                          *\n";
        Tableau_CadreJeu[3]="*                          *\n";
        Tableau_CadreJeu[4]="*                          *\n";
        Tableau_CadreJeu[5]="*                          *\n";
        Tableau_CadreJeu[6]="*                          *\n";
        Tableau_CadreJeu[7]="*                          *\n";
        Tableau_CadreJeu[8]="*                          *\n";
        Tableau_CadreJeu[9]="*                          *\n";
        Tableau_CadreJeu[10]="*                          *\n";
        Tableau_CadreJeu[11]="*                          *\n";
        Tableau_CadreJeu[12]="*                          *\n";
        Tableau_CadreJeu[13]="*                          *\n";
        Tableau_CadreJeu[14]="*                          *\n";
        Tableau_CadreJeu[15]="****************************\n";
        for (int y=0 ; y!=16 ; y++)
            for (int x=0 ; x!=31 ; x++)
            my_putchar(Tableau_CadreJeu[y][x]);
    }

    int InfoCadre(Tableau_InfoJeu[30][4])
    {
        //Indiquer des informations g�n�raux � l'�crans, comme le nombre de pisteurs en vie
        Tableau_CadreJeu[0]="Pisteur-+-------------------\n";
        Tableau_CadreJeu[1]="Distance-+-A-+--------------\n";
        Tableau_CadreJeu[2]="Direction-H-B-G-D-----------\n";
        Tableau_CadreJeu[3]="----------------------------\n";
        for (int y=0 ; y!=4 ; y++)
            for (int x=0 ; x!=31 ; x++)
            my_putchar(Tableau_InfoJeu[y][x]);
    }

    int UsureDesTraces()
    {
        //A chaque tour, les cases d�j� explor�s par un Pisteur laisse une valeur qui commenece � 1, chaque tour elle est incr�ment�
        //A chaque tour, les cases d�j� explor� par le monstre laisse une
        //Reste-il des cases a regarder ? Si oui, refaire cette fonction, sinon continuer, utiliser une boucle a incr�mentation
    }

    int RapportPisteurs()
    {
        //Pisteur X (Commence � 1 puis inr�mente apr�s avir jouer avec un Pisteur
        //Si tous les Pisteurs sont mort, lancer la fonction GameOver
    }

    int TirPisteur()
    {
        //sur 40% de chance, le joueur peut toucher le monstre avec un tir, il as plusieurs points de vie
        //Si touch�, renvoie une valuer, qui confirme la D�cr�mentation MonstrePointdeVie
        //Si non touch�, ne rien faire et continuer � la prochaine fonction
    }

    int DeplacementPisteur()
    {
        //Le jeu demande combien de cases le joueur veut d�placer pisteur X ?
            //Une valeur entre 0 et 4 s'il vous pla�t
        //Le jeu demande quel direction le joueur doit se d�placer
            //(r�p�ter cette demande par le nombre de cases a se d�placer
                //A chaque d�placement, laisser une trace (la case actuellement occup� par un pisteur ) qui incr�mente par tour
    }

    int DeplacementMonstre()
    {
        //Je suppose qu'il se d�place al�atoirement au d�but du jeu, jusqu'a qu'il trouve une trace fra�che, puis il se met � la suivre

        /*Code qui permet de scanner les traces autour du pion (Monstre et Pisteur) (prioritaire);

        FonctionRandom, 1~4
            if R�sultat Random == 1
            va dans direction haut

            if else R�sultat Random == 2
            va dans direction droite

            if else R�sultat Random == 3
            va dans direction bas

            else R�sultat Random == 4
            va dans direction gauche

            */
    }

    int GameOver()
    {
        printf ("Tous vos Pisteurs sont morts, le monstre s'est �chapp�\n");
        printf ("Voudriez-vous rejouer au jeu ? o/n \n");
        scanf ("%s", Jouer);

        if (Jouer == n)
        {
            printf("Au revoir !\n");
            printf("Veuillez appuyer sur une touche pour exterminer ce programme \n");       //Le jeu se ferme, le joueur ne veux pas jouer
            return;
        }

        if (Jouer == y)
        {
            //Retour au d�but du programme main avec l'utilisation de la variable RetourVerInitialisation, la fonction pour le faire ? Pas id�e.
            return;
        }
    }

    int Victoire()
    {
        //printf ("Vous avez tuer le Monstre, vous avez perdu %d Pisteurs\n" PisteurMort);
        //if (PisteurMort == 0)
            //printf ("Felicitation, vous n avez perdu aucun pisteur !\n");
        //printf ("Voudriez-vous rejouer au jeu ? o/n \n");
        //Si non, return
        //Si oui, revenir � la fonction Initialisation
    }
}

//==========================================Le jeu commence i�i==========================================================
void main()
{
    printf("Bonjour cher Utilisateur, voudriez-vous jouer a La traque ? O/N \n");       //Bienvenue au joueur
    scanf ("%s", Jouer);

        while (Jouer != o || n)
        {
            printf("Caractere invalide, veuillez repondre a la question :\n");              //Caractere invalide, question repos� pour savoir si le joueur veut jouer
            printf("Voudriez-vous jouer a La traque ? \n")
            scanf ("%s", Jouer);
        }

        if (Jouer == n)
        {
            printf("Au revoir !\n");
            printf("Veuillez appuyer sur une touche pour exterminer ce programme \n");       //Le jeu se ferme, le joueur ne veux pas jouer
            return;
        }

        while (Jouer == o)  //Le jeu va d�marer, toutes les fonctions vont �tre mises en oeuvre !
        {
            int Initialisation();
            int TracerCadre();
            int RoutineEffacage();
            int F_NombrePisteur();
            int TourDeJeu();            //TourDeJeu la boucle principale du jeu est juste ici

                if (PointVieMonstre; == 0)
                    int Victoire();

                if (NombrePisteur; == 0)
                    int GameOver();
        }
    return 0;
}
