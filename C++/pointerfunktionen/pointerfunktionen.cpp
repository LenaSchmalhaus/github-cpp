#include "pointerfunktionen.h"

void aendereWert (int*ptr)      //Die Funktion nimmt einen Pointer auf int entgegen. Der Pointer ptr speichert die Adresse einer Ganzzahl.
{
    *ptr = 100;                 // Dereferenzierung ändert den Wert der Variablen, auf die der Pointer zeigt.
}

void arrayverdoppeln(int*arr)
{
    for(int i = 0; i < 6 ; i++)
    {
        arr[i] =arr[i] * 2;           // Jedes Element im Array wird verdoppelt
    }
}

