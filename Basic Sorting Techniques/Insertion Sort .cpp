#include <iostream> 
#include <vector>
using namespace std;

// Insertion Sort


// Sort the elements in increasing order;
void insertion_sort(int array[], int n){

    for (int i = 1; i <= n - 1; i++)
    {
        int current = array[i];

        int previous = i - 1;

        // loop to find the right index where the right element should be inserted 
        while (previous >= 0 and array[previous] > current) 
        
        // eg: {2, 3 ,5} {1} so 5 >= 0 and 5 > 1 soo 5 will replace 1.  
        
        
        {
            array[previous + 1] = array[previous]; //eg: {1} = (previous + 1) ; [5] = previous; so 1 is replaced by 5.
            previous = previous - 1; // eg 5 will shift to 3 and the process starts again.
        }
        // {1, 2, 3, 5} {4}; here, is  3 > 4 ? no ; so 4 is replaced by 5.
        array[previous + 1] = current;
    } 
}


int main() { 


    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int  n = sizeof(array) / sizeof(n);

    insertion_sort(array, n);
    for(auto x : array){
        cout << x << "," ;
    }

    return 0;
}
