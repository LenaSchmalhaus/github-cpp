// flugbuchenarrays.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int anzahl_flughafen = 3;
    char flughafen[] = { 'A', 'B', 'C' };
    double preis[anzahl_flughafen];
    double weg[anzahl_flughafen];
    double fahrt[anzahl_flughafen];
    double pauschal[anzahl_flughafen];
    double vorort[anzahl_flughafen];
    double gesamt[anzahl_flughafen];
    char auswahl = ' ';

    cout << fixed << setprecision(2);

    // Eingabe und Berechnung für jeden Flughafen
    for (int i = 0; i < anzahl_flughafen; i++) {
        cout << "Geben Sie den Preis fuer Flughafen " << flughafen[i] << " ein, danach den Fahrtweg in km.\n";
        cin >> preis[i] >> weg[i];
        fahrt[i] = (weg[i] * 0.45);
        pauschal[i] = (fahrt[i] + preis[i]);
        vorort[i] = (preis[i] * 0.75);
        gesamt[i] = pauschal[i] + vorort[i];
    }

    // Vergleichsausgabe für alle Flughäfen
    cout << "\nKostenvergleich:\n";
    for (int i = 0; i < anzahl_flughafen; i++) {
        cout << "Flughafen " << flughafen[i] << ": \n"
            << "Ausgaben vor Ort: " << vorort[i] << " DM\n"
            << "Pauschalpreis (Flug inkl. Fahrt): " << pauschal[i] << " DM\n"
            << "Geschaetzte Gesamtkosten: " << gesamt[i] << " DM\n" << endl;
    }

    // Benutzerentscheidung für einen Flughafen
    cout << "Fuer welchen Flughafen entscheiden Sie sich? Geben Sie A, B oder C ein.\n";
    cin >> auswahl;

    bool gueltige_auswahl = false;
    for (int i = 0; i < anzahl_flughafen; i++) {
        if (toupper(auswahl) == flughafen[i]) {
            cout << "Sie haben sich fuer Flughafen " << flughafen[i] << " entschieden.\n";
            gueltige_auswahl = true;
            break;
        }
    }

    if (!gueltige_auswahl) {
        cout << "Ungueltige Eingabe.\n";
        return 1;
    }

    return 0;
}