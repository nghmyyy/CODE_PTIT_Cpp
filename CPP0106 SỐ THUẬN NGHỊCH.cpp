#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string s1 = s;
        reverse(s.begin(), s.end());
        if(s.compare(s1) == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}