#include<bits/stdc++.h>
using namespace std;
void vietthuong(string &s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
}
void inchucaidautien(string &s){
    s[0] = tolower(s[0]);
    cout << s[0];
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tok;
    vector<string> v;
    while (ss >> tok)
    {
        v.push_back(tok);
    }
    vietthuong(v[v.size() - 1]);
    cout << v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        inchucaidautien(v[i]);
    }
    cout << "@ptit.edu.vn";

}