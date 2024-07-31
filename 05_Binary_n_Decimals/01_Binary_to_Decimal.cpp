// Program For Taking an an input of a binary number print it's Decimal Number
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, i = 0, ans = 0;

    cout << "Enter a Binary Number(0/1)" << endl;
    cin >> n;

    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout << "Decimal is: " << ans << endl;
}