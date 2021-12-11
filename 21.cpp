#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 15;

int main()
{
    int Z[N + 1], minZ, maxZ, i;

    srand((unsigned) time(NULL));
    for (i = 0; i < N; i++) Z[i] = rand() % 10000;
    if (N % 2) Z[N] = Z[N - 1];
    minZ = 10000;
    maxZ = -1;
    for (i = 0; i < N; i += 2)
    {
        if (Z[i] > Z[i + 1])
        {
            if (Z[i] > maxZ) maxZ = Z[i];
            if (Z[i + 1] < minZ) minZ = Z[i + 1];
        }
        else
        {
            if (Z[i] < minZ) minZ = Z[i];
            if (Z[i + 1] > maxZ) maxZ = Z[i + 1];
        }
    }
    for (i = 0; i < N; i++)
    cout << setw(4) << Z[i] << endl;
    cout << endl << minZ << ": " << maxZ;
}
