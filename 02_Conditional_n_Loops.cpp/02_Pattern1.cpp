#include<iostream>
using namespace std;

int main(){
    
/*
    // ****
    // ****
    // ****
    // ****
    int n, i = 1;

    cout << "Enter a Number to print pattern" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
*/

    // 111
    // 222
    // 333
    int n, i = 1;

    cout << "Enter a number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= n){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}