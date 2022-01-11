#include<iostream>
#include <cstring>
using namespace std;


void print(int array[][1000], int row, int col){


    // printing it
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[row][col] << " " ;
        }
        cout << endl;
    }
    
}


int main() {



    int array[1000][1000];

    int row, col;
    cin >> row >> col;
    
    // taking input;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[row][col];
        }
        
    }
    
    // Print the array;


    print(array , row, col);



    return 0;
}



