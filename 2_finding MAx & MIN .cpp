// Arrays -> FINDING GREATEST AND SMALLEST NUMBERS
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <climits>
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
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (size_t i = 0; i < n; i++)
    {
        if (array[i] > maxNo)
        {
            maxNo = array[i];
        }
        
        if (array[i] < minNo)
        {
            minNo = array[i];
        }
        
    }   
    
    cout << maxNo << " " << minNo;


    return 0;
   
}
