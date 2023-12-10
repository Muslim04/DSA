#include "utils.h"

//using namespace std;
// MAXIMUM SELECTION SORT
void Max_select(int arr[], int size){

    for(int i=size-1; i > 0; --i){

        int MAX = 0;

        for(int j=1; j<=i; ++j){

            if(arr[j]>arr[MAX]){

                MAX = j;
            }
        }
        int tmp = arr[MAX];
        arr[MAX] = arr[i];
        arr[i] = tmp;
    }
}
// MINIMUM SELECTION SORT
void Min_select(int arr[], int size){

    for(int  i = 0; i < size-1; ++i){

        int MAX = size-1;

        for(int j = size-1; j >= i; --j){

            if(arr[j] > arr[MAX]){

                MAX = j;
            }
        }
        int tmp = arr[MAX];
        arr[MAX] = arr[i];
        arr[i] = tmp;

    }
}
// INSERTION SORT
void Insert_sort(int arr[],int size){

    for(int k=1; k < size; ++k){

        int aux = arr[k];
        int i = k-1;

        while(i >= 0 && arr[i]>aux){

            arr[i+1]=arr[i];
            i=i-1;
        }
    arr[i+1] = aux;
    }
}

// MERGE SORT

void merge(vector<int>& arr, int l, int m, int r){

    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1);
    vector<int> R(n2);

    for(int i = 0; i < n1; ++i){

        L[i]=arr[l+i];
    }
    for(int i = 0; i < n2; ++i){

        R[i] = arr[m+1+i];
    }


    int i = 0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2){

        if(L[i] <= R[j]){
            arr[k]=L[i];
            ++i;
        }else {

            arr[k] = R[j];
            ++j;


        }
        ++k;
    }

    while(i < n1){
        arr[k] = L[i];
        ++i;
        ++k;
    }

    while(j < n2){

        arr[k] = R[j];
        ++j;
        ++k;
    }



}
void MergeSort(vector<int>& arr,int l, int r){

    if(l < r){

        int m = l+(r-l)/2;

        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}

//Intersection

void Intersection(vector<int>& A,vector<int>& B,vector<int>& C){

        int j = 0,i = 0,k = 0;
        int n  = A.size();
        int m = B.size();

        while(i < n && j < m){

            if(A[i] < B[j]){

                ++i;
            }
            if(A[i] < B[j]){
                ++j;
            }
            else{
                C.push_back(A[i]);
                ++i;
                ++j;
            }
        }
}

//Union
void Union(vector<int>& A,vector<int>& B,vector<int>& C){

    int i =0,j = 0;
    int n = A.size();
    int m = B.size();

    while(i < n && j < m){

        if(A[i] < B[j]){
            if(C.empty() || A[i] != C.back())
                C.push_back(A[i]);

            ++i;
        }else if(A[i] > B[j]){
            if(C.empty() || B[j] != C.back())
                C.push_back(B[j]);
            ++j;
        }else{

            if(C.empty() || A[i] != C.back())
                C.push_back(A[i]);
            ++i;
            ++j;
        }

    }


    while(i < n){
        if(A[i] != C.back())
        C.push_back(A[i]);
        ++i;
    }
    while(j < m){
        if(B[j] != C.back())
        C.push_back(B[j]);
        ++j;
    }
}

void print(int arr[],int size){

    for(int i=0; i<size; ++i){

        cout << arr[i] << " ";
    }

}


