#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing the array "<< endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Done" << endl;
}


int main(){

    int second[25] = {2, 7, 11, 25};
    printArray(second, 25);

    int secondSize = sizeof(second) / sizeof(int);
    cout << "Size Of second array is : " << secondSize << endl;
    return 0;
}