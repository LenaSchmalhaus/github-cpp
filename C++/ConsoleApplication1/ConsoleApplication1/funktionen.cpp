#include "funktionen.h"
// implementiert den funktionsbody & benennt die Parameter

int addieren(int a, int b)
	{
		return a + b;
	}

int subtrahieren(int a,int b) 
{
	return a - b;
}

int multiplizieren(int a, int b)
{
	return a * b;
}

double dividieren(double a, double b)
{
	return a / b;
}

bool checkObZahl(string& input)
{
	for (char c : input)
	{
		if (c < 48 || c > 57)                 //prüft er in der ASCII, ob es sich bei der Eingabe um eine Zahl handelt oder nicht: alles unter 48 und alles über 57 ist ein Buchstabe/Zeichen
		{
			return false;					  // false = nicht eine Zahl und Funktion abbrechen  (48 = 0 bis 57 = 9)
		}
	}
	return true;						  // true = eine Zahl und es geht weiter
}

void rechnen()
{
}


