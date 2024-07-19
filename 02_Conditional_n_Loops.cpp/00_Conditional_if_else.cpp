#include<iostream>
using namespace std;

int main(){

/*
    // Number is +ve or -ve :-

    int n;
    cout << "Enter a Number: " << endl;
    // input in n
    cin >> n;

    // cout << "Entered Number is:" << n << endl;

    if(n > 0){
        cout << "Number is +ve" << endl;
    }
    else {
        cout << "Number is -ve" << endl;
    }
*/

/*
    // Compare Two Number:-

    int a , b;

    cout << "Enter Two Number:" << endl;
    
    cin >> a >> b;

    if(a > b) {
        cout << a << " is Greater" << endl;
    }
    if(a < b) {
        cout << b << " is Greater" << endl;
    }
    else {
        cout << a << " is equal to " << b << endl;
    }

*/

/*
    // cin.get() to take input as character in ASCII then convert it's int:-

    int a, b;

    cout << "Enter Two Number" << endl;

    // cin >> a >> b;
    a = cin.get();
    // a -> 1 => 49

    b = cin.get();

    cout << "Value of a is " << a << endl;

    cout << "value of b is " << b << endl;
    
*/


    // if - else if - else ladder:-

    int a ;

    cout << "Enter a Number:" << endl;
    cin >> a;

    if( a > 0){
        cout << a << " is a +ve Number" << endl;
    }
    else if( a < 0) {
        cout << a << " is a -ve Number" << endl;
    }
    else{
        cout << a << " is 0" << endl;
    }


}