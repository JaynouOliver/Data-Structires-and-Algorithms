//Reverse Array
#include <iostream>
using namespace std;

void Reverse_Array(int array[], int n){

    int start = 0;
    int end = n-1;

    while (start < end)
    {
        swap(array[start], array[end]);
        start += 1;
        end -= 1;
    }
    
}



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

    int array[] = {10, 20, 30, 40, 50, 60, 70, 0, 90, 100};
    int n = sizeof(array)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    Reverse_Array(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;



    return 0;
   
}