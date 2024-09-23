#include "SkriptStringsFunktionen.h"



int main()
{
/*
    //Übung 1:
    char quelle[160], ziel[160];
    cout << "Bitte String eingeben: ";
    cin.getline(quelle, 160);
    ostrcpy(ziel, quelle);
    cout << "Original String: \"" << quelle << "\"." << endl;
    cout << "Kopierter String: \"" << ziel << "\"." << endl;

    //Übung 2:
    char quelle[160];
    cout << "Bitte String eingeben: ";
    cin.getline(quelle, 160);
    int laenge = ostrlen(quelle);
    cout << "String Länge: " << laenge << " Zeichen (inklusive Endekennung)." << endl;

//Übung 3
    char quelle[160];
    cout << "Bitte String eingeben: ";
    cin.getline(quelle, 160);
    int umwandlungen = upstring(quelle);
    cout << "Umgewandelter String: \"" << quelle << "\"." << endl;
    cout << "Anzahl der Umwandlungen: " << umwandlungen << endl;

   //Übung 4

    char quelle[160];
    cout << "Bitte String eingeben: ";
    cin.getline(quelle, 160);
    reversstring(quelle);
    cout << "Umgedrehter String: \"" << quelle << "\"." << endl;

    //Übung 5

    char quelle1[160], quelle2[160], ziel[320];
    cout << "Bitte String 1 eingeben: ";
    cin.getline(quelle1, 160);
    cout << "Bitte String 2 eingeben: ";
    cin.getline(quelle2, 160);
    mixstring(ziel, quelle1, quelle2);
    cout << "Gemischter String: \"" << ziel << "\"." << endl;

    //Übung 6

    char quelle1[160], quelle2[160];
    cout << "Bitte String eingeben: ";
    cin.getline(quelle1, 160);
    cout << "Bitte Suchstring eingeben: ";
    cin.getline(quelle2, 160);
    int index = ostrstr(quelle1, quelle2);
    if (index != -1)
        cout << "String an Position " << index << " gefunden." << endl;
    else
        cout << "Suchstring nicht enthalten." << endl;


    // 7

    char quelle[160], ziel[160];
    int anz;
    cout << "Bitte einen String eingeben: ";
    cin.getline(quelle, 160);
    cout << "Wie viele Zeichen sollen kopiert werden? ";
    cin >> anz;
    leftstr(ziel, quelle, anz);
    cout << "Die ersten " << anz << " Zeichen: " << ziel << endl;


    //8

    char quelle[160], ziel[160];
    int anz;
    cout << "Bitte einen String eingeben: ";
    cin.getline(quelle, 160);
    cout << "Wie viele Zeichen sollen von rechts kopiert werden? ";
    cin >> anz;
    rightstr(ziel, quelle, anz);
    cout << "Die letzten " << anz << " Zeichen: " << ziel << endl;

    //9

    char quelle[160], ziel[160];
    int start, anz;
    cout << "Bitte einen String eingeben: ";
    cin.getline(quelle, 160);
    cout << "Startposition: ";
    cin >> start;
    cout << "Wie viele Zeichen sollen kopiert werden? ";
    cin >> anz;
    midstr(ziel, quelle, start, anz);
    cout << "Der extrahierte Teil: " << ziel << endl;


    //10

    unsigned long zahl;
    cout << "Bitte eine Zahl eingeben: ";
    cin >> zahl;

    string wort;
    toWord(zahl, wort);

    cout << "Die Zahl in Worten: " << wort << endl;








int x, y;
    int ergebnis;

    cout << "Gib zwei Zahlen ein, die miteinander verrechnet werden sollen!" << endl;
cin >> x >> y;

   ergebnis = summe(x, y);

cout << "Die Summe lautet: '" << ergebnis << endl;

    ergebnis= quadro(ergebnis);

cout << "Das Quadrat des Ergebnisses lautet: '" << ergebnis << endl;



int feld[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> feld[i];

    }
    for (int y; y < 10; y++)
    {
        cout << feld[y] << ", ";

    }
    */



    char input[100];
    char source[100];
    int anz;

    cout << "Gib deinen ZielString ein, in den eine Anzahl Buchstaben vom folgenden QuellString kopiert werden soll." << endl;
    cin.getline(input, 100);

    cout << "Gib deinen QuellString ein, von dem Buchstaben kopiert werden sollen." << endl;
    cin.getline(source, 100);

    cout << "Gib eine Anzahl zu kopierender Buchstaben ein." << endl;
    cin >> anz;


    rightstring(input, source, anz);


    return 0;
}
