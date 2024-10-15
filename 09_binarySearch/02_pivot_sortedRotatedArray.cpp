// find the pivot element in a sorted rotated Array
#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    int sortedRotatedArray[] = {11, 13, 5, 8, 10};

    cout << "piovot Element of The Array is :" << sortedRotatedArray[findPivot(sortedRotatedArray, 5)];
    return 0;
}