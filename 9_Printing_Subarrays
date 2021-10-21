//Printing subarrays
#include <iostream>
using namespace std;

void print_Subarrays(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << "(" << i << "," << j << ")" ;
            
            for (int k = i; k < j; k++)
            {
                cout << array[k] << "," ;
            }
            cout << endl;

        }
        
    }
    
}



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n  = sizeof(array) / sizeof(n);



    
    print_Subarrays(array, n);



    return 0;
   
}