// Rechtecke Übungen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	cout << "Wie hoch soll das Dreieck sein? Gib eine Zahl ein!" << endl;
	int hoehe;
	cin >> hoehe;

	for (int i = 0; i < hoehe; i++)						//Zeilen
	{
		

		for (int j = 0; j < hoehe-i -1; j++)			//Leerzeichen
		{
			



			cout << " ";
		}




		for (int k = 1; k <= i + 1; k++)				//aufsteigende Zahlenreihe
		{




			cout << k;

		}



		for (int k = i; k > 0; k--)						//absteigende Zahlenreihe
		{




			cout << k;
		}

		cout << endl;
	}





}