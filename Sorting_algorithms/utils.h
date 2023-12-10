#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <vector>
using namespace std;

void Max_select(int arr[], int size);

void print(int arr[],int size);

void Min_select(int arr[], int size);
void Insert_sort(int arr[],int size);


void MergeSort(vector<int>& arr,int l, int r);

void merge(vector<int>& arr, int l, int m, int r);

void Intersection(vector<int>& A,vector<int>& B,vector<int>& C);
void Union(vector<int>& A,vector<int>& B,vector<int>& C);

// void CountingSort(vector<int>& A);

#endif//UTILS_h