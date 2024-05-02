#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n;
    cin >> n;
    float i = ( n * 9/5 ) + 32;
    std :: cout << fixed << setprecision(2) << i << endl;
}