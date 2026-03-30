/* to print pattern 123
                    456
                    789*/
#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int number = 1;

    for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
    cout<<number<<" " ;
    number++;}
    cout<<endl;}

    return 0;
}

(2) /*to print pattern ABC
                       DEF*/
#include<iostream>
using namespace std;
int main(){

    int n = 3;
    char alphabet = 'A';

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<alphabet<<"";
            alphabet++;
        }
        cout<<endl;
    }    
    return 0;
}    

(3) /*to print pattern *
                   **
                   ***
                   ****  */
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for( int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" * " ;
        }
        cout<<endl;

    }
    return 0;
}

(4) /*to print pattern 1
                       22
                       333
                       4444  */
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for( int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1 ;
        }
        cout<<endl;

    }
    return 0;
}

(5) /* to print 1
                12
                123
                1234
                12345*/
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<<" " ;
        }
        cout<<endl;
    }
    return 0;
}


