#include <iostream>
using namespace std;

bool isSorted(int n, int arr[]){

	// base case;
	if(n == 0 or n == 1){
		return true;
	}

	// recursive case; 
	if(  arr[0] < arr[1] and isSorted(arr+1, n-1)  ){
		return true;
	}
	return false;
}


int main(){


	int arr[] = {1, 2, 3, 4, 5, 7, 6};

	int n = sizeof(arr)/ sizeof(int);

	cout << isSorted(n , arr) << endl;

	return 0;
}