#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string str;
        int k;
        set<char> se;
        cin >> str >> k;
        if(str.length() < 26){
            cout << "0" << endl;
        }
        else{
            for(int i = 0; i < str.length(); i++){
                if(str[i]>= 'A' && str[i] <= 'Z'){
                    str[i] += 32;
                }
            }
            for(char x : str){
                se.insert(x);
            }
            if(26 - se.size() <= k){
                cout << "1" << endl;
            }
            else{
                cout << "0" <<endl;
            }
        }

    }
}