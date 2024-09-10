#include "funktionen.h"


int jahr;


bool isSchaltjahr()
{
	cin >> jahr;
	if ((jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0) || (jahr % 4 == 0 && jahr % 100 != 0))
	{
		
		cout << "Schaltjahr!" << endl;
		return true;
	}
	
	else
	{
		
		cout << "Kein Schaltjahr!" << endl;
		return false;
	}

}

void tannenBaum()  
{

	system("chcp 1252");
	system("cls");

	int treeSize;

	cout << "Wie groß soll der Tannenbaum sein?\n Gib eine Zahl ein!\n";
	cin >> treeSize;

	int leaves = 1;
	int tree = treeSize;


	system("cls");

	for (tree; tree; tree--)
	{
		cout << "\t\t\t\t ";				//tabs als Abstand
		cout << setw(tree);

		for (int l = 0; l < leaves; l++)
		{
			cout << "*";
		}
		leaves += 2;
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{

		cout << "\t\t\t\t ";
		cout << setw(treeSize +2);
		cout << "*****";
		cout << endl;
	}
	
	

}