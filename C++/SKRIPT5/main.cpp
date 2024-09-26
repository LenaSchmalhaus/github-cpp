#include "Funx.h"


int main()
{

    char q1[40];
    char q2[40];
    char ziel[100];
cout << "Geben Sie zwei Strings ein, die abwechelnd in einen neuen String kopiert werden sollen."<< endl;
    cin.getline(q1, 40);
cout << "Geben Sie den zweiten String ein."<< endl;
    cin.getline(q2,40);

    mixstring(ziel,q1,q2);

    cout << "Der neue String lautet: " << ziel << ". " << endl;



    return 0;
}
