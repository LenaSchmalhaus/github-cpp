// quadratstern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	int groesse;
	cout << "Wie gross soll das Quadrat sein? Gib eine Zahl ein.";
		cin >> groesse;

		for (int i = 0; i < groesse; i++)
		{
			

			for (int j = 0; j < groesse; j++)
			{
				cout << " #";
			}

			cout << endl;
		}
		




}

