#include <iostream>
using namespace std;

// Pass by reference;

void appplytax(int  &   money ){

    float tax = 0.10;
    money = money - money*tax;

}

int main () {

    int income;
    cin >> income;

    appplytax(income);

    cout << income << endl;



    return 0;
}