#include "dummies.h"


int main()
{
    system("chcp 65001");

// Satz mit Leerzeichen einlesen:
    /*
char satz[50];

    cout << "Gib einen Satz ein!" << endl;
    cin.getline(satz, 49);
    cout << "Du hast '" << satz << "' eingegeben." << endl;

//Jedes Zeichen einzeln ausgeben:

for (int i = 0; satz[i] !='\0'; i++)        //Schleife endet, wenn die i-te Stelle die Nullkennung hat!

{
    cout << satz[i] << endl;
}

// Zeichen zählen:

 int zaehlen= 0;
    for(int j = 0; satz[j] !='\0'; j++)
    {
        zaehlen++;
    } cout << "Der Satz hat " << zaehlen << " Zeichen." << endl;


//Kleinbuchstaben in Großbuchstaben umwandeln:

    for(int k = 0; satz[k] !='\0'; k++)
    {
        if(satz[k] >= 'a' && satz[k] <= 'z')                       // Prüfe, ob satz[k] ein Kleinbuchstabe ist
                                                                  // geht auch, ist aber weniger gut geschrieben: if (satz[k] > 96 && satz[k] < 123). Wer der den Code liest, sieht, dass du überprüfst, ob das Zeichen zwischen 'a' und 'z' liegt.
        {
            satz[k] = satz[k]-32;                       // Wandle den Kleinbuchstaben in einen Großbuchstaben um
        } cout << satz[k] << endl;
    }
    cout << endl;


// Zeichen in Kleinbuchstaben umwandeln:

    for(int l=0; satz[l] !='\0'; l++)
    {
        if(satz[l] >= 'A' && satz[l] <= 'Z')
        {
            satz[l] = satz[l] + 32;
        }
        cout << satz [l] << endl;
    }
    cout << endl;



    // String rückwärts ausgeben:
satz[50];

    int laenge = 0;

    while(satz[laenge] != '\0')                 //erst Länge feststellen
    {
        laenge++;
    } cout << laenge << endl;

    for(int m = laenge; m >= 0; m--)
    {
        cout << satz[m];
    }
    cout << endl;


    char phrase1[80], phrase2[80];

    cout << "Bitte gib zwei kurze Sätze nacheinander ein." << endl;

    cin.getline(phrase1, 79);
    cin.getline(phrase2, 79);

    int l1 = 0, l2 = 0;

    // Länge von phrase1 berechnen
    while (phrase1[l1] != '\0') {
        l1++;
    }

    // Länge von phrase2 berechnen
    while (phrase2[l2] != '\0') {
        l2++;
    }

    // Überprüfe, ob die Längen unterschiedlich sind
    if (l1 != l2) {
        cout << "Die Strings sind nicht gleich." << endl;
    } else {
        // Zeichenweise Vergleich, wenn die Längen gleich sind
        bool sindGleich = true;  // Eine Variable, um zu prüfen, ob die Strings gleich sind

        for (int i = 0; phrase1[i] != '\0'; i++) {
            if (phrase1[i] != phrase2[i]) {
                sindGleich = false;  // Setze sindGleich auf false, wenn ein Unterschied gefunden wird
                break;  // Beende die Schleife
            }
        }

        // Ergebnis nach der Schleife ausgeben
        if (sindGleich) {
            cout << "Die Strings sind identisch." << endl;
        } else {
            cout << "Die Strings sind nicht gleich." << endl;
        }
    }


    char phrase1[80], phrase2[80];

    cout << "Bitte gib zwei kurze Sätze nacheinander ein." << endl;

    cin.getline(phrase1, 79);
    cin.getline(phrase2, 79);

int i = 0;
int zaehler=0;
bool gefunden = false;                          // Variable, um zu prüfen, ob phrase1 in phrase2 enthalten ist

    for(;phrase2[i] !='\0'; i++)
    {
        if(phrase2[i] == phrase1[0])          // phrase1 [0]  deshalb, da an der 0-ten Position der erste Buchstabe des gesuchten Wortes steht
        {
            bool sindGleich = true;                // Annahme: Beide Strings sind gleich


            // Vergleiche nun den gesamten phrase1 mit dem entsprechenden Teil von phrase2

            for(int j = 0; phrase1[j] !='\0'; j++)
            {
                if (phrase2[i+j] != phrase1[j])
                {
                    sindGleich = false;
                    break;
                }
            }

            if(sindGleich)
            {
                cout << "Der String wurde an Index " << i << " gefunden." << endl;
                gefunden = true;                                                        // Wir haben den String gefunden
                break;                                                // Beende die Suche, da wir den String gefunden haben
            }
        }
    }

    // Wenn der String nicht gefunden wurde
    if (!gefunden) {
        cout << "Der String wurde nicht gefunden." << endl;
    }
    */


    //Fakultät von n berechnen

    int n;
    cout << "Bitte gib eine Zahl ein, deren Fakultät du berechnet haben möchtest: " << endl;
    cin >> n;

    int temp = 1;
    int rechnen = 2;
    int i = 1;

for(int i = 1; i < n; i++)
{

    temp = temp * rechnen++;

} cout << temp << endl;


    //als while Schleife:

    int j = 1;

    while(j < n)
    {
        j++;
        temp = temp * rechnen++;

    } cout << temp << endl;




    int m;
    cout << "Bitte gib eine Zahl ein, deren Fakultät du berechnet haben möchtest: " << endl;
    cin >> m;

    long long zahl = 1;
    int xy = 1;
    for(int y = 0; y < m; y++)
    {
        zahl = zahl * xy++;
    }
cout << "Die Fakultät von '" << m << "' lautet: " << zahl << endl;








    return 0;
}
