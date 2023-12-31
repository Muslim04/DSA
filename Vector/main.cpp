#include<iostream>

using namespace std;


class Vector{
public: 
    int* data;
    int capacity;
    int size;
public:
    Vector(){
        size = 0;
        capacity = 1;
        data = new int[capacity];
    }

    ~Vector(){
        delete[] data;
    }

    void push_back(int a)
    {
        if(size==capacity){
            capacity*=2; // if capacity is full 

            int* newData = new int[capacity];

            for(int i = 0; i < size; ++i)
                {
                    newData[i] = data[i];
                }

            delete[] data;

            data = newData;
        }

        data[size] = a;

        size++;
       
    }
    void pop_back(){

        if(size > 0){

            --size;
        }
        
    }

    int back(){

        if(size > 0){

            return data[size-1];

        }else{

            return -1;
        }
    }
int getSize(){

    return size;
}



    
};



int main(){

    Vector v1 = Vector();

    v1.push_back(1);
    for(int i = 2; i < 10; ++i){
        v1.push_back(i);
    }

    for(int j = 0; j < 9; ++j)
    {
        cout << v1.data[j] << " ";
    }

   // cout << v1.data[0];
   
    cout << v1.back() << "\n";

    cout << v1.getSize() << "\n";

    v1.pop_back();
    v1.pop_back();
    cout << v1.back() << " \n";

    cout << v1.data[6];
    return 0;
}