#include "Uebungen Funx.h"

int uebung3(char* string)
{

    int anz = 0;

        for(int j = 0; string[j] != '\0'; j++)                  //solange die Nullkennung nicht da ist, soll Schleife laufen
        {
            if( string[j] >= 'a' && string[j] <= 'z') {         // solange der Wert an Stelle j größer/gleich 'a' ist und kleiner/gleich 'z' ist:
                string[j] = string[j]-32;                       // soll der Wert an Szelle J um 32 nach LINKS (-) verschoben werden, um Großbuchstaben in der ASCII zu erreichen
                anz++;                                          // wenn das geschieht, erhöht sich die Anzahl der veränderten Buchstaben
            }
        }


    cout << "Fuer " << string << " wurden " << anz << " Buchstaben veraendert.";
}

void reversestring(char*string) {
    int i = 0;
    int laenge = 0;

    while(string[laenge++]);                        //Länge hochzählen, damit wir den Wert kennen und damit arbeiten können

        laenge = laenge -2;                         // -2, da sonst die Nullkennung mitgezählt wird und weil sonst ein Buchstabe fehlt

        cout << laenge +1 << endl;                  //Länge zur Kontrolle einmal ausspucken lassen

            while(string[i]) {                      // Schleife geht durch den ganzen String

                cout << string[laenge];
                i++;                                // i geht weiter durch die Indexe
                laenge--;                           // Länge geht rückwärts
            }
}


