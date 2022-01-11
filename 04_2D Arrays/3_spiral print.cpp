#include<iostream>
#include <cstring>
using namespace std;



void spiralprint(int array[][10], int row, int col){



    int startrow = 0;
    int endrow = col - 1;
    int startcol = 0;
    int endcol = row - 1;


    // outer loop (traverse the array boundary);
    while (startcol <= endcol and startrow <= endrow)
    {
        // Start row
        for (int col = startcol; col <= endcol; col++)
        {
            cout << array[startrow][col] << " " ;
        }
        
        // End column
        for (int row = startrow + 1; row <= endrow; row++){
            cout << array[row][endcol] << " ";
        }
        
        // End row
        for (int col = endcol; col >= startcol; col--)
        {
            // To avoid duplicate printing of elements
            if (startrow == endrow )
            {
                break;
            }
            
            cout << array[endrow][col] << " ";

        }
        
        // Start col
        for (int row = endrow -1 ; row >= startrow  +1 ; row--)
        {
            // avoid duplicate printing of elements
            if (startcol == endcol)
            {
                break;
            }
            
            cout << array[row][startcol] << " ";
        }
        
        // Update the varibles to point to the inner spirals
        startrow++;
        endrow--;
        startcol++ ;
        endcol--;


    
    }
    
}



int main(){

    int array[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 15},
        {11, 16, 15, 6},
        {10, 9, 8, 7},
    };

    int rows = 4, col = 4;


    spiralprint(array ,rows, col);



    return 0;
}