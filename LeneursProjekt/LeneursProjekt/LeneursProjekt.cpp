// LeneursProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	//Variablen initialisieren
	double a, b, c;
	a = 4.80;
	b = 4.20;
	c = 5.80;
	int menge_a, menge_b, menge_c;
	int biermenge;
	double betrag;
	char auswahl;
	string nochmal;
	string autofahrer;
	double biereInKneipe;


	//Geldbetrag eingeben

	while (true)					//Schleife, die das Programm von vorne starten lässt
	{
		cout << "Moin!\n Wieviel Geld zum Versaufen haste heute?\n";
		cout << "Gib deinen Betrag ein!\n" << endl;
		cin >> betrag;

		//Überprüfen, ob der Betrag genug ist

		if (betrag < b) {
			cout << "\nDat Jeld, dat reischt nischt aus!\n\nVersuchs nochmal!\n" << endl;
			continue;				//Falls nicht, Schleife wiederholen	
		}
		else if (betrag < 2 * b) { // Wenn der Betrag weniger als zwei Biere wert ist
			cout << "\nDamit kommste aber nicht weit!\n\n" << endl;
		}
		//system("cls");

//Preise nennen
		cout << "In Kneipe A kostet das Bier: " << a << " DM." << endl;
		cout << "In Kneipe B kostet das Bier: " << b << " DM." << endl;
		cout << "In Kneipe C kostet das Bier: " << c << " DM." << endl;
		cout << "\n\nMal sehen, was Du fuer dein Geld bekommst:\n" << endl;

		//Biere in jeweiliger Kneipe berechnen
		menge_a = betrag / a;
		menge_b = betrag / b;
		menge_c = betrag / c;

		//Ausgabe der Anzahl der Biere
		cout << menge_a << " Bier gibt's in Kneipe A!" << endl;
		cout << menge_b << " Bier gibt's in Kneipe B!" << endl;
		cout << menge_c << " Bier gibt's in Kneipe C!" << endl;

		//Frage nach Kneipenwahl
		cout << "\nFuer welche Kneipe entscheidest Du Dich?\n" << "\nWaehle a, b oder c aus!\n" << endl;
		cin >> auswahl;


		//Überprüfung der Biermenge in der ausgewählten Kneipe

		

		if (auswahl == 'a')
			{
				biereInKneipe = menge_a;
			}
			else if (auswahl == 'b')
			{
				biereInKneipe = menge_b;
			}
			else if (auswahl == 'c')
			{
				biereInKneipe = menge_c;
			}
			else
			{
				cout << "Ungueltige Wahl!" << endl;
				continue; // Zurück zum Anfang der Schleife, falls die Auswahl ungültig ist
			}

		// Überprüfung auf 0 oder 1 Bier
		if (biereInKneipe == 1)
		{
			cout << "\nOb sich das lohnt, da hinzueiern?\n" << endl;
			continue; // Zurück zur Eingabe des Geldbetrags
		}

		else if (biereInKneipe == 0)
		{
			cout << "\nDann brauchste gar nicht loszufahren!\nGeh in der Couch nach Kleingeld gucken und versuchs nochmal!\n" << endl;
			continue; // Zurück zur Eingabe des Geldbetrags
		}

		//Ausgabe des Geldes per Biermenge in der ausgewählten Kneipe
		double kneipenPreis = 0;

		if (auswahl == 'a')
		{
			kneipenPreis = menge_a * a;
		}
		else if (auswahl == 'b')
		{
			kneipenPreis = menge_b * b;
		}
		else if (auswahl == 'c')
		{
			kneipenPreis = menge_c * c;
		}
		cout << "\nDu gibst dafuer " << kneipenPreis << " DM aus." << endl;     // 


		//Frage nach Autofahrerstatus
		cout << "\nFaehrst Du Auto?\n" << "\nAntworte mit Ja oder Nein!\n" << endl;
		cin >> autofahrer;

		//Bestimmen der Biermenge aufgrund von AutofahrerStatus
		if (autofahrer == "Ja" || autofahrer == "ja" || autofahrer == "JA" || autofahrer == "j")
		{
			biermenge = 2;
		}
		else
		{
			biermenge = 5;
		}
		cout << "\nOK!\nDu solltest maximal " << biermenge << " Bier in Kneipe " << auswahl << " trinken, wenn du noch laufen oder fahren koennen willst!" << endl;
		


		//Frage nach Wiederholung

		cout << "\nMoechtest du nochmal? \nAntworte mit 'Ja' oder 'Nein'!\n\n" << endl;
		cin >> nochmal;

		if (nochmal == "Nein" || nochmal == "nein" || nochmal == "NEIN" || nochmal == "nö" || nochmal == "Nö")
		{
			break; // Beendet die Schleife und das Programm
		}

	}
}

