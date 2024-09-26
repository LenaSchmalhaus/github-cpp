#include "Funx.h"

void mixstring(char*ziel, char*q1, char*q2)
{   int i =0;
    int index1 = 0;
    int index2 = 0;


    while(q1[index1] && q2[index2])
    {
        ziel[i] = q1[index1];
        i++;
        ziel[i] = q2[index2];
        index1++;
        index2++;
        i++;
    }

    while(q1[index1])
    {
        ziel[i] = q1[index1];
        i++;
        index1++;
    }



    while(q2[index2])
    {   ziel[i] = q2[index2];
        i++;
        index2++;
    }

    ziel[i] = '\0';
    cout << ziel << endl;
}
