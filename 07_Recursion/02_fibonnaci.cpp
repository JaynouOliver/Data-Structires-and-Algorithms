#include <iostream>
using namespace std;


int fib(int n){

	// base case;

	if(n == 0 or n == 1){
		return n;
	}


	//recursive case;
	int f1 = fib(n-1);
	int f2 = fib(n-2);
	return f2+f1;

}



int main(){

	int n;
	cin >> n;

	cout << fib(n) << endl;


}