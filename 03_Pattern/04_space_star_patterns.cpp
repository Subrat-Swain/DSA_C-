#include<iostream>
using namespace std;

int main(){

    /*
           *
          **
         ***
        ****
    */
/*
    int n, row = 1;
    
    cout << "Enter a Number:" << endl;
    cin >> n;

    while(row <= n){

        int space = n - row;

        while(space){
            cout << " ";
            space--;
        }

        int col = 1;
        while(col <= row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
*/


    /*
        ****
        ***
        **
        *
    */
/*
    int n, row = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while (row <= n){
        int star = (n - row) + 1;
        while(star){
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
*/

    /*
        ****
         ***
          **
           *
    */

    int n, row = 1;

    cout << "Enter a Number:";
    cin >> n;

    while(row <= n){

        int space = row - 1;

        while(space){
            cout << " ";
            space--;
        }

        int star = (n - row) + 1;

        while(star){
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
}