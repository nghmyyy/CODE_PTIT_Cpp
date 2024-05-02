#include<bits/stdc++.h>
using namespace std;
//5 6 7 9 10
int td(string s){
    if(s[5] >= s[6]) return 0;
    if(s[6] >= s[7]) return 0;
    if(s[7] >= s[9]) return 0;
    if(s[9] >= s[10]) return 0;
    return 1;
}
int bn(string s){
    if(s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10]){
        return 1;
    }
    return 0;
}
int bcs_hcs(string s){
    if(s[5] == s[6] && s[6] == s[7] &&  s[9] == s[10]){
        return 1;
    }
    return 0;
}
int slp(string s){
    if(s[5] != '6' && s[5] != '8') return 0;
    if(s[6] != '6' && s[6] != '8') return 0;
    if(s[7] != '6' && s[7] != '8') return 0;
    if(s[9] != '6' && s[9] != '8') return 0;
    if(s[10] != '6' && s[10] != '8') return 0;
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(td(s) == 1 || bn(s) == 1 || bcs_hcs(s) == 1 || slp(s) == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}