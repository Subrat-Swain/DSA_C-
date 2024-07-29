// Check Whether Number is a Prime or Not Using For Loop
#include<iostream>
using namespace std;

int main(){

    int n;

    // isPrime is a boolean acting as a flag variable of 1 byte
    bool isPrime = true;

    cout << "Enter a Number To Check Prime Or Not :" << endl;
    cin >> n;

    for(int i = 2; i < n; i++){

        // Not a Prime Number
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << n << " is a Prime Number" << endl;
    }
    else{
        cout << n << " is not a Prime Number" << endl;
    }
}