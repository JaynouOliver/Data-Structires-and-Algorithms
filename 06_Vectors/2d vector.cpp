#include <iostream>
#include <vector>
using namespace std;


int main(){

    // 2D vector;
    vector<vector <int> > array = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9, 10},
        {11, 12},
    };

    array[0][0] += 10; // update this;

    for (int i = 0; i < array.size(); i++)
    {
        for(int number :  array[i]) {
            cout << number << ", ";
        }
        cout << endl;
    }
    
    return 0;
}