// August 19.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "August 19.h"
using namespace std;



int main()
{
	int arr[100];

	for (int i = 0; i < 100; i++)			// i = 0 --> 99, i++ zählt bei jedem Durchlauf 1 hoch
	{
		arr[i] = i + 1;						// möchte Zahlen 1 bis 100 haben, statt 0 bis 99, deswegen starte ich mit i(0) + 1 = 1.		.
	}

	for (int i = 0; i < 100; i++)
	{
		cout << setw(5) << arr[i] << endl;		// ODER << *arr + i   Startadresse des Index ist nur arr und i wird addiert und nach jedem Durchlauf ist i 1 mehr, da es oben so festgelegt wurde!
	}

}

