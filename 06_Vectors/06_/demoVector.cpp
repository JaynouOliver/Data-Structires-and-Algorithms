#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Demo Vector;
    //vector<int> array = {1, 2, 3, 34, 4};

    // fill Constructor;
    vector<int> array(10, 7);

    // Pop back;
    array.pop_back();

    // Push Back;
    array.push_back(78);

    // print all the elements ;
    // for (int i = 0; i < array.size(); i++)
    // {
    //     cout << array[i] << endl;
    // }

    for(int x : array){
        cout << x << "," ;
    }
    

    // // size of the vector;
    // cout << array.size() << endl;

    // // Capacity of the vector;
    // cout << array.capacity() << endl;


    return 0;
}