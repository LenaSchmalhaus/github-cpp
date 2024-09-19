#include "funktionen.h"


void arrayverdoppeln(int*arr, int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;                // Jedes Element im Array wird verdoppelt
    }
}

void zeichenausgeben(char* arr2)
{
   int j = 0;
    while(arr2[j] != '\0')           // Schleife bis zum Null-Zeichen
    {
        cout << arr2[j] << endl;        // Gib jedes Zeichen einzeln aus
        j++;
    }
}
