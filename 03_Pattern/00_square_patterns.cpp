#include<iostream>
using namespace std;

int main(){
    
    /*
            1   2   3   4
            1   2   3   4
            1   2   3   4
            1   2   3   4
    */

/*
   int n, i = 1;

   cout << "Enter a Number:"<< endl;
   cin >> n;

    while( i <= n){

        int j = 1;
        while( j <= n){
            
            cout << j << " ";
            j++;
            
        }
        cout << endl;
        i++;

    }
*/

    /*
        3   2   1
        3   2   1
        3   2   1
    */

/*
    int n, i = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = n;
        while( j > 0) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
*/

    /*
        1   2   3
        4   5   6  
        7   8   9
    */
    int n, i = 1, count = 1;

    cout << "Enter a Number:" << endl;
    cin >> n;

    while( i <= n){
        int j = 1;
        while( j <= n){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i = i + 1;
    }

}