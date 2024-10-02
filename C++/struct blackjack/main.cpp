#include "struct funx.h"


using namespace std;

int main()
{
#include <iostream>
#include <string.h>

    struct karte {
        string name;
        int wert;

    };

    void kartengenerieren(karte*deck)
    {
        int f = 0; int z = 0; int w = 0;
        string farbe[4] = {"Herz", "Karo", "Pik", "Kreuz"};
        string zahl[13] = { "2","3","4","5","6","7","8","9", "10","Bube","Dame","König","Ass"};
        int wert[13] = { 2,3,4,5,6,7,8,9,10,10,10,10,11};

            for(int i = 0; i < 52; i++)
            {


                if (int i % 13 = 0)
                {
                    f++;
                }

            }

    }

int main()
    {
        karte deck[52];
        karte karte1;
        karte1.name = "";
        karte1.wert = 1;












        //alte version
        // char vn[] = "Eduard";
        // person edi;
        // strcpy(edi.vorname, vn);
        // char nn[] = "Kampf";
        // strcpy(edi.nachname, nn);
        // edi.id = 1;

    }