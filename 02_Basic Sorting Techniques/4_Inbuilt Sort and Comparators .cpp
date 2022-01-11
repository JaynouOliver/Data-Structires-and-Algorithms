#include <iostream>
#include <algorithm>
using namespace std;





int main() {


    int array[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(array) / sizeof(int);


    sort(array, array+n, greater<int>());

    // reverse(array , array + n, );

    for(int x: array)
    {
        cout << x << " ";
    }



    return 0;
}