#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int year = n /365;
    n -= (year*365);
    int week = n/7;
    n -= (week*7);
    cout << year << " " << week << " " << n << endl;

}