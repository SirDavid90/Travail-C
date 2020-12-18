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
short RetourVersInitiateur; //A utiliser pour retourner vers le début du main, pour relancer une nouvelle partie, mais comment faire ?

//Les pointeurs     //(Doivent être nombreux, il faut reprendre un maximum de valeurs de ses fonctions
short P_NombrePisteur;


//-------------------------------^Valeurs et Fonctions du jeu^------------------------------
/*Toutes ces valeurs doivent être utilisé par des pointeurs, car si il y as plein de fonction c'est pour avoir des lignes de codes qui vont être ré-utiliser un paquet de fois
int Initialisation est utilisé pour la première partie lancée, mais aussi si on relance le jeu
La méthodologie est la présente : Si je casse toutes les tâches du jeu en fonctions et que j'utilise les pointeurs pour récupérer les valeurs, le programme est facile a lire et propre */


int Initialisation()
{
    //Initialiser toutes les valeurs du jeu, que se soit pour commencer une partie, ou en recommencer une nouvelle !
    //Instruction sur l'appartion du monstre sur une case (éviton le hasard pour le moment)
    short PointVieMonstre=4;
    short TraceMonstre=1;

    short NombrePisteur=1;  //=1 pour éviter d'enclencher le gameover si c'étais encore a 0
    short PrecisionFusilPisteur=;
    int TracePisteur=1;
    short PisteurMort=0;

    char **Tableau_CadreJeu;    //[30][15];  //Refaire le tableau, le remettre a zero
    char Jouer='c';

    //Réinitialiser le tableau

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

    //Bien, maintenant il faut remettre les pointeurs à jour
}



int RoutineEffacage()
{
    //Effaçage ? que pourrai-je éffacer ? l'ancienne positions des entitées ?
    //Il faudra mettre la commande d'éffaçage, l'écrans reste propre.
}

int F_NombrePisteur()
{
    //Le jeu demande à l'utilisateur combien de pisteur il y as au jeu
    printf("Combien de Pisteurs voulez vous jouer avec ?\n")
    scanf ("%d" NombrePisteur);
    //Le nombre de pisteur a été choisis, il faut un pointeur pour récupérer cette valeur, puis la fonction est terminé
    short p_NombrePisteur=&NombrePisteur;
}

int TourDeJeu()
{
    //Ajouter une boucle while pour assurer que le joueur reste dans cette boucle tant qu'il n'a n'y perdu ni gagner
    //La boucle principale, il faut utiliser le reste des fonctions pour le jeu, cette fonctione va boucler autant de fois qu'il le faut pour jouer au jeu
    int TracerCadre(char **Tableau_CadreJeu)
    {
        //Tracer le cadre, le contour consiste d'étoile, et aussi le "menu" du joueur qui indique le traquer n°x et combien de pas à prendre
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
        //Indiquer des informations généraux à l'écrans, comme le nombre de pisteurs en vie
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
        //A chaque tour, les cases déjà explorés par un Pisteur laisse une valeur qui commenece à 1, chaque tour elle est incrémenté
        //A chaque tour, les cases déjà exploré par le monstre laisse une
        //Reste-il des cases a regarder ? Si oui, refaire cette fonction, sinon continuer, utiliser une boucle a incrémentation
    }

    int RapportPisteurs()
    {
        //Pisteur X (Commence à 1 puis inrémente après avir jouer avec un Pisteur
        //Si tous les Pisteurs sont mort, lancer la fonction GameOver
    }

    int TirPisteur()
    {
        //sur 40% de chance, le joueur peut toucher le monstre avec un tir, il as plusieurs points de vie
        //Si touché, renvoie une valuer, qui confirme la Décrémentation MonstrePointdeVie
        //Si non touché, ne rien faire et continuer à la prochaine fonction
    }

    int DeplacementPisteur()
    {
        //Le jeu demande combien de cases le joueur veut déplacer pisteur X ?
            //Une valeur entre 0 et 4 s'il vous plaît
        //Le jeu demande quel direction le joueur doit se déplacer
            //(répéter cette demande par le nombre de cases a se déplacer
                //A chaque déplacement, laisser une trace (la case actuellement occupé par un pisteur ) qui incrémente par tour
    }

    int DeplacementMonstre()
    {
        //Je suppose qu'il se déplace aléatoirement au début du jeu, jusqu'a qu'il trouve une trace fraîche, puis il se met à la suivre

        /*Code qui permet de scanner les traces autour du pion (Monstre et Pisteur) (prioritaire);

        FonctionRandom, 1~4
            if Résultat Random == 1
            va dans direction haut

            if else Résultat Random == 2
            va dans direction droite

            if else Résultat Random == 3
            va dans direction bas

            else Résultat Random == 4
            va dans direction gauche

            */
    }

    int GameOver()
    {
        printf ("Tous vos Pisteurs sont morts, le monstre s'est échappé\n");
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
            //Retour au début du programme main avec l'utilisation de la variable RetourVerInitialisation, la fonction pour le faire ? Pas idée.
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
        //Si oui, revenir à la fonction Initialisation
    }
}

//==========================================Le jeu commence içi==========================================================
void main()
{
    printf("Bonjour cher Utilisateur, voudriez-vous jouer a La traque ? O/N \n");       //Bienvenue au joueur
    scanf ("%s", Jouer);

        while (Jouer != o || n)
        {
            printf("Caractere invalide, veuillez repondre a la question :\n");              //Caractere invalide, question reposé pour savoir si le joueur veut jouer
            printf("Voudriez-vous jouer a La traque ? \n")
            scanf ("%s", Jouer);
        }

        if (Jouer == n)
        {
            printf("Au revoir !\n");
            printf("Veuillez appuyer sur une touche pour exterminer ce programme \n");       //Le jeu se ferme, le joueur ne veux pas jouer
            return;
        }

        while (Jouer == o)  //Le jeu va démarer, toutes les fonctions vont être mises en oeuvre !
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
