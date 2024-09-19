
#include "SkriptStringsFunktionen.h"

/*
//1

void ostrcpy(char *ziel, const char *quelle) {
    int z = 0;
    do {
        ziel[z] = quelle[z];
        z++;
    } while (quelle[z - 1] != '\0');
}

//2

int ostrlen(const char *a) {
    int z = 0;
    while (a[z++]);
    return z - 1;  // Endekennung wird mitgezählt
}

//3

int upstring(char *a)
{
    int count = 0;
    while (*a) {
        if (islower(*a)) {
            *a = toupper(*a);
            count++;
        }
        a++;
    }
    return count;
}


//4

void reversstring(char *s) {
    char k[1000];
    int x = strlen(s) - 1;
    int y = 0;
    while (x >= 0) {
        k[y++] = s[x--];
    }
    k[y] = '\0';
    strcpy(s, k);
}

//5

void mixstring(char *ziel, char *quelle1, char *quelle2) {
    int z = 0, q1 = 0, q2 = 0;
    while (quelle1[q1] || quelle2[q2]) {
        if (quelle1[q1]) ziel[z++] = quelle1[q1++];
        if (quelle2[q2]) ziel[z++] = quelle2[q2++];
    }
    ziel[z] = '\0';
}


//6

int len(const char *s) {
    int a = 0;
    while (s[a++]);
    return a - 1;
}

int ostrstr(const char *a, const char *b) {
    int x, y, z;
    for (x = 0; x <= (len(a) - len(b)); x++) {
        z = 1;
        for (y = 0; y < len(b); y++) {
            if (b[y] != a[x + y]) {
                z = 0;
                break;
            }
        }
        if (z) return x;
    }
    return -1;
}

// 7

void leftstr(char *ziel, const char *quelle, int anz) {
    int i = 0;
    while (i < anz && quelle[i] != '\0') {
        ziel[i] = quelle[i];
        i++;
    }
    ziel[i] = '\0'; // Endekennung
}


//8

void rightstr(char *ziel, const char *quelle, int anz) {
    int laenge = strlen(quelle);
    if (anz > laenge) anz = laenge; // Bereichsüberschreitung verhindern
    for (int i = 0; i < anz; i++) {
        ziel[i] = quelle[laenge - anz + i];
    }
    ziel[anz] = '\0'; // Endekennung
}

//9

void midstr(char *ziel, const char *quelle, int start, int anz) {
    int laenge = strlen(quelle);
    if (start >= laenge) {
        ziel[0] = '\0'; // Wenn der Start außerhalb des Strings liegt
        return;
    }
    if (anz > laenge - start) anz = laenge - start; // Bereichsüberschreitung verhindern
    for (int i = 0; i < anz; i++) {
        ziel[i] = quelle[start + i];
    }
    ziel[anz] = '\0'; // Endekennung
}


//10


string einheiten[] = {"", "eins", "zwei", "drei", "vier", "fünf", "sechs", "sieben", "acht", "neun"};
string zehner[] = {"", "zehn", "zwanzig", "dreißig", "vierzig", "fünfzig", "sechzig", "siebzig", "achtzig", "neunzig"};
string teens[] = {"zehn", "elf", "zwölf", "dreizehn", "vierzehn", "fünfzehn", "sechzehn", "siebzehn", "achtzehn", "neunzehn"};
string hunderter[] = {"", "hundert", "zweihundert", "dreihundert", "vierhundert", "fünfhundert", "sechshundert", "siebenhundert", "achthundert", "neunhundert"};

string inWorten(unsigned long zahl) {
    if (zahl == 0) return "null";

    string wort = "";

    if (zahl >= 1000000000) {
        wort += einheiten[zahl / 1000000000] + "milliarde";
        zahl %= 1000000000;
    }
    if (zahl >= 1000000) {
        wort += einheiten[zahl / 1000000] + "million";
        zahl %= 1000000;
    }
    if (zahl >= 1000) {
        wort += einheiten[zahl / 1000] + "tausend";
        zahl %= 1000;
    }
    if (zahl >= 100) {
        wort += hunderter[zahl / 100];
        zahl %= 100;
    }
    if (zahl >= 20) {
        wort += zehner[zahl / 10];
        zahl %= 10;
    } else if (zahl >= 10) {
        wort += teens[zahl - 10];
        return wort;
    }
    if (zahl > 0) {
        wort += einheiten[zahl];
    }

    return wort;
}

void toWord(unsigned long wert, string &ziel) {
    ziel = inWorten(wert);
}

*/

/*
void leftstr(char* ziel, char* quelle, int anz)
{

    int i = 0;

    while(ziel[i] && quelle[i])
    {
        while( i < anz)
        {
            ziel[i] = quelle[i];
            cout << ziel[i];
            i++;
        }

        while (ziel[i])
        {
            cout << ziel[i];
            i++;
        }

    }
    cout << endl;
    ziel[i]='\0';
}
*/


void leftstring(char* ziel, char* quelle, int anz)
{
    int i = 0;
    // Bei der ersten Schleife sind stet
    while (ziel[i] && quelle[i]) {

        while (i < anz) {
            ziel[i] = quelle[i];
            cout << ziel[i];
            i++;
        }

        while (ziel[i]) {
            cout << ziel[i];
            i++;
        }


    }

    cout << endl << endl;
    ziel[i] = '\0';
}
