#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
     s[0] = toupper(s[0]);
     for(int i = 1; i < s.size(); i++){
       s[i] = tolower(s[i]);
     }
}
void ch1(vector<string> v){
    cout << v[v.size() - 1] <<" ";
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i] << " ";
    }
}
void ch2(vector<string> v){
    for(int i = 1; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << v[0];
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tok;
        vector<string> v;
        while(ss >> tok){
            v.push_back(tok);
        }
        for(int i = 0; i < v.size();i++){
        	chuanhoa(v[i]);
        }
        if(n==1){
            ch1(v);
        }
        if(n==2){
            ch2(v);
        }
        cout << endl;

    }
}