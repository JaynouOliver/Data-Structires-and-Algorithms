#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;

pair <int,int> staircaseSearch(int array[][4], int row, int col, int key){

    // later if element is not present return { -1 , -1 };
    if(key < array[0][0] or key > array[row - 1][col -1]){
        return {-1 , -1 };
    }

    // staircase search;

    int i = 0;
    int j = col - 1;

    while (i <= row -1 and j >= 0)
    {
        if(array[i][j] == key){
            return {i , j};
        }
        else if (array[i][j] > key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    
    return {-1, -1 };
}






int main(){


    // 2d row and col wise sorted array;
    int array[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50},
    };

    int row = 4, col = 4;

    pair <int , int > coords = staircaseSearch(array, row, col, 33);
    cout << coords.first << " " << coords.second << endl;








    return 0;
}
