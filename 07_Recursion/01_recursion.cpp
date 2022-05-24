#include <iostream>
using namespace std;


int factorial(int n){
    
    // base case
    if(n == 0 ){
        return 1;
    }

    //rec case
    int rec = n*(factorial(n-1));
    return rec;

}



int main(){

    int n;
    cin >> n;

    cout << factorial(n) << endl;



    return  0;
}