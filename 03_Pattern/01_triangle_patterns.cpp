#include<iostream>
using namespace std;

int main(){

    /*
        *
        * *
        * * *
        * * * *
    */

/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i ++;
    }
*/

    /*
        1
        2 2
        3 3 3
        4 4 4 4
    */
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        1
        2 3
        4 5 6
        7 8 9 10
    */
/*
    int n, i = 1, count = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
*/

    /*
        1
        1 2
        2 3 4
        4 5 6 7
    */
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while ( i <= n){
        int j = 1;
        int count = i;
        while( j <= i){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
*/
                // OR Without count variable
/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n) {
        int j = 1;
        while(j <= i){
            cout << (i + j) -1 << " ";
            j = j + 1;
        }
        cout << endl;
        i++;
    }
*/

    /*
        1
        2 1
        3 2 1
        4 3 2 1
    */
    int n, i = 1;

    cout << "Enter a Number" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= i){
            cout << (i-j)+1 << " ";
            j = j +1;
        }
        cout << endl;
        i = i + 1;
    }

}