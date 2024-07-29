#include<iostream>
using namespace std;

int main(){
    
    for(int i = 1; i <= 5; i++){
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        
        // From here no more execution for current iteration
        continue;

        // unreachable code
        cout << "IDhar To Ajao Ek Baar" << endl;
    }
}