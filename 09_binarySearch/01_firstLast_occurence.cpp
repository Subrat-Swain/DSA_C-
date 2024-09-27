// Find First and Last position of an element in a sorted array
#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + ((end-start)/2);
    int ans = -1;

    while(start <= end){
        // if key mathches we got ans and go for the left occurence
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){ // go for right part
            start = mid + 1;
        }
        else if(key < arr[mid]){ // go for left part
            end = mid - 1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}



int lastOcc(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int mid = start + ((end-start)/2);
    int ans = -1;

    while(start <= end){
        // if key mathches we got ans and go for the right occurence
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){// go for right part
            start = mid + 1;
        }
        else if(key < arr[mid]){ // go for left part
            end = mid - 1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}

int main(){
    int evenArray[8] = {1, 2, 2, 2, 2, 12, 15, 18};
    int oddArray[5] = {1, 2, 4, 4, 4};

    cout << "LeftOccurence of 2 is: " << firstOcc(evenArray, 8, 2) << endl;
    cout << "RightOccurence of 2 is: " << lastOcc(evenArray, 8, 2) << endl;

    cout << "Left Occurence of 4 is: " << firstOcc(oddArray, 5, 4) << endl;
    cout << "Right Occurence of 4 is: " << lastOcc(oddArray, 5, 4) << endl;


    return 0;
}