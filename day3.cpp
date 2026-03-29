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

//To check if a person is eligible to vote or not
#include<iostream>
using namespace std;

int main(){
    int age = 18;
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18){
        cout<<"You are eligible to vote.\n";
    }
    else{
        cout<<"You have to wait for few more years.\n";
    }
    return 0;
}

//If-else if- else statement;
#include<iostream>
using namespace std;

int main(){

    int marks = 86;

    if (marks>=90){
        cout<<"You have been passed with grade A\n";
    }
    else if (marks>=80){
        cout<<"You have been passed with division B\n";
    }
    else{
        cout<<"You have been awarded grade C\n";
    }
    return 0;
    }
    

//To check if specified character is in Uppercase or lowercase
#include<iostream>
using namespace std;
int main(){
    char character;

    cout<<"Enter a alphabet:";
    cin>>character;

    if (character >=65 && character < 90){
        cout<<"The entered alphabet is in UPPERCASE\n";
    }
    else if (character >= 97 && character < 122){
        cout<<"The alphabet is in lowercase\n";
    }
    else{
        cout<<"The entered character does not come under the category of alphabet";
    }
    
    return 0;
}
