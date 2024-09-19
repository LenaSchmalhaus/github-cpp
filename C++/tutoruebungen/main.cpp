#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int multiplikation(int a, int b, int c)
{
    int produkt = (a*b*c);
    return produkt;
}



int main()
{

/*
    int a = 5;
    int b = 4;
    int c = 7;

    int ergebnis= multiplikation(a,b,c);

    cout << "Das Ergebnis ist " << ergebnis << endl;



char ch[50];

    cout <<"Gib ein Wort ein!";
    cin.getline(ch, 50);

    for(int i = 0; ch[i]; i++)             // for(int i = 0; ch[i] != '\0'; i++)  dieser Code ist klarer, da er hinweist, dass auf die Nullkennung explizit geachtet wird
    {
        cout << ch[i] << endl << endl;
    }

//berechne die Länge des Strings, indem du durch den String gehst & jedes Zeichen bis zum Null-Zeichen zählst.

    for (int zaehler = 0; ch[zaehler] != '\0'; zaehler ++)
    {
        cout << zaehler << endl;
    }

// Referenzen bauen:

    int a = 15;
    int &ref = a;                   // & verknüpft ref mit a ("Spitzname", zeigt auf denselben Wert)

    ref = 40;                       // dadurch wird auch der Wert von a verändert
    cout << a << endl;
    //Eine Referenz ist fest mit einer Variablen verbunden, während ein Pointer auf verschiedene Variablen zeigen kann.

    // pointer:

    int b = 34;
    int *ptr = &b;                  // ptr speichert die ADRESSE von b!

    *ptr = 20;                      // ändert den Wert von b auf 20!
    cout << b << endl;

// Verwendung von Referenzen und Pointern mit Arrays:

    int arr[4] = {1,2,3,4};
    int (&refArr)[4] = arr;             // Klammern um &refArr sind nötig, damit der Compiler versteht, dass refArr eine Referenz auf das gesamte Array ist, und nicht ein Array von Referenzen.


// Ändere das zweite Element über die Referenz

refArr[1] = 6;

// Gib die Array-Elemente einzeln aus:

    for(int i = 0; i < 4; i++)                          //Um das Ganze Array auszugeben, muss durch den Index iteriert werden
    {
    cout << arr[i] << endl;
    }

// Ein Pointer ist eine spezielle Variable, die anstatt eines Wertes die Adresse einer anderen Variable speichert.
// Damit kannst du direkt auf den Speicherort einer Variable zugreifen.

// & (Adressoperator): Gibt die ADRESSE einer Variablen zurück.
// *(Dereferenzierungsoperator):Gibt den WERT der Variable zurück, auf die der Pointer zeigt.

  int zahl = 42;
  int*ptrZahl = &zahl;              //ptrZahl zeigt jetzt auf die Adresse der Variable zahl

// auf den Wert zugfreifen:
    cout << "Wert von zahl: " << *ptr << endl;          //*ptr :  * ist jetzt der Dereferenzierungsoperator


//Ein Array ist im Wesentlichen ein Pointer auf das erste Element des Arrays.
//Das bedeutet, dass du mit Pointern durch ein Array navigieren kannst.


    int array[3] = {10, 20, 30};
    int* ptrArray = arr;  // Pointer auf das erste Element des Arrays ([0])

    cout << "Erstes Element: " << *ptrArray << endl;        // Gibt 10 aus
    cout << "Zweites Element: " << *(ptrArray + 1) << endl; // Gibt 20 aus

//Mit Pointer-Arithmetik auf das nächste Element des Arrays zugreifen. ptr + 1 zeigt auf das zweite Element


//ein Programm, das ein Array von Ganzzahlen speichert und mithilfe eines Pointers die Werte der Array-Elemente ausgibt.
//Verwende Pointer-Arithmetik, um durch das Array zu navigieren.

    int arr1[4] = { 2,4,6,8};
    int* ptrarr1 = arr1;

    for(int i = 0; i < 4; i++){
        cout << *(ptrarr1 +i) << endl;                  // der* muss VOR der Klammer sein, sonst würde i nur zu den Werten des Elements addiert werden!!!
    }
    */

//*(ptrarr1 + i): Dies greift auf das Element an der i-ten Position des Arrays zu.
//Mit ptrarr1 + i wird der Pointer um i Positionen verschoben, und mit * greifst du auf den Wert an dieser Stelle zu.

// ein Programm, das einen String als char-Array speichert und mithilfe eines Pointers jedes Zeichen des Strings einzeln ausgibt:

    char str[11]={"Beeblebrox"};
    char*ptrstr = str;                                  // Pointer auf das erste Zeichen des Strings



    // Schleife läuft bis zum Null-Zeichen '\0'
for (int j = 0; j < *(ptrstr + j) !='\0'; j++)
{
    cout << *(ptrstr + j) << endl;                      // Gib jedes Zeichen einzeln aus
}

//*(ptrstr + j): greift auf das j-te Zeichen im String zu, indem du den Pointer ptrstr um j Positionen weiterbewegst und das Zeichen an dieser Position ausgibst.

//Wenn du einen Pointer an eine Funktion übergibst, übergibst du die Adresse einer Variablen.
//In der Funktion kannst du dann mit dem Dereferenzierungsoperator (*) den Wert an dieser Adresse ändern.



return 0;




}