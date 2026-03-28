//If-Else statement: To check if a number is positive or negative
#include<iostream>
using namespace std;

int main(){
    int n = 50;
    cout<<"enter number:\n";
    cin>>n;
    if (n >= 0){
        cout << "n is positive\n";
    }else{
        cout << "n is negative\n";
    }
    return 0;
}

