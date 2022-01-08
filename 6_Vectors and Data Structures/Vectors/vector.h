class Vector{

    // data memebers;

    int *array;
    int current_size;
    int max_size;

public:
    Vector( int MAXSIZE = 1){
        current_size = 0;
        max_size = MAXSIZE;
        array = new int[max_size];

    }

    void push_back(int d){
        // two cases;
        if (current_size == max_size){
        // create a new array and delete the new one, double the capacity

        int *oldArray = array;
        max_size = 2*max_size;
        array = new int[max_size];

        // copy the elements;
        for (int i = 0; i < current_size; i++)
        {
            array[i] == oldArray[i];
        }
        
        
        
        }

        // delete old arrayy;

        delete[] oldArray;


        array[current_size] = d;

        current_size++;

    }

    void pop_back(){
        if (current_size >= 0)
        {
            current_size -- ;

        }
        
    }

    bool isEmpty(){
        return current_size == 0;
    }



    // Front, Back, at(i) , [];
    int front()const {
        return array[0];
    }

    int back()const {
        return array[current_size - 1];
    }


    int at(int i)const {
        return array[i];
    }

    int size()const {
        return current_size;
    }

    int capacity()const {
        return max_size;
    }

    int operator[](const int i)const {

        return array[i];
    }

};