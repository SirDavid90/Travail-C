#include <stdio.h>
#include <stdlib.h>
#define TABELEMENT 25

typedef struct Point{

int num;
float x;
float y;

}

//partie Jeffrey, Utiliser des calloc malloc, puis libérer
//Rien d'accomplis, j'ai perdu le reste de mon envie de faire quoi que se soit

void GetVal(Point tab_val[TAILLE]);
void Affichage(point tab_val[TAILLE]);

int main ()
{
	Point tab_val[TAILLE];
	GetVal(&ptab_val);
	Affichage(ptab_val);
	return 0;
}

void GetVal(Point *tab_val[TAILLE]){
	for(int i=0;i<TAILLE;i++){
		printf("Veuillez entrer un entier");
		scanf("%f", &tab_val[i].num);
		printf("%f", tab_val[i].num);

		printf("Veuillez entrer un reel");
		scanf("%f", &tab_val[i].x);
		printf("%f", tab_val[i].x);

		printf("Veuillez entrer un reel");
		scanf("%f", &tab_val[i].y);
		printf("%f", tab_val[i].y);
	}
}

void Affichage(point tab_val[TAILLE]){
	for(int i=0;i<TAILLE;i++){
		printf("%d", tab_val[i].num);
		}
};

