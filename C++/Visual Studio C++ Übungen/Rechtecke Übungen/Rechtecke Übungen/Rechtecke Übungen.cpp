// Rechtecke Übungen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	//cout << "Wie hoch soll das Dreieck sein? Gib eine Zahl ein!" << endl;
	//int hoehe;
	//cin >> hoehe;

	//for (int i = 0; i < hoehe; i++)						//Zeilen
	//{
	//	
	//	for (int j = 0; j < hoehe-i -1; j++)			//Leerzeichen
	//	{
	//		
	//		cout << " ";
	//	}

	//	for (int k = 1; k <= i + 1; k++)				//aufsteigende Zahlenreihe
	//	{
	//		cout << k;
	//	}

	//	for (int k = i; k > 0; k--)						//absteigende Zahlenreihe
	//	{
	//		cout << k;
	//	}
	//	cout << endl;
	//}


	// Aufgabe 2: Rechteck-Rahmen
	//cout << "Hoehe und Breite?" << endl;
	//int hoehe, breite;
	//cin >> hoehe >> breite;

	//for (int i = 0; i < hoehe; i++)
	//{
	//	for (int j = 0; j < breite; j++)
	//	{
	//		if (i == 0 || i == hoehe-1 || j == 0 || j== breite-1)
	//		{
	//			cout << "*";
	//		}
	//		else
	//		{
	//			cout << " ";
	//		}
	//	} cout << endl;
	//}

// Aufgabe 3: Dreieck zeichnen
	//cout << "Welche Hoehe?" << endl;
	//int hoehe;
	//cin >> hoehe;

	//for (int i = 0; i <= hoehe; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		cout << "*";
	//	} cout << endl;
	//}

//Aufgabe 4: Umgekehrtes Dreieck

	//cout << "Welche Hoehe?" << endl;
	//int hoehe;
	//cin >> hoehe;

	//for (int i = 0; i < hoehe; i++)
	//{
	//	for (int j = 0; j < hoehe - i; j++)
	//	{
	//		cout << "*";
	//	} cout << endl;
	//}

	//Aufgabe 6: Pyramide zeichnen
	//cout << "Welche Hoehe?" << endl;							
	//int hoehe;
	//cin >> hoehe;

	//for (int i = 0; i < hoehe; i++)									//Tipp: Arbeite mit den Variablen, die du hast! (i,j,k)
	//{
	//	for (int j = 0; j < hoehe - i - 1; j++)
	//	{
	//		cout << " ";
	//	}
	//	for (int k = 0; k < 2 * i + 1; k++)
	//	{
	//		cout << "*";
	//	}cout << endl;
	//}

	//Aufgabe 7: Zahlenpyramide
	//cout << "Welche Hoehe?" << endl;
	//int hoehe;
	//cin >> hoehe;

	//for (int i = 0; i < hoehe; i++)									//Tipp: Arbeite mit den Variablen, die du hast! (i,j,k)
	//{
	//	for (int j = 0; j < hoehe - i - 1; j++)
	//	{
	//		cout << " ";
	//	}
	//	for (int k = 1; k <= i + 1; k++)
	//	{
	//		cout << k;
	//	}
	//	for (int k = i; k > 0; k--)
	//	{
	//		cout << k;
	//	}
	//	cout << endl;
	//}



//____________________________Algorithmen generell ______________Abschnitt 1_____________________________________________
//Aufgabe 1: Lineare Suche einer Zahl in einem Array, -1 bei nicht Finden ausgeben:
//cout << "Gib eine Zahl von 0 bis 9 ein." << endl;
//int array[10] = { 5,8,3,4,9,6,2,7,1,0 };
//int suche;
//int stelle = -1;		// als Standardwert, falls Zahl nicht gefunden wird
//cin >> suche;
//
//for (int i = 0; i < 10; i++)
//{
//	
//	if (array[i] == suche)
//	{
//		stelle = i; 
//		break;
//	}
//
//} 
//if (stelle != -1) 
//{
//	cout << "Gefunden an Stelle " << stelle << endl;
//}
//else 
//{
//	cout << "Zahl nicht im Array gefunden." << endl;
//}

//Aufgabe 2:Berechnung der Summe und des Durchschnitts

//int array[10] = { 5,8,3,4,9,6,2,7,1,0 };
//int summe = 0;
//double durchschnitt;
//
//for (int i = 0; i < 10; i++)
//{
//	summe += array[i];
//}
//durchschnitt = summe / 10;
//
//cout << "Summe aller Elemente: " << summe << ", " << "Durchschnittswert der Elemente: " << durchschnitt << "." << endl;




//____________Abschnitt 2 : Mustererkennung und Schleifenübungen_______________________________
//Aufgabe 3 : Pyramidenmuster mit Sternen
//cout << "Welche Hoehe soll die Pyramide haben?" << endl;
//int hoehe;
//cin >> hoehe;
//
//for (int i = 0; i < hoehe; i++)
//{
//	for(int j = 0 ; j < hoehe -i -1; j++)
//	{
//		cout << " ";
//	}
//
//	for(int k = 0; k < 2*i +1; k++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}

//Aufgabe 4: Rechteck mit Rahmen

cout << "Welche Hoehe und Breite soll das Rechteck haben?" << endl;
int hoehe, breite;
cin >> hoehe >> breite;

for (int i = 0; i < hoehe; i++)
{
	for (int j = 0; j < breite; j++)
	{
		if (i == 0 || i == hoehe - 1 || j == 0 || j == breite - 1)
		{
		cout << "*";
		}
		else 
		{ cout << " "; }

	}cout << endl;
}



}