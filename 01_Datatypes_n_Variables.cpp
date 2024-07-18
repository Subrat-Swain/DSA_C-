#include<iostream>
using namespace std;

int main(){

/*
    int a = 123;

    cout << a << endl;
    cout << "size of int:-" << sizeof(a) << endl;

    char b = 'v';

    cout << b << endl;
    cout << "size of single char:-" << sizeof(b) << endl;

    bool b1 = true;

    cout << b1 << endl;
    cout << "size of boolean:-" << sizeof(b1) << endl;

    float f = 1.2;
    
    cout << f << endl;
    cout << "size of float:-" << sizeof(f) << endl;

    double d = 1.23;

    cout << d << endl;
    cout << "size of double:-" << sizeof(d) << endl;
    
*/

/*
    // ASCII Mapping:-
    int a = 'a';
    cout << a << endl;

    char ch = 98;
    cout << ch << endl;


    // it will take last 1byte converts it into character in this case 64 converts into @
    char ch1 = 123456;
    cout << ch1 << endl;

*/

/*
    // 2's complement of 122 stored but compiler treat it as unsigned so it that 2's complement's decimal value give a large number
    unsigned int a = -122;
    cout << a << endl;

*/

/*
    // Arithmatic Operator:-
    int / int = int 
    float / int = float
    double / int = double

    int a = 2/5;
    cout << a << endl;

*/

    // Relational Operator:-
    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a <= b);
    cout << second << endl;

    bool third = (a >= b);
    cout << third << endl;

    bool fourth = (a != b);
    cout << fourth << endl;

    bool fifth = (a < b);
    cout << fifth << endl;

    bool sixth = (a > b);
    cout << sixth << endl;

}