#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int Length; // 4 bytes for 1 int
    int Breadth;
};

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;

    // cout << a << endl;  // value of a
    // cout << *p << endl; // value of a
    // cout << &a << endl; // address of a
    // cout << p;          // address of a

    // int A[5] = {1, 2, 3, 4, 5};
    // int *p;
    // p = A;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl;
    //     cout << p[i] << endl;
    // }

    // int *p;
    // // p = (int *)malloc(5 * sizeof(int)); // used in C
    // p = new int[5]; // used in c++;
    // p[0] = 5;
    // p[1] = 15;
    // p[2] = 52;
    // p[3] = 35;
    // p[4] = 54;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }
    // delete[] p; // used inn cpp
    // // free(p); //used in c

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << endl; // size of pointer is independent
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    return 0;
}