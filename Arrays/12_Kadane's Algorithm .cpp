// find the sum of the given array

// Kadane's Algorith Approach

#include <iostream>
using namespace std;

int KadanesAlgorithm(int array[], int n){

    int current_sum = 0;
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        current_sum += array[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        largest_sum = max(largest_sum , current_sum);
    }
    
    return largest_sum;
}



int main(){

                      //This is not part of the code.

    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(array) / sizeof(n);



    cout << KadanesAlgorithm(array , n) << endl;


    return 0;
}
