// Selection Sort

#include <iostream>
using namespace std;

void selection_sort(int array[], int n){

   for (int position = 0; position <= n-2; position++)
   {        
       int current = array[position]; // eg: current = {5, 4, 1, 3, 2}
       int minimun_position = position; // here {5} = "minimum position" which is also in "position"

       //Finding out the lowest element
       
       for (int j = position; j < n; j++) // This will iterate over the array 
       {
           // minimum_position = {5} right now
           if(array[j] < array[minimun_position]) // eg: if 4 < 5 then minimum_position = {4}
           {
               minimun_position = j;
           }
       }
       // after this loop the value of minimum_position is 1


        // swapping the positions outside the loop;
        swap(array[minimun_position], array[position]);
        // now current array = {1, 4, 5, 3, 2}
       

   }
   

}


int main(){

    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(array)/sizeof(int);
    selection_sort(array, n);
    
    for(auto x : array){
        cout << x << "," ;
    }

    return 0;
}
