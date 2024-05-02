#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] < '0' || s[i] > '9'){
                s[i] = ' ';
            }
        }
        stringstream s1(s);
        string n;
        string b= "";
        while(s1 >> n){
            b+=n;
        }
        if(b[0] == '8' && b[1] == '4'){
            cout << "0";
            for(int i = 2; i < b.size();i++){
                cout << b[i];
            }
        }
        else{
            cout << b;
        }
        cout << endl;
    }
}