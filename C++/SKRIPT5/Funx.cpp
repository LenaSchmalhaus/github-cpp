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


void mixstring1(char*ziel, char*quelle1, char*quelle2)
{
    int i=0, q1=0,q2=0;

    do
    {
        if (quelle1[q1])
        {
            ziel[i++] = quelle1[q1++];
        }
        if(quelle2[q2])
        {
            ziel[i++] = quelle2[q2++];
        }
    }while(quelle1[q1] || quelle2[q2]);
    ziel[i]=0;

}

void ostrstr(char*, char*)
{

}
