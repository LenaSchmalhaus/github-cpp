#include "C++ Mentor Übungen Funx.h"

int main()
{
    char ziel[100];
    char quelle[100];

    cout << "Bitte gib einen Satz ein." << endl;
    cin.getline(ziel,100);

    cout << "Bitte gib einen zweiten Satz ein." << endl;
    cin.getline(quelle,100);

strcopy_if_not_exists(ziel, quelle);

    return 0;
}
