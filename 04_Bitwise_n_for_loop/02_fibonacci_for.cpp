// Fibonacci Series Using For Loop
#include<iostream>
using namespace std;

int main(){
    int n, prv = 0, nxt = 1;

    cout << "Enter nth position of fibonacci series" << endl;
    cin >> n;

    // First Two Numbers
    cout << prv << " " << nxt << " ";

    for(int i = 1; i < n-1; i++){
        
       int cur = prv + nxt;
       cout << cur << " ";
       prv = nxt;
       nxt = cur;
    }
}