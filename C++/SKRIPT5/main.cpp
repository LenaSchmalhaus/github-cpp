#include "Funx.h"


int main()
{

    char quelle1[40];
    char quelle2[40];
    char ziel[100];
cout << "Geben Sie zwei Strings ein, die abwechelnd in einen neuen String kopiert werden sollen."<< endl;
    cin.getline(quelle1, 40);
cout << "Geben Sie den zweiten String ein."<< endl;
    cin.getline(quelle2,40);

    mixstring1(ziel,quelle1,quelle2);

    cout << "Der neue String lautet: " << ziel << ". " << endl;



    return 0;
}
