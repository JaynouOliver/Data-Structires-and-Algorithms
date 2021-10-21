// Arrays
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.


    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    





    return 0;
   
}
