#include <iostream> 
#include <vector>
using namespace std;


// Sort the elements in increasing order;
void bubble_sort(int array[], int n){

    for (int time = 0; time <= n-1; time++)
    {
        // Repeated Swapping
        for (int j = 0; j <= n - time -1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j] , array[j+1]);
            }
            
            
        }
        
    }
    
}


int main() { 


    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int  n = sizeof(array) / sizeof(n);

    bubble_sort(array, n);

    for(auto x : array){
        cout << x << "," ;
    }









    return 0;
}