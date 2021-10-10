//Linear Search Array
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        //Check if current element matches with the key
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    
    //out of the loop
    return -1;
}



int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/ sizeof(int);

    int key;
    cin >> key;

    int index = linear_search(arr,n,key);

    if(index != -1){
        cout << key <<  " is present at index " << index << endl;
    }
    else{
        cout << key << "is not found " << endl;
    }

    


    return 0;
   
}
 