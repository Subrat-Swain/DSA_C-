// Linear Search
#include<iostream>
using namespace std;

// print the array
// void printArray(int arr[], int size){
//   for(int i = 0; i < size; i++){
//     cout << arr[i] << " ";
//   }  
// }

// input to array
void inputArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
// linear Search
bool linearSearch(int arr[], int size){
    int n;
    bool isPresent = false;
    cout << "Enter The Number Want to Search: ";
    cin >> n;
    for(int i = 0; i < size; i++){
        if(n == arr[i]){
            isPresent = true;
        }
    }
    return isPresent;
}

int main(){
    int numbers[100];
    int size;

    cout << "Enter the size of list: ";
    cin >> size;
    cout << "Enter list items: ";
    inputArray(numbers, size);
    // printArray(numbers, size);

    if(linearSearch(numbers, size)){
        cout << "Number is Present in the list" << endl;
    }
    else{
        cout << "Number is Not Present in the list" << endl;
    }



    return 0;
}