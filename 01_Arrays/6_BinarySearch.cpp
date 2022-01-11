//Binary Search Array
#include <iostream>
using namespace std;

int Binary_search(int array[], int n, int key){

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int midpoint = (start+end)/2;

        if(array[midpoint] == key){
            return midpoint;
        }
        else if (array[midpoint] > key)
        {
            end = midpoint - 1;
        }
        else{
            start = midpoint + 1;
        }
    }

    return -1;
    


}


int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.


    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(array) / sizeof(int);

    int key;
    cin >> key;

    int index = Binary_search(array, n, key);

    if (index != -1)
    {
        cout << key << " is present in index " << index << endl;
    }
    else{
        cout << key << " is not found" << endl;
    }




    
    return 0;
   
}