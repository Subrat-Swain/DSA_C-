// Program For Printing sum of all elements in an array
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int arraySum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int numbers[100];
    int size;
    cout << "Enter How Many Values you want to add: ";
    cin >> size;

    cout << "Enter Numbers: ";
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    cout << "Numbers are: ";
    printArray(numbers, size);

    int sum = arraySum(numbers, size);

    cout << "Sum of Values: " << sum << endl;


    return 0;
}