#include<iostream>
using namespace std;

int main(){

    /*
        A A A
        B B B
        C C C
    */
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    char ch = 'A';

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
*/

            // OR print 'A' + i -1
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while(j <= n){
            char ch = ('A' + i) - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        A B C
        A B C
        A B C
    */
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = ('A' + j) -1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
*/

    /*
        A B C
        D E F
        G H I
    */
/*
    int n, i = 1;
    char ch = 'A';

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        A B C
        B C D
        C D E
    */
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A' + (i+j-2);
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }




}