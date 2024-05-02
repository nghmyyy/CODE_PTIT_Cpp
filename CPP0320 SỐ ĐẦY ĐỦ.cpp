#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        if(s[0] == '0'){
            cout << "INVALID" << endl;
            count++;
        }
        else{   
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i] > '9' && s[i] < '0'){
                    count++;
                    cout << "INVALID" <<endl;
                    break;
                }
            }
        }
        set<char> se;
        if(count == 0){
            for(char x : s){
                se.insert(x);
            }
            if(se.size() == 10){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
    }
}