#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        map<char, int> mp;
        long long ans = s.length();
        for(char x : s){
            mp[x]++;
        }
        for(auto it : mp){
            ans += it.second * (it.second - 1) / 2;
        }
        cout << ans << endl;
    }
    
}