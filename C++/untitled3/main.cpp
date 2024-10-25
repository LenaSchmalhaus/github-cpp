#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class SimpleQueue
{
    int* array;             //dynamisches array
    int size;

public:
    SimpleQueue()           //Konstruktor
    {
        size = 0;                       //am Anfang ist die Queue leer
        array = new int[100];           // 100 Plätze werden im Array reserviert
    }

    void add(int value)
    {
        if(size >=100)
        { cout << "Queue is full." << endl;
        return;}

        array[size] = value;            //setzt das neue Element an das Ende der Queue
        size++;                         //erhöht size um 1
    }

    void remove()
    {
        if (size == 0)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        for(int i = 0; i < size-1; i++)
        {  array[i] = array[i+1];              //verschiebt alle Elemente um eine Position nach vorne, wodurch das erste Element entfernt wird.
            size--;                             // verringert size um 1
        }
    }
    void print()
    {
        for(int i =0; i < size; i++)
        {
            cout << array[i] << " ";            // gibt alle Elemente des arrays aus
        }
    }
};
int main()
{
SimpleQueue q;                                                      //Objekt q der Klasse SimpleQueue erstellt
    q.add(19); q.add(34); q.add(9);q.add(85);           // befüllt das array mit Werten
    q.remove();
    q.print();
    q.add(32);
    q.print();

}
