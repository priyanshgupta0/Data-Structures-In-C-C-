#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int Length; // 4 bytes for 1 int
    int Breadth;
};

int main()
{
    struct Rectangle R1 = {20, 15};
    R1.Length = 25;
    R1.Breadth = 10;            // use to update the values of struct
    cout << sizeof(R1) << endl; // 4*2 = 8 bytes
    cout << R1.Length << endl;
    cout << R1.Breadth << endl;
    return 0;
}