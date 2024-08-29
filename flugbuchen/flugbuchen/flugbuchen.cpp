// flugbuchen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	char auswahl = ' ';
	double preis_a, preis_b, preis_c;
	double weg_a, weg_b, weg_c;
	double fahrt_a, fahrt_b, fahrt_c;
	double pauschal_a, pauschal_b, pauschal_c;
	double vorort_a, vorort_b, vorort_c;
	double gesamt_a, gesamt_b, gesamt_c;

	cout << fixed << setprecision(2);


    // Eingabe für Flughafen A
    cout << "Geben Sie den Preis fuer Flughafen A ein, danach den Fahrtweg in km.\n";
    cin >> preis_a >> weg_a;
    fahrt_a = (weg_a * 0.45);
    pauschal_a = (fahrt_a + preis_a);
    vorort_a = (preis_a * 0.75);
    gesamt_a = pauschal_a + vorort_a;

    // Eingabe für Flughafen B
    cout << "Geben Sie den Preis fuer Flughafen B ein, danach den Fahrtweg in km.\n";
    cin >> preis_b >> weg_b;
    fahrt_b = (weg_b * 0.45);
    pauschal_b = (fahrt_b + preis_b);
    vorort_b = (preis_b * 0.75);
    gesamt_b = pauschal_b + vorort_b;

    // Eingabe für Flughafen C
    cout << "Geben Sie den Preis fuer Flughafen C ein, danach den Fahrtweg in km.\n";
    cin >> preis_c >> weg_c;
    fahrt_c = (weg_c * 0.45);
    pauschal_c = (fahrt_c + preis_c);
    vorort_c = (preis_c * 0.75);
    gesamt_c = pauschal_c + vorort_c;

    // Vergleichsausgabe für alle Flughäfen
    cout << "\nKostenvergleich:\n";
    cout << "Flughafen A: \n"
        << "Ausgaben vor Ort: " << vorort_a << " DM\n"
        << "Pauschalpreis (Flug inkl. Fahrt): " << pauschal_a << " DM\n"
        << "Geschaetzte Gesamtkosten: " << gesamt_a << " DM\n" << endl;

    cout << "Flughafen B: \n"
        << "Ausgaben vor Ort: " << vorort_b << " DM\n"
        << "Pauschalpreis (Flug inkl. Fahrt): " << pauschal_b << " DM\n"
        << "Geschaetzte Gesamtkosten: " << gesamt_b << " DM\n" << endl;

    cout << "Flughafen C: \n"
        << "Ausgaben vor Ort: " << vorort_c << " DM\n"
        << "Pauschalpreis (Flug inkl. Fahrt): " << pauschal_c << " DM\n"
        << "Geschaetzte Gesamtkosten: " << gesamt_c << " DM\n" << endl;

    // Benutzerentscheidung für einen Flughafen
    cout << "Fuer welchen Flughafen entscheiden Sie sich? Geben Sie A, B oder C ein.\n";
    cin >> auswahl;

    switch (auswahl)
    {
    case 'a':
    case 'A':
        cout << "Sie haben sich fuer Flughafen A entschieden.\n";
        break;

    case 'b':
    case 'B':
        cout << "Sie haben sich fuer Flughafen B entschieden.\n";
        break;

    case 'c':
    case 'C':
        cout << "Sie haben sich fuer Flughafen C entschieden.\n";
        break;

    default:
        cout << "Ungueltige Eingabe.\n";
        return 1;
    }

    return 0;
}




