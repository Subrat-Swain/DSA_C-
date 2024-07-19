#include<iostream>
using namespace std;

int main(){
    
    // While Loop:-

/*
    // Print 1 to n:-

    int n, i = 1;

    cout << "Enter the Number:-"<< endl;

    cin >> n;

    while( i <= n){
        cout << i << endl;
        i++;
    }
*/

/*
    // Print sum 1 to n:-
    int n , sum = 0, i = 1;

    cout << "Enter The Number:" << endl;

    cin >> n;

    while( i <= n){
        sum = sum + i;
        i++;
    }

    cout << "Sum of 1 to " << n << " is: " << sum << endl;

*/

    // Prime or NOt :-

    int n, i = 2, f = 0;

    cout << "Enter a Number:" << endl;

    cin >> n;

    while( i < n){
        if( n % i == 0){
            f = 1;
        }
        i++;
    }

    if( f == 0){
        cout << n << " is a Prime Number" << endl;
    }
    else {
        cout << n << " is not a Prime Number" << endl;
    }




    
}