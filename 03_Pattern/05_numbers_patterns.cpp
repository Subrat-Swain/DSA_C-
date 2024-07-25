#include<iostream>
using namespace std;

int main(){
    /*
        1111
         222
          33
           4
    */
/*
    int n, row = 1;

    cout << "Enter a Number:";
    cin >> n;

    while(row <= n){

        int space = row - 1;
        while(space){
            cout << " ";
            space--;
        }

        int numbers = (n - row) + 1;

        while(numbers){
            cout << row;
            numbers--;
        }
        cout << endl;
        row++;
    }
*/

    /*
           1
          22
         333
        4444
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
        int numbers = row;
        while(numbers){
            cout << row;
            numbers--;
        }
        cout << endl;
        row++;
    }
*/

    /*
        1234
         234
          34
           4
    */
/*
    int n, row = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(row <= n){

        int space = row - 1;
        while(space){
            cout << " ";
            space--;
        }

        int numbers = (n - row) + 1;
        while(numbers){
            cout << (n - numbers) + 1;
            numbers--;
        }
        cout << endl;
        row++;
    }
*/

    /*
           1
          23
         456
        78910
    */
/*
    int n, row = 1, num = 1;

    cout << "Enter a number:" << endl;
    cin >> n;

    while(row <= n){

        int space = n - row;

        while(space){
            cout << " ";
            space--;
        }

        int numbers = row;
        while(numbers){
            cout << num;
            num++;
            numbers--;
        }
        cout << endl;
        row++;
    }
*/

    /*
           1
          121
         12321
        1234321
    */

/*
    int n, row = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(row <= n){

        // printing spaces
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }

        // int leftNumbers = row;
        // int num1 = 1;
        // while(leftNumbers){
        //     cout << num1;
        //     num1++;
        //     leftNumbers--;
        // }

        // int rightNumbers = row - 1;
        // int num2 = row - 1;     // no need
        // while(rightNumbers){
        //     cout << num2;
        //     num2--;
        //     rightNumbers--;
        // }

        int col = 1;
        while(col <= row){
            cout << col;
            col++;
        }

        int start = row - 1;
        while(start){
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
*/
    /*
        Dabbang Pattern:-

        1234554321
        1234**4321
        123****321
        12******21
        1********1
    */

    int n, row = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while(row <= n){

        // First Triangle:-
        int col1 = 1;
        int end = (n-row) + 1;
        while(col1 <= end){
            cout << col1;
            col1++;
        }

        // Second Star Triangle:-
        int star = (row - 1) * 2;
        while(star){
            cout << "*";
            star--;
        }

        // Third Triangle:-
        int col2 = (n-row)+1;
        while(col2 >= 1){
            cout << col2;
            col2--;
        }
        cout << endl;
        row++;
    }

}