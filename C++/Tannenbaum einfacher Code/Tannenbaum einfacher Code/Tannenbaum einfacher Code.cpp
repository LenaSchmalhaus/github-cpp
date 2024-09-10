// Tannenbaum einfacher Code.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;


int main() {
    int hoehe; // Das ist die Höhe des Baumes, die der Benutzer eingibt

    // Den Benutzer fragen, wie groß der Baum sein soll
    cout << "Wie groß soll der Tannenbaum sein? (Gib eine Zahl ein): ";
    cin >> hoehe; // Wir speichern die Zahl, die der Benutzer eingibt

    int breite = hoehe;
    int sterne = 1;


    // Jetzt zeichnen wir den Baum
    for (int i = 0; i < hoehe; i++) {                        // Für jede Zeile, solange i kleiner als hoehe ist, läuft die Schleife weiter und macht 1 dazu - 1 wovon? siehe nächste for Anweisung:

        for (int j = 0; j < breite; j++) {                   // wir brauchen Leerzeichen, die mit der hoehe korrespondieren, also in der ersten Zeile so viele, wie der Baum hoch ist, deswegen initialisieren wir 
            cout << " ";                                     // oben die int breite der Leerzeichen = hoehe der Zeilen und diese soll an der letzten Zeile 0 betragen, damit der letzte Stern am Anfang steht               
        }                                                    // dafür geben wir weiter unten (zeile 31) breite-- ein, was dafür sorgt, dass in jeder neuen Zeile 1 Leerzeichen weniger gesetzt wird (breite-- = breite -=1)   

        for (int k = 0; k < sterne; k++) {                   // oben initialisieren wir Variable für Sterne = 1, da die erste Zeile mit 1 Stern startet. k auf 0 gesetzt, da Sterne 1 ist und er dann Sterne addiert, wenn 0 kleiner 1 ist (k++)
            cout << "*";                                        
        }

        sterne += 2;                                        // So viele Zeilen wie hoehe per Eingabe vorgibt, gibt es auch Sterne. Zuerst also pro Zeile 1 Stern mit Leerzeichen im Abstand der hoehe, es sollen dann aber pro weitere Zeile immer zwei weitere Sterne stehen,   
                                                            // die durch die um 1 abnehmenden Leerzeichen in die entspr. Position gerückt werden, sodass eine ungerade Zahl an Sternen ein Dreieck ergeben, indem jede weiteren Zeile 2 Sterne erhält
        
        breite--;                                           // die Breite, die durch Leerzeichen bedingt wird, soll nach jedem Durchlauf der Schleife um 1 abnehmen, korrespondiert demnach mit der hoehe des Baumes & zeigt an, wann die Sterne beginnen
                                                            // breite ist am Ende der Schleife von der gleichen Anzahl von hoehe verändert worden, bis breite = 0 ist.
        
        cout << "\n";                                       // wir geben hier an, dass er nach Durchlauf all dieser Bedingungen in eine nächste Zeile geht und weiter läuft, bis i = hoehe  und j = breite ist  (und breite = hoehe = 0)
    }

        // Stamm
    for (int i = 0; i < 3; i++) {                           // int i können wir erneut verwenden, da es eine neue Scope gibt, int startet bei 0, i < 3 steht für die Zeilen, über die der Stamm sich erstreckt, i++: bis dahin fügt er Breite des Stammes cout << "***" hinzu:

        for (int j = 0; j < hoehe - 1; j++) {               // hier legen wir wieder fest, ab welcher Position der Stamm auftaucht: in der Mitte, wo hoehe angesetzt ist, starten wir mit 3 Zeilen. wir brauchen eine ungerade Zahl an Sternen, damit  
                                                            // immer einer in der Mitte ist, also kann der Stamm 3,5,7.. Sterne breit sein. So würde er den ganzen Sternen-Stamm-Block am mittleren Stern des Baumes ansetzen, daher müssen wir die
                                                            // Position des Stammes nach hinten verschieben. Da wir 3 Sterne als Dicke haben, gehen wir minus 1 Leerzeichen zurück, also j < hoehe -1. (Bei 5 Sternen wären es 2 gewesen)
            
            
            cout << " ";
        }

        cout << "***\n";                                    // eine Zeile des Stammes besteht aus drei *** und geht danach in eine neue Zeile \n, nachdem die oberen Bedingungen durchlaufen wurden
    }



}