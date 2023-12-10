#include <iostream>
#include "utils.h"

using namespace std;

void CountingSort(vector<int>& A) {
    vector<int> C(A.size());
    for (int j = 0; j < C.size(); ++j) {
        C[A[j]]++;
    }
    for (int i = 1; i < C.size(); ++i) {  // Corrected loop index from A.size() to C.size()
        C[i] = C[i] + C[i - 1];
    }
    vector<int> B(A.size());
    for (int j = A.size() - 1; j >= 0; --j) {
        B[C[A[j]] - 1] = A[j];  // Corrected index to C[A[j]] - 1
        C[A[j]]--;
    }
    
    for(int num : B){
        cout << num << " ";
    }
}
int main(){
//Maximum Selection sort
    // int arr[5] = {4,5,3,2,1};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // Max_select(arr,size);

    // print(arr,size);
    // cout << endl;
    // int arr1[] = {4,5,3,2,1,7,5,9,10};
    // int size1 = sizeof(arr1)/sizeof(arr1[0]);
//Minimum Selection sort
    // Min_select(arr1,size1);

    // print(arr1,size1);

    //     cout << endl;
    // int arr2[] = {4,5,3,2,1,7,5,9,10};
    // int size2 = sizeof(arr2)/sizeof(arr2[0]);
//Insertion sort
    // Insert_sort(arr2,size2);

    // print(arr2,size2);
    // cout << endl;


//Merge sort
    // vector<int> v = {4,5,3,2,1,7,5,9,10};

//     MergeSort(v,0,v.size()-1);

//     for(int num : v){

//         cout << num << " ";
//     }

// cout << endl;
//Intersection

//     vector<int> A = {1,2,4,5,8};
//     vector<int> B = {2,4,6,7,8};

//     vector<int> C;

//     Intersection(A,B,C);

//     for(int num : C){
//         cout << num << " ";
//     }
// cout << endl;

//     vector<int>X = {1,2,2,4,5};
//     vector<int> Y = {1,2,3,4,5};
//     vector<int> Z;
//     Union(X,Y,Z);

//     for(int i : Z){
//         cout << i << " ";
//     }
    vector<int> v = {4,5,3,2,1,7,5,9,10};
    CountingSort(v);
    
    return 0;
}