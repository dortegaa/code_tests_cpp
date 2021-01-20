#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float aleatorio;
     int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
 
    int n = sizeof(a) / sizeof(a[0]);
 
    //shuffle_array(a, n);
    unsigned seed = time(NULL);
    for (int j=0; j < 10; j++) 
    {
        shuffle(a, a + n, default_random_engine(seed));
        for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
    }

    return 0;
}
