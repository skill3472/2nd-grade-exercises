#include <iostream>

using namespace std;

int tabliczka[10][10];

void render()
{
    for (int i = 0; i < 10; i++) {
        cout << endl;
        for (int i2 = 0; i2 < 10; i2++) {
            cout << (i2+1) << "*" << (i+1) << "=" << tabliczka[i2][i] << " | ";
        }
    }
}

int main()
{
    for (int i = 0; i < 10; i++) {
        for (int i2 = 0; i2 < 10; i2++) {
            tabliczka[i2][i] = (i+1)*(i2+1);
        }
    }
    render();
}
