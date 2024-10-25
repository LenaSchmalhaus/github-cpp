#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
   //Selection sort

   int liste[22] = {16, 56, 8, 0,12,496,4,69,477,47,6,64,96,7,67,77,123,3};
   int size = 22;


for(int i=0; i < size-1; i++ )
{
   int smallest = i;                        // 1. Setze das erste Element des unsortierten Bereichs als vorläufig kleinstes


   for(int j= 0; j < size; j++)               // 2. Durchsuche den unsortierten Bereich, um das kleinste Element zu finden
   {
      if (liste[j] < liste[smallest])
      {
         smallest = j;                                                  // Aktualisiere die Position des kleinsten Elements

      }
   }

                           // 3. Tausche das kleinste gefundene Element mit dem ersten Element des unsortierten Bereichs

}
}






}
