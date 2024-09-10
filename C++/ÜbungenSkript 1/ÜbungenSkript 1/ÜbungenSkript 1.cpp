// ÜbungenSkript 1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()  // while und for, die dasselbe machen:
{

	//Die while-Schleife eignet sich gut, wenn die Anzahl der Iterationen nicht von vornherein feststeht oder von einer Bedingung abhängt, 
	// die sich innerhalb der Schleife ändert.


	int i = 0;
	while (i < 6)		// Nur eine Bedingung [und KEINE Schleifensteuerung wie zB i++]
	{
		cout << i << endl;  // erst sagt er mir i (die entsprechende Zahl), also beginnend bei 0
		i++;				// DANN inkrementiert er erst.
							//Die Schleifensteuerung (Initialisierung, Bedingung, und Inkrementierung) ist flexibler verteilt.
	}

//Die for-Schleife ist praktisch, wenn du genau weißt, wie oft die Schleife durchlaufen werden soll.
//Die Initialisierung, Bedingung und Inkrementierung sind in einer Zeile zusammengefasst, 
// was den Code kompakter und oft leichter lesbar macht.


	for (int i = 0; i < 6; i++)   // i wird auf 0 gesetzt, nicht verglichen (==)
	{
		cout << i << endl;
	}


}
