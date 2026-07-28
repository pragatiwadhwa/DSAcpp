//sorting
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//selection sort
/*
void SelectionSort(vector<int>&arr, int n){
    for(int i=0; i<n-1; i++){
        int MinIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[MinIndex])
                MinIndex=j;
            }
            swap(arr[MinIndex], arr[i]);
    }
}


//bubble sort- optimised 
void BubbleSort(vector<int>&arr, int n){
    for(int i=1; i<n; i++){
        bool swapped= false;
        for(int j=0; j< n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped= true;
            }
        }
        if(swapped==false)
            break;
    }
}


//insertionsort
void insertionSort(vector<int>&arr, int n){
    for(int i=1; i<n;i++){
        int temp= arr[i]; int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
*/
