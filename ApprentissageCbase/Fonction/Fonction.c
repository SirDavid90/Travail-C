#include <stdio.h>
#include <stdlib.h>

int i=0;

int main()
{

    f1();
    f2(5);
    int res=f3(5);
    return 0;
}


void f1()
{
   printf("Bonjour");
   return 0;
}

void f2(int n) //Pas fini
{
    int i=0;
    for (i=0; i<n; i++)
    {

        printf("Bonjour");
    }
}

int f3(int n) //Même pas fait
{
    int i=0;
    for (i=0; i<n; i++)
    {

        printf("Bonjour");
    }
    return 0;
}
