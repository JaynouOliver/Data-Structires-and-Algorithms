// Finding the sum of a given array using prefix method


#include <iostream>
using namespace std;


int LargestSumIN_aRRAY(int array[], int n){

    // Prefix Method
    int prefix[n] = {0};
    prefix[0] = array[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + array[i];

    }
    
    // Largest Sum Approach
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int SumofArray = i > 0 ? prefix[j] - prefix[i-1]: prefix[j];
            
            largest_sum = max(largest_sum, SumofArray);
        }
        
    }
    

    return largest_sum;
}



int main(){



    
    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(array) / sizeof(n);

    cout << LargestSumIN_aRRAY(array, n) << endl;



    return 0;
}
