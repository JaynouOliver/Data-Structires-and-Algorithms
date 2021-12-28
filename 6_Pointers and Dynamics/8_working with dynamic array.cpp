#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    // dynamic array;
    int *array = new int[n];

    cout << array << endl; 

    for (int i = 0; i < n; i++)
    {
        array[i] = i;
        cout << array[i] << " ";
    }
    
    // deleting array;
    delete[] array;

    cout << array << endl;  

    return 0;
}