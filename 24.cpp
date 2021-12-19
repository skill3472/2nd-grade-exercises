#include <iostream>

using namespace std;
namespace biblioteka {
    #include "biblioteka.cpp"
}

int main() {
    cout << biblioteka::dodaj(5, 5) << endl;
    cout << biblioteka::odejmij(5, 5) << endl;
    cout << biblioteka::pomnoz(5, 5) << endl;
    cout << biblioteka::podziel(5, 5) << endl;
}
