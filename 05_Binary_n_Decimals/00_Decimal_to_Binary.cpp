// Program For Taking an Input of +ve Decimal number and print the binary of that number
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, ans = 0, i = 0;

    cout << "Enter a Decimal Number:" << endl;
    cin >> n;

    while(n != 0){
        // We Got LSB bit
        int bit = n & 1;
        // Reversing to print binary representation
        ans = (bit * pow(10,i)) + ans;
        // Eliminating LSB
        n = n >> 1;
        i++;
    }
    cout << "Binary Representation is : " << ans << endl;
}