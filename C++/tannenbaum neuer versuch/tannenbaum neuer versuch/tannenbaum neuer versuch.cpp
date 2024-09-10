// tannenbaum neuer versuch.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	int hoehe;
	

   cout << "Hallo, wie groß soll der Tannenbaum sein?" << endl;
   cin >> hoehe;

   int breite = hoehe;
   int breite2 = hoehe;
   int stern = 1;

   for (int i = 0; i < hoehe; i++)
   {

	   for (int j = 0; j < breite; j++)
	   {
		   cout << "#";
	   }

		   for (int k = 0; k < stern; k++)
		   {
			   cout << "*";
			}

	   stern += 2;
	   breite--;
	   for (int j = 0; j < breite+1; j++)
	   {
		   cout << "#";
	   }

	   cout << endl;
   }
   
   // Stamm
   for (int i = 0; i < 3; i++)
   {

	   for (int j = 0; j < hoehe-1; j++)
			   
	   {
		cout << "#";
		}

	   cout << "***";

	   for (int k = 0; k < breite2-1; k++)
	   {
		   cout << "#";
	   }
	   cout << endl;
   }



}
