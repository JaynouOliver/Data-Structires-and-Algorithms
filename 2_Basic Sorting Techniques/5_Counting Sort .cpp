// Counting sort

#include <iostream> 
#include <vector>
using namespace std;

void counting_sort(int array[], int n)
{
    // finding the largest element
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, array[i]);
    }
    
    // creating a count array or vector;
    vector<int> freq(largest + 1, 0);

    // updating the frequency array;
    for (int i = 0; i < n; i++)
    {
        freq[array[i]++];
    }
    

    //Put back the elements from the frequency into the array

    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            array[j] = i;
            freq[i]--;
            j++;
        }
        
    }
    
}



int main() { 

    int array[] = {88, 97, 10, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(array) / sizeof(int);

    counting_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " ;
    }
    
    
    

    return 0;
}