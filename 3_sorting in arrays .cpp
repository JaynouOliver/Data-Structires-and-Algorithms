// Arrays -> SORTING IN ARRAYS
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int binarySearch(int array[], int n, int key){

    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.


    
    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int key;
    cin >> key;

cout << binarySearch(array, n , key) << endl;

    return 0;
   
}
