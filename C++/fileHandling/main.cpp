#include <iostream>
#include <cstring>
#include <fstream>
#include <stdio.h>
using namespace std;

void writedat(char* name)
{
    ofstream writefile(name);
    char inp[160];

    if(writefile)
    {
        cout << " : ";
        cin.getline(inp,160);
        while(strcmp(inp,"-x"))
        {
            writefile << inp << endl;
            cout << " : ";
            cin.getline(inp,160);
        }
    }
}
void readdat(char* name)
{
    ifstream readfile(name);
    char inp[160];
    if (readdat)
    {
        readfile.getline(inp,160);
        while(!readfile.eof())
        {
            cout << inp << endl;
            readfile.getline(inp,160);
        }
    }
}

int main()
{
    cout <<"Eingabe:\n"<<endl;
    writedat("temp.txt");

    cout << "\n\nAusgabe:\n"<<endl;
    readdat("temp.txt");

    return 0;
}
