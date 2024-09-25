// Program for swapping alternate element of an array 
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


// swap alternate
void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i= i+2){
        // check for next number is exist in array
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}


int main(){

    int oddArray[5] = {5, 2, 9, 7, 15};
    int evenArray[8] = {25, -24, -2, 5, 24, 57, 28, 45};

    cout << "Before swap oddArray elements are: ";
    printArray(oddArray, 5);
    swapAlternate(oddArray, 5);
    cout << "After swap aternate elements are: ";
    printArray(oddArray, 5);

    cout << endl;

    cout << "Before swap evenArray elements are: ";
    printArray(evenArray, 8);
    swapAlternate(evenArray, 8);
    cout << "After swap aternate elements are: ";
    printArray(evenArray, 8);

    return 0;
}