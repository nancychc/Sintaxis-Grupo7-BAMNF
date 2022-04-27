#include <stdio.h>
#include <ctype.h>
#include <string.h>

//c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en
//mayuscula.



int toMayus()
{
    int c;
    c=getchar();

    char recp[] = "";
    while(c!=EOF)
    {

        char i =  toupper(c);

        strncat(recp, &i, 1);

        c=getchar();
    }

    return recp;
}
