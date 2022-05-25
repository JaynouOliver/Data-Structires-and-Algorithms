#include <iostream>
using namespace std;

int decreasing(int n ){
	// base case;

	if (n == 0)
	{
		return;
	}

	// recursive case; 

	cout << n << ", ";
	decreasing(n-1);
}

int increasing(int n){
	// base case;

	if (n == 0)
	{
		return;
	}

	// recursive case; 

	increasing(n-1);
	cout << n << ", ";
}

int main(){

	int n;
	cin >> n;

	cout << increasing(n); 
	cout << endl;
	cout << decreasing(n);

	return 0;
}