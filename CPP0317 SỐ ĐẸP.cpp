#include<bits/stdc++.h>
using namespace std;
int stn(string s){
    string s1 = s;
    reverse(s.begin(), s.end());
    if(s1.compare(s) == 0){
        return 1;
    }
    return 0;
}
int even(string s){
    for(int i = 0; i < s.size();i++){
        if(s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8' ){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(stn(s) ==1 && even(s) == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}