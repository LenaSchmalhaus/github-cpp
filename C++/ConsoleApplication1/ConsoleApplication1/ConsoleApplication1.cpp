#include <iostream>
using namespace std;
#include "funktionen.h"




int main()
{

 
    int choice = 0;                                       // initialisiert mit 0, damit er niemals nicht definiert ist
    do 
    {                                                     /* do führt er mindestens einmal aus (fußgesteuerte Schleife)*/

        int a, b, ergebnis;                                 // initialisiert
        cout << "Was wollen Sie machen?\n\n(1) Addieren \n(2) Subtrahieren \n(3) Multiplizieren \n(4) Dividieren \n(5) Beenden \n\n"; // gibt den Text aus
        cin >> choice;
        system("cls");                                    // system call : cls = clean screen  

    
        


        if(choice > 0 && choice < 5)
		{
			cout << "Bitte geben Sie die erste Zahl ein: ";
			cin >> a;
			cout << "Bitte geben Sie die zweite Zahl ein: ";
			cin >> b;
		}


        switch (choice)
        {
        case 1:
            ergebnis = addieren(a , b);                                             // gibt das Ergebnis aus
            break;

        case 2:
            ergebnis = subtrahieren(a, b);
            break;

        case 3:
            ergebnis = multiplizieren(a, b);
            break;


		case 4:
			ergebnis = dividieren(a, b);
			break;


		case 5:
			break;

		default:                                                                    // damit die Schlaufe nicht weiter durchbrennt
            cout << "Ungueltige Eingabe.\n";
            /*cout << "Erneut versuchen?\n 1 = ja\n 0 = nein\n";
            cin >> choice;
            system("cls");

            if (choice = 1)
			{
				cout << "Was wollen Sie machen?\n\n(1) Addieren \n(2) Subtrahieren \n(3) Multiplizieren \n(4) Dividieren \n(5) Beenden \n\n"; // gibt den Text aus
				cin >> choice;
				system("cls");
            }
            else
			{
				cout << "Auf Wiedersehen!\n\n";
            }*/

			break;
        }

        if (choice > 0 && choice < 5)
        {
            cout << "\nDas Ergebnis ist: " << ergebnis << "\n Moechten Sie von vorne anfangen?\n\n";   //diesen Satz wollen wir nur haben, wenn gerechnet wird, also alles außer 5
        }

    }while(choice != 5);                                  //prüft,  ob die Bedingung noch zum Weitermachen erfüllt ist  // != ist ! = (ungleich)

    cout << "Auf Wiedersehen!\n\n";
    return 0;

    while (choice) {                                      // ist die Bedingung vorhanden, wird sie überhaupt erst ausgeführt (kopfgesteuerte Schleife)

    }
    

   

   


    
}
