// Program for finding floor square root of a number
#include<iostream>
using namespace std;

// integer Part - O(logn)
int findIntSqrt(int n){
    int start = 0, end = n;
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start <= end){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

// floor Part
double findFloorSqrt(int n, int precision, int intSqrt){
    double ans = intSqrt;
    double factor = 1;
    for(int i = 1; i <= precision; i++){
        factor = factor / 10;   // we got the 0.1 first iteration while in second 0.01
        for(double j = ans; j*j < n; j = j+factor){
            ans = j;
        }

    }
    return ans;
}

int main(){
    int n;
    cout << "Enter A Number: ";
    cin >> n;

    int sqrt = findIntSqrt(n);
    double floorSqrt = findFloorSqrt(n,3,sqrt);
    cout << "Square Root Of " << n << " is: " << sqrt << endl;
    cout << "Floor Square Root of " << n << " is: " << floorSqrt << endl;

    return 0;
}