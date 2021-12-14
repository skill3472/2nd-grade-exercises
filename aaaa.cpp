#include <iostream>

using namespace std;

string tekst;
string nowyTekst;

int main()
{
    cin >> tekst;
    nowyTekst = tekst;
    for (int i = 0; i < tekst.length(); i++) {
        if(tekst[i] == 'a') nowyTekst[i] = 'b';
        else if(tekst[i] == 'b') nowyTekst[i] = 'a';
    }
    cout << endl << nowyTekst;
}
