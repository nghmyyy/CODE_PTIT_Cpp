#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     float a, b;
    char e;
    cin >> a >> e >> b;
    if( e == '+'){
        cout << fixed << setprecision(2) << a + b; 
    }
    if( e == '-'){
        cout << fixed << setprecision(2) << a - b; 
    }
    if( e == '*'){
        cout << fixed << setprecision(2) << a * b; 
    }
    if( e == '/'){
        cout << fixed << setprecision(2) << a / b; 
    }
    
}