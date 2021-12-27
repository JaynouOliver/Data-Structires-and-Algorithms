#include<iostream>
#include <cstring>
using namespace std;

int main() {


    char numbers[][10] = {


        "one",
        "two",
        "three",
        "four",
        "eight",
        "hundred",
    };

    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << endl;
    }
    
    


    return 0;
}