#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned seed = time(NULL); // use of time(NULL) for initialize seed with different value every time it is run

    int n = sizeof(a) / sizeof(a[0]);
    for (int j=0; j < 10; j++) // test 10 times the random order
    {
        shuffle(a, a + n, default_random_engine(seed)); // function suffle
        for (int i = 0; i < n; ++i) 
            cout << a[i] << " "; // output element by element
        cout << endl;
    }

    return 0;
}
