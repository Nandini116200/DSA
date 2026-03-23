#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int i;

    cout<<"Give me 5 numbers:"<< endl;

    for(i = 0; i<5; i++){
        cin >> arr[i];
    }
    cout<<"Array Elements are:";

    for(i = 0; i<5; i++){
        cout << arr[i]<<"";
    }
    return 0;
}