#include<iostream>
using namespace std;

int main(){
/*
    // passing Integer in switch case
    int num = 2;

    switch(num){
        case 1: cout << "First"<< endl;
                break;
        case 2: cout << "Second" << endl;
                break;
        default: cout << "It is default case" << endl;
    }

    cout << endl;

    return 0;

*/

    // Passing Character in switch statement
    char ch = '1';

    switch(ch){
        case 1: cout << "First"<< endl;
                break;
        case '1': cout << "Second" << endl;
                break;
        default: cout << "It is default case" << endl;
    }

    cout << endl;

    return 0;

}