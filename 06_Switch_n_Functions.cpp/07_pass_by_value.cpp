#include<iostream>
using namespace std;

void dummy(int n){
    // Here n is a copy of n of main() i.e Pass by Value
    n++;
    cout << "n is " << n << endl;
}

int main(){
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;

    dummy(n);

    cout << "number n is " << n << endl;
    return 0;
}