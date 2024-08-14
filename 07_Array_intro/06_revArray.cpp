// Reverse of an array
#include<iostream>
using namespace std;

void revArr(int arr[], int size){
    int start = 0, end = size-1, temp;
    while(start <= end){
        // swap 
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // inc start and dec end
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int arr1[5] = {12, 23, 45, -22, 25};
    int arr2[6] = {25, -5, -8, -10, -23, 35};

    cout << "Before Reverse of arr1 elements are: ";
    printArray(arr1, 5);
    revArr(arr1, 5);
    cout << "After Reverse of arr1 elements are: ";
    printArray(arr1, 5);

    cout << endl;

    cout << "Before Reverse of arr2 elements are: ";
    printArray(arr2, 5);
    revArr(arr2, 5);
    cout << "After Reverse of arr2 elements are: ";
    printArray(arr2, 5);

    return 0;
}