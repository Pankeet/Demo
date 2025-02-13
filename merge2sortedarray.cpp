#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m , int mergeary[]){
    int i = 0, j = 0 ;
    int index = 0 ;
    while(i < n && j < m){

        if(arr1[i] <= arr2[j]){
            mergeary[index++] = arr1[i++];
        }
        else{
            mergeary[index++] = arr2[j++];
        }
    }

    while(i < n){
        mergeary[index++] = arr1[i++] ;
    }

    while(j < n){
        mergeary[index++] = arr2[j++] ;
    }
}

int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int mergesorted[8];

    merge(arr1 , 5 , arr2 , 3 , mergesorted);

    for(auto i : mergesorted){
        cout << i << " ";
    }
}