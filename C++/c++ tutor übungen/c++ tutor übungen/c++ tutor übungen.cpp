// c++ tutor übungen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// Ein Stern bis 5 Sterne, in jeder Zeile 1 Stern mehr:

	for (int i = 1; i <= 5; i++)  //Äußere Schleife: läuft 5-mal, von i = 1 bis i = 5
	{
		for (int j = 1; j <= i; j++)	 //Innere Schleife : gibt so viele Sterne aus, wie der Wert von i ist
		{
			cout << "*";
		}
		cout << endl; // das endl muss nach der inneren for Schleife stehen, sonst werden alle sterne nur einzeln nacheinander gezeigt
	}

	//j <= i sorgt dafür, dass die innere Schleife in jeder Iteration der äußeren Schleife eine zunehmende Anzahl von Sternen ausgibt. 
	// Wenn i = 1, wird nur ein Stern ausgegeben, wenn i = 2, werden zwei Sterne ausgegeben, und so weiter.

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	//Äußere Schleife: for (int i = 5; i >= 1; i--) sorgt dafür, dass i von 5 bis 1 zählt.
	//Innere Schleife : for (int j = 1; j <= i; j++) gibt so viele Sterne aus, wie der aktuelle Wert von i ist.Das bedeutet :
	//Wenn i = 5, werden 5 Sterne ausgegeben.
	//Wenn i = 4, werden 4 Sterne ausgegeben.
	//Und so weiter, bis i = 1.


//Summe aller Zahlen von 1 bis 5:

	int summe = 0;
	for (int i = 1; i < 6; i++)
	{
		summe += i;					// Addiere i zu summe in jeder Iteration mit +=  NICHT +  !!!
		cout << summe << endl;

	}

	//Summe der geraden Zahlen von 1 bis 10:

	int ergebnis = 0;
	for (int i = 1; i < 11; i++)
	{
		if (i % 2 == 0)		// wenn i eine gerade Zahl ist, wird sie uzm Ergebnis addiert
		{
			ergebnis += i;
		}

	}cout << ergebnis << endl;


	// Multiplikationstabelle 1 bis 5:

	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			int produkt = i * j;
			cout << produkt << "\t";
		}
	} cout << endl;

	//while-Schleife – Zähler bis 10

	int i = 1;
	while (i <= 10)
	{
		cout << i << endl;
		i++;

	}
	//Benutzereingabe mit while-Schleife

	int zahl = 0;
	while (zahl <= 10)		// Schleife läuft, solange zahl <= 10 ist.
	{
		cout << "Bitte gib eine Zahl ein: ";
		cin >> zahl;

		if (zahl > 10)  // Beende die Schleife, wenn die Zahl größer als 10 ist
		{
			break;  // Beendet die Schleife sofort
		}
	}
	//Verwende eine do - while - Schleife, um die Zahlen auszugeben.
		//Die Schleife sollte solange laufen, bis der Zähler größer als 5 ist.


//Ziel: Frage den Benutzer nach einer Zahl und wiederhole die Eingabe, bis der Benutzer eine Zahl zwischen 1 und 10 eingibt.
	int k;
	
	do
	{
		cout << "Gib eine Zahl ein: " << endl;
		cin >> k;

	} while (k < 1 || k > 10);		// Schleife läuft, solange k nicht zwischen 1 und 10 liegt


//durch ein array iterieren und nur die geraden zahlen herausgeben, die als elemente darin gespeichert sind:
	int zahlen[5] = { 2,4,6,8,10 };
	for (int i = 0; i < 5; i++)
	{
		if (zahlen[i] % 2 == 0)		// hätte ich nur i benutzt, wäre es nur die positionen und nicht die werte durchgegangen
		{
			cout << zahlen[i] << endl;
		}
	}

	//Eine Referenz in C++ ist ein alternativer Name (Alias) für eine existierende Variable. Wenn du eine Referenz erstellst, 
	// verweist sie auf dieselbe Speicheradresse wie die Originalvariable. Wenn du die Referenz änderst, änderst du also den Wert 
	// der ursprünglichen Variable.

	int a = 5;
	int& ref = a;  // Referenz auf a
	ref = 10;  // Ändert den Wert von a
	cout << "a = " << a << endl;  // Ausgabe: a = 10

//Erklärung: ref und a sind zwei Namen für denselben Speicherort. Wenn du ref änderst, änderst du auch den Wert von a.


//Ein Pointer ist eine Variable, die die Adresse einer anderen Variablen speichert. Mit einem Pointer kannst du also 
// direkt auf den Speicherort einer anderen Variable zugreifen.

	//Variablen und Zeiger können auch gemeinsam definiert werden:
	//	 int x, * z
	//	 x = 24;
	//	 z = &x;
	
	//Beide können auch direkt bei der Definition initialisiert werden:
	//	int x = 24, * z = &x;


	int b = 5;
	int* ptr = &b;  // 'ptr' speichert die Adresse von 'a'
	*ptr = 10;  // Ändert den Wert von 'a' über den Pointer
	cout << "b = " << b << endl;  // Ausgabe: a = 10

	int y = 6;
	int& refy = y;
	refy = 40;
	cout << y << endl;


	int z = 15;
	int* ptr_z = &z;
	*ptr_z = 36;

	cout << z << endl;

//	Zusammenfassung:
//		ptrarr[i] greift direkt auf das i - te Element des Arrays zu, wenn der Pointer auf das Array zeigt.
//		* (ptrarr + i) verwendet Pointerarithmetik, um auf den Wert an der i - ten Position zuzugreifen.
//		In beiden Fällen wird das Array korrekt ausgegeben

	int arr[] = { 1,2,3,4,5 };
	int* ptrarr = arr;				//pointer zeigt auf das erste Element des Arrays arr[0]

	for (int i = 0; i < 5; i++)
	{
		cout << ptrarr[i] << endl;		// ODER: *(ptarr + i) Dereferenziere den Pointer, um den Wert zu bekommen
		cout << ptrarr << endl;			// Gibt die Adresse des ersten Elements (Startadresse) aus
		cout << *ptrarr << endl;		 // Gibt den Wert des ersten Elements aus {1}

	}


}