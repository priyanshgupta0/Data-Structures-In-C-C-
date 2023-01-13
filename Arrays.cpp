#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for index" << i << endl;
        cin >> A[i];
    }

    // int A[5];
    // A[0] = 10;
    // A[1] = 20;
    // A[2] = 30;
    // A[3] = 40;
    // A[4] = 50;
    // cout << sizeof(A) << endl; // size f one int is 4 bit so 4*5 = 20 bit
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl; // Transverse the array
    // }

    for (int x : A) // for each loop
    {
        cout << x << endl;
    }

    return 0;
}
