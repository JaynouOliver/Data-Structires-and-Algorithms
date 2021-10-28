#include <iostream> 
#include <vector>
using namespace std;

// Insertion Sort


// Sort the elements in increasing order;
void insertion_sort(int array[], int n){

    for (int i = 1; i <= n-1; i++)
    {

        int current = array[i];

        int previous = i - 1;

        // Loop to find the right index where the element current is inserted.

        while (previous >= 0 and array[previous] > current)
        {
            array[previous + 1] =  array[previous];
            previous = previous - 1;
        }

        array[previous + 1] = current;
        
    }
    
   
    
}


int main() { 


    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int  n = sizeof(array) / sizeof(n);

    insertion_sort(array ,n);

    for(auto x : array){
        cout << x << "," ;
    }

    return 0;
}
