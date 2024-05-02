#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dem;
        for(int i = 0; i < s.size(); i++){
            int dem = 1;
            for(int j = i+1; j < s.size(); j++ ){
                if(s[j] == s[i] && s[i] >= 'A' && s[i] <= 'Z'){
                    dem ++;
                    s[j] = '0';
                } 
            }
            if(s[i] >= 'A' && s[i] <= 'Z'){
                cout << s[i] << dem;
            }
        }
        cout << endl;

    }
    
}