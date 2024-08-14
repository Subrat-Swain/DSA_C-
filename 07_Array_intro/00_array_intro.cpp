#include<iostream>
using namespace std;

int main(){
    // declaration
    int number[15];

    cout << "Value at 0 index: " << number[0] << endl;
    // cout << "Value at 14 index: " << number[13] << endl;
    // cout << "Value at 10 index: " << number[9] << endl;


    // cout << "Value at 20 index: " << number[19] << endl;

    int second[3] = {5, 7, 11};
    cout << "Value at 2 index " << second[2] << endl;

    int n = 15;
    int third[15] = {2,7};
    // initialize array with two values remaining 0
    for(int i = 0; i < n; i++){
        // printing the array
        cout << third[i] << " ";
    }
    
    cout << endl;

    n = 10;
    // initialize with all zeroes
    int fourth[10] = {0};
    for(int i = 0; i < n; i++){
        cout << fourth[i] << " ";
    }

    cout << endl;
    
    n = 10;
    // initialize with all zeroes
    int fifth[10] = {1};
    // only first element is 1 remaining 0
    for(int i = 0; i < n; i++){
        cout << fifth[i] << " ";
    }

    cout << endl << " Everything is Fine" << endl << endl;


    return 0;

}