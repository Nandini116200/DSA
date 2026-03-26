// (1) to define a character and then print its ASCII value 
#include<iostream>
using namespace std;

int main(){
    char alphabet = 'A';
    int value = alphabet;
    cout<<value<<endl;
    return 0;
}

//(2) to cast Big-size data type Into small size data type.
#include<iostream>
using namespace std;

int main(){
    double rate = 101.99;
    int newrate = (int)rate;
    cout<<newrate<<endl;
    return 0;
}

//(3) To take input from user.
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Your age is:"<<age<<endl;
    return 0;
}

//(4) To perform different arithmetic operations.
#include<iostream>
using namespace std;

int main(){

    double a = 2;
    float b = 12.9;

    cout << "sum = "<<(a + b)<<endl;
    cout << "difference = "<<(a - b)<<endl;
    cout << "multiplication = "<<(a * b)<<endl;
    cout << "division = "<<(a / b)<<endl;
    //cout << "modulo = "<<(b % b)<<endl;

    return 0;
}

//(5) program that makes use of relational operators.
#include<iostream>
using namespace std;
 int main(){

    int a = 5;
    int b = 2;

    cout<<(a<b)<<endl;
    return 0;
 }

//(6) to take out sum of two numbers taking input from user
 #include<iostream>
 using namespace std;

 int main(){
    int number1 , number2;
    cout<<"Enter number1 = ";
    cin>>number1;
    cout<<"Enter number2 = ";
    cin>>number2;
    cout<<"The resultant sum of both the number is: "<<(number1 + number2)<<endl;

    return 0;
 }

