
#include "C++ Mentor Übungen Funx.h"

void strcopy_if_not_exists(char*ziel, char*quelle)
{
    int i = 0;
    int j = 0;

    while(quelle[i])
    {
        while(ziel[j])
        {
            if(quelle[i] == ziel[j] || quelle[i] == ziel[j] + 32 || quelle[i] == ziel[j] - 32)
            {
                ziel[j] = 'x';
            }
            j++;
        } i++;
    }   ziel[j] == '\0';
        cout << ziel;
}

