
#include "pointerfunktionen.h"


using namespace std;



int main()
{
    /*
    int zahl = 10;
    aendereWert(&zahl);             // Adresse der Variable zahl an Funktion übergeben. Dort Wert von zahl auf 100 gesetzt.


    cout << "Neuer Wert von zahl: " << zahl << endl;

*/

//Pointer mit Arrays in Funktionen:

    
{
    int arr[6] = {1,2,3,4,5,6};
    arrayverdoppeln(arr);
    // Gib das verdoppelte Array aus
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

}





    return 0;
}
