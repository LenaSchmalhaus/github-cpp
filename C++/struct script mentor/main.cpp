#include <iostream>
#include <cstring>
#include <string>
#include <windows.h>
using namespace std;

struct Person
{   string name;
    int alter;
    string adresse;
};

int main()
{
    // Setze die Codepage der Konsole auf UTF-8 (Codepage 65001)
    SetConsoleOutputCP(65001);
//erstellen für drei Personen: Array
    Person personen[5];                                                //wir wollen drei Personen diesem Struct zuweisen

//Eingabe der Personendaten über eine for Schleife:
    for (int i = 0; i < 5; i++)
    {
        cout << "Daten für Person "<< i + 1 << ": " << endl;            // i zählt aufwärts bei nächstem Durchlauf

        cout << "Name: ";
        getline(cin,personen[i].name);                              //Name einlesen für STRING: getline(cin, ...)

        cout << "Alter: ";
        cin >> personen[i].alter;                                        //Achtung, für einen int reicht cin >> !!
        cin.ignore();                                           //Eingabepuffer leeren, damit getline korrekt funktioniert

        cout << "Adresse: ";
        getline(cin, personen[i].adresse);
    }
// Ausgabe der Personendaten:
       cout << "\n Die Daten der Personen: \n";
        for (int i = 0; i < 5; i++ )
        {
            cout << "Person " << i + 1 << ": " << endl;
            cout << "Name: " << personen[i].name << endl;
            cout << "Alter: " << personen[i].alter << endl;
            cout << "Adresse: " << personen[i].adresse << endl;
        }

//Durchschnittsalter der Personen berechnen:
int summe = 0;
    for(int i = 0; i < 5; i++)
    {
       summe += personen[i].alter;
    }
double durchschnitt = summe/5;

    cout << "Das Durchschnittsalter beträgt: " << durchschnitt << "." << endl;

// das höchste Alter herausfinden:

    int oldest = personen[0].alter;                             // Setze das Alter der ersten Person[0] als Vergleichswert
    int i = 1;                              // wir nehmen 1, da wir das Alter von der ersten Person an Index 0 schon mit oldest gleichgesetzt haben!

    while(i < 5)                                        // Solange i kleiner als 5 ist, durchlaufe das Array der Personen
    {
        if(personen[i].alter > oldest) oldest = personen[i].alter;      // Aktualisiere oldest, falls das Alter größer ist
        i++;                                                        // Erhöhe den Index, um zur nächsten Person zu gelangen
    }
    cout << "Die älteste Person ist " << oldest << "Jahre alt." << endl;

    
// das niedrigste Alter herausfinden:

    int youngest = personen[0].alter;                             // Setze das Alter der ersten Person[0] als Vergleichswert
    int j = 1;                              // wir nehmen 1, da wir das Alter von der ersten Person an Index 0 schon mit youngest gleichgesetzt haben!

    while(j < 5)                                        // Solange j kleiner als 5 ist, durchlaufe das Array der Personen
    {
        if(personen[j].alter < youngest) youngest = personen[j].alter;      // Aktualisiere youngest, falls das Alter kleiner ist
        j++;                                                        // Erhöhe den Index, um zur nächsten Person zu gelangen
    }
    cout << "Die jüngste Person ist " << youngest << "Jahre alt." << endl;


    return 0;
}
