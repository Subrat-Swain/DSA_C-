// Program for Identifying prime number or not
#include<iostream>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a Prime Number" << endl;
    }
    else{
        cout << n << " is not a Prime Number" << endl;
    }

    return 0;
}