// Program for finding max and min in an array
#include<iostream>
using namespace std;
// max
int getMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++){
        
        // using in built method of array
        maxi = max(maxi, arr[i]);
        // if(max < arr[i]){
        //     max = arr[i];
        // }
    }
    return maxi;
}
// min
int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i = 0; i < size; i++){

        mini = min(mini, arr[i]);
        // if(min > arr[i]){
        //     min = arr[i];
        // }
    }
    return mini;
}
// print
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arrGiven[100];
    int size;

    cout << "Enter Number of values you want to compare: " ;
    cin >> size;

    cout << "Enter Values: ";
    for(int i = 0; i < size; i++){
        cin >> arrGiven[i];
    }

    cout << "Elements are: ";
    printArray(arrGiven, size);
    cout << endl << "Max is: " << getMax(arrGiven, size);
    cout << endl << "Min is: " << getMin(arrGiven, size);

    return 0;
}