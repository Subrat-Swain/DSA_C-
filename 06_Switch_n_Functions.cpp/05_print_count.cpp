#include<iostream>
using namespace std;

// returns nothing so void
void printCounting(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}
int main(){
    int n;

    cout << "Enter a Number:" << endl;
    cin >> n;
    printCounting(n);
    return 0;
}