#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int dem = 0;
        stringstream ss(s);
        string tok;
        while(ss >> tok){
          dem ++;
        }
        cout << dem << endl;
    		
    }
}