#include <iostream>
using namespace std;

int main(){

    int a = 10;

    int *pointer = &a;

    cout << pointer << endl;
    cout << &a << endl;
    cout << &pointer << endl;
    cout << *pointer << endl;



    return 0;
}