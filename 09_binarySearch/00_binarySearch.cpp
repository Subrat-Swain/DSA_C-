// Binary Search : Elements must be in monotonic functioons(increase/decreasing order) or Sorted Elements
#include<iostream>
using namespace std;

int binarySearchIncArr(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + ((end - start) / 2);

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        // mid = (start + end) / 2;
        mid = start + ((end - start) / 2); // finding mid inside the integer range
    }
    return -1;
}

int binarySearchDecArr(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key < arr[mid]){
            start = mid + 1;
        }
        if(key > arr[mid]){
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main(){

    int evenIncArr[4] = {2, 8, 10, 22};
    int oddDecArr[5] = {55, 32, 12, 8, 2};

    int ans = binarySearchIncArr(evenIncArr, 4, 10);
    int ans2 = binarySearchDecArr(oddDecArr, 5, 8);

    cout << "10 is present at: " << ans << endl;
    cout << "8 is Present at : "<< ans2 << endl;



    return 0;
}