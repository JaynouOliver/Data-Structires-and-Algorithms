// Problem: Print all Subarrays of a given array
// brute Force approach
#include <iostream>
using namespace std;

int LargestSuminArrary(int array[], int n){
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subarraySum += array[k];
            }
            largest_sum = max(largest_sum, subarraySum);
        }
        
    }
    return largest_sum;
    
}


int main(){

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(array) / sizeof(int);

    cout << LargestSuminArrary(array, n) << endl;





    return 0;
}