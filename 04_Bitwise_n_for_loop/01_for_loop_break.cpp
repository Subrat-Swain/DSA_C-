#include<iostream>
using namespace std;

int main(){

/*
    int n, i = 1;

    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "Printing cout from 1 to n" << endl;


    // For Loop:-
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }

    // Empty For Loop:-
    for( ; ; ){
        if(i <= n){
            cout << i << endl;
        }
        else{
            break;
        }
        i++;
    }

    // Multiple Initialization, Conditions and Updations

    for( int a = 0, b = 1, c = 2; a <= n && b <= n && c <= n; a++, b++, c++){
        cout << a << " " << b << " " << c << endl;
    }
*/

    // Sum Of 1 to n using for loop

    int n, sum = 0;

    cout << "Enter a Number:" << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum Of 1 to " << n << " is : " << sum << endl;

    
}