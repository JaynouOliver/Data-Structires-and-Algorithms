#include <iostream>
using namespace std;

int** create2Darrays(int rows, int cols){

    int** array = new int*[rows];
    
    // allocate memory for each row;
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int [cols];
    }

    // init the array with the increasing list of numbers
    int value = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = value;
            value++;
        }
        return array;
    }

}

int main (){

    // 2d dynamic arrays
    int rows, cols;
    cin >> rows >> cols ;

    int **array = create2Darrays(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}