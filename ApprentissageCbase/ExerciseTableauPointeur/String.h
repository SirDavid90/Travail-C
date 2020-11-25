#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

    int longueurChaine(const char* chaine){
{
    int NombreDeCaracteres = 0;
    char CaractereActuel = 0;

do
    {
        CaractereActuel = chaine[NombreDeCaracteres];
        NombreDeCaracteres++;
    }
    while(CaractereActuel != '\0'); // On boucle tant qu'on n'est pas à "\0"

NombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter "\0"

    return NombreDeCaracteres;}
}

#endif // STRING_H_INCLUDED
