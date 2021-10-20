//Printing Pairs
#include <iostream>
using namespace std;

void Printing_Pairs(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        int x = array[i];

        for (int j = i+1; j < n; j++)
        {
            int y = array[j];

            cout << x << "," << y << endl;
        }
        cout << endl;
    }
    
}



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

    
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(array) / sizeof(int);

    Printing_Pairs(array, n);



    return 0;
   
}