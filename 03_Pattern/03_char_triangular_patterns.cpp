#include<iostream>
using namespace std;

int main(){

    /*
        A
        B B
        C C C
    */
/*
    int n, i = 1;

    cout << "Enter a Number:"<< endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = ('A' + i) - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        A
        B C
        D E F
        G H I J
    */
/*
    int n, i = 1;
    char ch = 'A';

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        A
        B C
        C D E
        D E F G
    */
/*
    int n, i = 1;

    cout << "Enter a Number:-" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + (i + j) - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/


    /*
        D
        C D
        B C D
        A B C D
    */
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + n - i + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/
        // OR

    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        char ch = 'A' + (n - i);
        while(j <= i){
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }


    
}