#include<iostream>
using namespace std;

int main(){

    // Bitwise Operators:-

    int a = 4;
    int b = 6;

    // AND :-amp
    cout << "a & b = " << (a&b) << endl;
    // OR :-pipe
    cout << "a | b = " << (a|b) << endl;
    // NOT :- Tilda
    cout << "~a = " << ~a << endl;
    // XOR :- Caret / Circumflex
    cout << "a ^ b = " << (a ^ b) << endl;

    // Left Shift(<<) & Right shift(>>):-
    cout << "17 >> 1 = " << (17 >> 1) << endl;  // 17 / 2 = 8
    cout << "17 >> 2 = " << (17 >> 2) << endl;  // 17 / 2 = 8 / 2 = 4
    cout << "19 << 1 = " << (19 << 1) << endl;  // 19 * 2 = 38
    cout << "21 << 2 = " << (21 << 2) << endl;  // 21 * 2 = 42 * 2 = 84

    // Pre and Post Inc/Dec:-
    int i = 7;

    cout << "Pre Inc:-" << (++i) << endl;

    cout << "Post Inc:-" << (i++) << endl;

    cout << "Post Dec:-" << (i--) << endl;

    cout <<"Pre Dec:-" << (--i) << endl;

}