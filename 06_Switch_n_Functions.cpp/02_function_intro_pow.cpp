// Intro to Function pow(a,b)
#include<iostream>
using namespace std;

// Function Prototype / Signature
int power(int, int);

int main(){

    int a, b;
    cout << "Enter Two Number:" << endl;
    cin >> a >> b;

    // Function call
    int ans = power(a,b);
    cout << "Answer is: " << ans << endl;
}

// Function Definition
int power(int c, int d){ 
    int ans = 1;
    for(int i = 0; i < d; i++){
        ans = ans * c;
    }
    return ans;
}