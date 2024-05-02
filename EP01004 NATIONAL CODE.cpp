#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        int x = a.find("084");
        a.erase( a.begin() + x, a.begin() + x + 3);
        cout << a << endl;
    }
}