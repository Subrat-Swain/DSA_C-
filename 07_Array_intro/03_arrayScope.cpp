#include<iostream>
using namespace std;

/*
    It Changes the actual array coz the first address of array passed to function
    so it has ability to change the actual array
*/

void update(int arr[], int size){
    arr[0] = 215;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int numbers[3] = {1, 2, 3};

    cout << "Before Update Elements are: ";
    printArray(numbers, 3);
    cout << endl;
    update(numbers, 3);
    cout << "After Update Elements are: ";
    printArray(numbers, 3);
    
    return 0;
}