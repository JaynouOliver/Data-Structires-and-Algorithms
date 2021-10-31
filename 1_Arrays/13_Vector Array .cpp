// Vector Array

#include <iostream>
#include <vector>
using namespace std;


int main(){

//    vector<int> array{1, 2, 10, 12, 15};

//     // Remove the last element; (in ths case t'will remove 15.)
//     array.pop_back();

//     // Push Back
//     array.push_back(16);

    // Using Fill Constructor;
    vector <int> array(10,7);

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
    
//     // Size of array : no of elements present.
//    cout << array.size() << endl;
    
//     // Capacity of vectors: actual memory allocated
//     cout << array.capacity() << endl;

    

    return 0;
}
