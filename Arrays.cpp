#include <iostream>

using namespace std;

int main()
{
    int A[5];
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;
    cout << sizeof(A) << endl; // size f one int is 4 bit so 4*5 = 20 bit
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl; // Transverse the array
    }

    return 0;
}
