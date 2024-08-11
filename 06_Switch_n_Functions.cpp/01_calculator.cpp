// A Simple Calculator with + - * / % operations
#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter First Number" << endl;
    cin >> a;

    cout << "Enter The Second Number:" << endl;
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform" << endl;
    cin >> op;

    switch(op){
        case '+': cout << (a+b) << endl;
                    break;
        case '-': cout << (a-b) << endl;
                    break;
        case '*': cout << (a*b) << endl;
                    break;
        case '/': cout << (a/b) << endl;
                    break;
        case '%': cout << (a%b) << endl;
                    break;
        default: cout << "!! Choose Correct Operation !!";
    }
}